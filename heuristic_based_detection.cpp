#include <iostream>
#include <string>
#include <regex>
#include "parser/parser.hpp"    // it also includes patterns.hpp
#include "conf/settings.hpp"


struct config{
    // risk engine factors
    int re_block_level;
    int re_warn_level;
    int re_sql_comments;
    int re_s_tables;
    int re_or_token;
    int re_union_token;
    int re_var_cmp_var;
    int re_always_true;
    int re_empty_password;
    int re_multiple_queries;
    int re_bruteforce;

    int log_level;

};
config conf={
.re_block_level = 30,
.re_warn_level = 20,
.re_sql_comments = 30,
.re_s_tables = 10,
.re_or_token = 5,
.re_union_token = 5,
.re_var_cmp_var = 30,
.re_always_true = 30,
.re_empty_password = 30,
.re_multiple_queries = 30,
.re_bruteforce = 15,
};


static SQLPatterns mysql_patterns;

bool mysql_patterns_init(std::string & path)
{
    std::string file = path + "mysql.conf";

    return mysql_patterns.Load(file);
}

unsigned int calculateRisk(std::string & query,
  std::string & reason)
{
        
    // conf.log_level = 3;
    // Tokenize the query and identify anomaly features
    query_risk risk;
    std::string path="conf/";
    
    if(mysql_patterns_init(path)==false){
        std::cout<<"Failed to load cfg file";
        return -1;
    }

    if(query_parse(&risk, &mysql_patterns,query.c_str())==false){
        std::cout<<"Parsing Failed"<<std::endl;
        return -1;
    }
    
    unsigned int ret = 0;

    if (conf.re_sql_comments > 0 &&
        risk.has_comment == 1)
    {
        reason += "Query has comments\n";
        // logevent(DEBUG, "Query has comments\n");
        ret += conf.re_sql_comments;
    }

    if (conf.re_s_tables > 0 &&
        risk.has_s_table == 1)
    {
        reason += "Query uses sensitive tables\n";
        // logevent(DEBUG, "Query uses sensitive tables\n");
        ret += conf.re_s_tables;
    }
    if (conf.re_multiple_queries > 0 &&
        risk.has_separator == 1)
    {
        reason += "Multiple queries found\n";
        // logevent(DEBUG, "Multiple queries found\n");
        ret += conf.re_multiple_queries;
    }

    if (conf.re_or_token > 0 &&
        risk.has_or == 1)
    {
        reason += "Query has 'or' token\n";
        // logevent(DEBUG, "Query has 'or' token\n");
        ret += conf.re_or_token;
    }
    if (conf.re_union_token > 0 &&
        risk.has_union == 1)
    {
        reason += "Query has 'union' token\n";
        // logevent(DEBUG, "Query has 'union' token\n");
        ret += conf.re_union_token;
    }

    if (conf.re_var_cmp_var > 0 &&
        risk.has_tautology == 1)
    {
        reason += "True expression detected (SQL tautology)\n";
        // logevent(DEBUG, "True expression detected (SQL tautology)\n");
        ret += conf.re_var_cmp_var;
    }
    if (conf.re_empty_password > 0 &&
        risk.has_empty_pwd == 1)
    {
        reason += "Query has empty password expression\n";
        // logevent(DEBUG, "Query has empty password expression\n");
        ret += conf.re_empty_password;
    }
    if (conf.re_bruteforce > 0 &&
        risk.has_bruteforce_function == 1)
    {
        reason += "Query has SQL fuction that can be used to bruteforce db contents\n";
	// logevent(DEBUG, "Query has SQL fuction that can be used to bruteforce db contents\n");
	ret += conf.re_bruteforce;
    }
    return ret;
}

bool is_query_safe(const std::string& query) {


    // check if we find anything interesting
    std::string original_query = query;
    std::string reason = "";

        
    int risk = calculateRisk(original_query, reason);
    std::cout<<"Reasons : "<<reason<<std::endl;
    // logevent(SQL_DEBUG, "RISK         : %d\n", risk);


    // // (Assuming you have a function to detect each anomaly feature)
    // bool has_tautology = contains_tautology(query);
    // bool has_empty_password = contains_empty_password(query);
    // bool has_or_token = contains_or_token(query);

    // // Calculate anomaly score
    // int anomaly_score = 0;
    // if (has_tautology) anomaly_score += 30;
    // if (has_empty_password) anomaly_score += 30;
    // if (has_or_token) anomaly_score += 5;

    // Set anomaly score threshold
    const int anomaly_threshold = threshold; // You can adjust this threshold as needed

    // Check if anomaly score exceeds the threshold
    if (risk ==-1 or risk> anomaly_threshold) {
        // Block the query and log the anomaly
        std::cerr << "Anomalous query blocked. Anomaly score: " << risk << std::endl;
        return false;
    }

    // Query is safe
    return true;
}











/// anamalous features
// // Function to check for SQL tautology (e.g., 1=1)
// bool contains_tautology(const std::string& query) {
//     static const std::regex tautology_regex("\\b1=1\\b");
//     return std::regex_search(query, tautology_regex);
// }

// // Function to check for empty password string (e.g., pwd='' or pwd=NULL)
// bool contains_empty_password(const std::string& query) {
//     static const std::regex empty_password_regex("\\bpwd\\s*=[\\s'']*\\b");
//     return std::regex_search(query, empty_password_regex);
// }

// // Function to check for 'or' token in the query
// bool contains_or_token(const std::string& query) {
//     static const std::regex or_token_regex("\\bor\\b");
//     return std::regex_search(query, or_token_regex);
// }


