# Heuristic-based database firewall
> In heuristic anomaly detection method, we first define some anomaly features of the SQL statements and set a score for each feature in a feature-table.

> The database-firewall 'dbproxy' sits in between web-server and mysql database-server. It captures the incoming queries and uses SQL parsers to find tokens, then it extracts different features of the query.

> For example the query **Select * from user where name=’’or ‘1’=’1’and pwd=’’** has following features in it :
- T1: exists expression always returns true:1=1;
- T2: existsemptypassword:pwd=’’;
- T3: have’or’token.
> It then calculates the sum of score of all these features as per feature-table. If the sum exceeds the 'threshold anomaly score' SQL query will be blocked.

> Note: threshold can be tweaked in 'conf/settings.hpp'  

> Ref: https://www.researchgate.net/publication/221396978_A_New_Database_Firewall_Based_on_Anomaly_Detection


## Build & Test
> The firewall 'dbProxy' can be build by executing make command in 'src' directory. Once the firewall is built we can test it using vulnerable web-app such as DVWA. 
- Set up the web application to test the detection capability of the firewall

- Set $_DVWA[ 'db_port'] in "DVWA/config/config.inc.php" to '3307' so that the database firewall running at that port can listen to it and take action accordingly. 

-  run "src/dbproxy" to run the firewall at the '3307' port

## Note
> For the efiiciency the firewall uses event library to handle the asynchronous communication between firewall, client, and mySQL server.

> The libevent API  provides a mechanism to execute a callback function when a specific event occurs on a file descriptor.