#include <string>

bool is_query_safe(const std::string& query);

unsigned int calculateRisk(std::string & query,std::string & reason);