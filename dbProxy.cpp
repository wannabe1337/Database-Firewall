#include <iostream>
#include <iomanip> // Include the <iomanip> header for std::setw
#include <cstring>
#include <arpa/inet.h>
#include <event2/buffer.h>
#include <event2/event.h>
#include <event2/bufferevent.h>
#include <event2/listener.h>

// Custom headers
#include "heuristic_based_detection.hpp"

// Forward declaration of callback functions
void client_read_cb(bufferevent *bev, void *ctx);
void client_write_cb(bufferevent *bev, void *ctx);
void client_event_cb(bufferevent *bev, short events, void *ctx);
void mysql_read_cb(bufferevent *bev, void *ctx);
void mysql_write_cb(bufferevent *bev, void *ctx);
void mysql_event_cb(bufferevent *bev, short events, void *ctx);

// Struct to hold client and MySQL bufferevent objects
struct ProxyContext {
    bufferevent *client_bev;
    bufferevent *mysql_bev;
};

// Callback function for accepting client connections
void accept_conn_cb(evconnlistener *listener, evutil_socket_t fd, sockaddr *address, int socklen, void *ctx) {
    event_base *base = evconnlistener_get_base(listener);

    // Create a new bufferevent for the client connection
    bufferevent *client_bev = bufferevent_socket_new(base, fd, BEV_OPT_CLOSE_ON_FREE);
    if (!client_bev) {
        std::cerr << "Error creating client bufferevent\n";
        return;
    }

    // Create a new MySQL bufferevent
    bufferevent *mysql_bev = bufferevent_socket_new(base, -1, BEV_OPT_CLOSE_ON_FREE);
    if (!mysql_bev) {
        std::cerr << "Error creating MySQL bufferevent\n";
        bufferevent_free(client_bev);
        return;
    }

    // Connect to MySQL server
    sockaddr_in sin;
    std::memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = inet_addr("127.0.0.1"); // MySQL server IP address
    sin.sin_port = htons(3306); // MySQL server port
    if (bufferevent_socket_connect(mysql_bev, reinterpret_cast<sockaddr *>(&sin), sizeof(sin)) < 0) {
        std::cerr << "Error connecting to MySQL server\n";
        bufferevent_free(client_bev);
        bufferevent_free(mysql_bev);
        return;
    }

    // Set callbacks for client and MySQL bufferevents
    ProxyContext *proxy_ctx = new ProxyContext{client_bev, mysql_bev};
    bufferevent_setcb(client_bev, client_read_cb, client_write_cb, client_event_cb, proxy_ctx);
    bufferevent_setcb(mysql_bev, mysql_read_cb, mysql_write_cb, mysql_event_cb, proxy_ctx);

    // Enable reading and writing on client and MySQL bufferevents
    bufferevent_enable(client_bev, EV_READ | EV_WRITE);
    bufferevent_enable(mysql_bev, EV_READ | EV_WRITE);
}

// Callback function for reading data from the client
void client_read_cb(bufferevent *bev, void *ctx) {
    ProxyContext *proxy_ctx = static_cast<ProxyContext *>(ctx);
    bufferevent *mysql_bev = proxy_ctx->mysql_bev;
    bufferevent *client_bev = proxy_ctx->client_bev;

    // Read data from the client bufferevent
    evbuffer *input = bufferevent_get_input(bev);
    size_t len = evbuffer_get_length(input);
    if (len > 0) {
        // Read data from the client input buffer and forward it to the MySQL server
        char buffer[4096];
        evbuffer_remove(input, buffer, std::min(len, sizeof(buffer)));

// ----------------------- FOR DEBUG ----------------------- 
        // // Print the request in hexadecimal format
        // std::cout << "Client request (hex): ";
        // // Function to print data in hexadecimal format
        // std::ostringstream oss;
        // oss << std::hex << std::setfill('0');
        // for (size_t i = 0; i < len; ++i) {
        //     oss << std::setw(2) << static_cast<unsigned int>(static_cast<unsigned char>(buffer[i])) << " ";
        // }
        // std::string hexreq;
        // hexreq=oss.str();
        // std::cout<<hexreq<<std::endl;

        // Print out the fifth byte
        std::cout << "Fifth byte of client request in hexadecimal: ";
        std::cout << std::hex << std::setw(2) << std::setfill('0') << static_cast<unsigned int>(static_cast<unsigned char>(buffer[4])) << std::endl;
// ----------------------- FOR DEBUG ----------------------- 
        
        bool safe_query=true;
        // 0x03 indicates command QUERY in request
        if(static_cast<unsigned char>(buffer[4])==0x03){
            //extract query by stripping out first five bytes for further processing
            size_t query_len = len - 5; // New size after stripping out the fifth byte
            char client_query[4096]; // Adjust the buffer size as needed
            std::memcpy(client_query, buffer + 5, len - 5); // Copy bytes after the fifth byte

            std::cout<<"Query is : "<<std::string(client_query, query_len)<<std::endl;

            if(!is_query_safe(client_query)){
                safe_query=false;
                const char* error_message = "Error: Unsafe query detected. Query cannot be executed.";
                bufferevent_write(client_bev, error_message, strlen(error_message));
            }
        }
        if(safe_query){
            // Forward the query to the MySQL server
            bufferevent_write(mysql_bev, buffer, len);        
        }
    }
}

// Callback function for writing data to the client
void client_write_cb(bufferevent *bev, void *ctx) {
    // Nothing to do here for now
}

// Callback function for client bufferevent events
void client_event_cb(bufferevent *bev, short events, void *ctx) {
    if (events & BEV_EVENT_ERROR) {
        std::cerr << "Error on client connection\n";
    }
    if (events & (BEV_EVENT_EOF | BEV_EVENT_ERROR)) {
        ProxyContext *proxy_ctx = static_cast<ProxyContext *>(ctx);
        bufferevent_free(proxy_ctx->client_bev);
        bufferevent_free(proxy_ctx->mysql_bev);
        delete proxy_ctx;
    }
}

// Callback function for reading data from the MySQL server
void mysql_read_cb(bufferevent *bev, void *ctx) {
    ProxyContext *proxy_ctx = static_cast<ProxyContext *>(ctx);
    bufferevent *client_bev = proxy_ctx->client_bev;

    // Read data from the MySQL bufferevent
    evbuffer *input = bufferevent_get_input(bev);
    size_t len = evbuffer_get_length(input);
    if (len > 0) {
        // Read data from the MySQL input buffer and forward it to the client
        char buffer[4096];
        evbuffer_remove(input, buffer, std::min(len, sizeof(buffer)));
        
        // Forward the response to the client
        bufferevent_write(client_bev, buffer, len);
    }
}

// Callback function for writing data to the MySQL server
void mysql_write_cb(bufferevent *bev, void *ctx) {
    // Nothing to do here for now
}

// Callback function for MySQL bufferevent events
void mysql_event_cb(bufferevent *bev, short events, void *ctx) {
    if (events & BEV_EVENT_ERROR) {
        std::cerr << "Error on MySQL connection\n";
    }
    if (events & (BEV_EVENT_EOF | BEV_EVENT_ERROR)) {
        ProxyContext *proxy_ctx = static_cast<ProxyContext *>(ctx);
        bufferevent_free(proxy_ctx->client_bev);
        bufferevent_free(proxy_ctx->mysql_bev);
        delete proxy_ctx;
    }
}

int main() {
    // Initialize libevent
    event_base *base = event_base_new();
    if (!base) {
        std::cerr << "Error initializing libevent\n";
        return 1;
    }

    // Create a sockaddr_in structure for server address
    sockaddr_in sin;
    std::memset(&sin, 0, sizeof(sin));
    sin.sin_family = AF_INET;
    sin.sin_addr.s_addr = htonl(INADDR_ANY);
    sin.sin_port = htons(3307); // Proxy server port

    // Create a new evconnlistener to listen for incoming connections
    evconnlistener *listener = evconnlistener_new_bind(base, accept_conn_cb, base, LEV_OPT_CLOSE_ON_FREE | LEV_OPT_REUSEABLE, -1, reinterpret_cast<sockaddr *>(&sin), sizeof(sin));
    if (!listener) {
        std::cerr << "Error creating listener\n";
        event_base_free(base);
        return 1;
    }

    // Start the event loop
    event_base_dispatch(base);

    // Clean up
    evconnlistener_free(listener);
    event_base_free(base);

    return 0;
}
