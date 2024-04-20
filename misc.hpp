#include <string>
#include <vector>

std::string itoa(const int & i);
std::string ltoa(const long & i);
std::string lltoa(const long long & i);
void TrimStr(std::string & str);
bool ParseConfLine(std::string & str, std::string & key, std::string & value);
void str_lowercase(std::string & str);
void CutStringToVector(const std::string& str,std::vector<std::string>& vec,char sep);
std::string TrimString(std::string& value,char sep = ' ');
std::string TrimLeftString(std::string& value,char sep = ' ');
std::string TrimRightString(std::string& value,char sep = ' ');