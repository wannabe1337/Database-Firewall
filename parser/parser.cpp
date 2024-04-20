#include <iostream>
#include "expression.hpp"
#include "parser.hpp"

#ifndef PARSER_DEBUG
// #include "../config.hpp"
#endif

std::list<SQLString *> SQLString::sql_strings;
std::list<Expression *> Expression::expressions;

int scan_buffer(const char * data);
static bool free_sql_strings();
static bool free_expressions();

static query_risk risk = {0};
static query_risk * p_risk = &risk;
static SQLPatterns * patterns = NULL;

bool query_parse(struct query_risk * q_risk,
		SQLPatterns * sql_patterns, const char * q)
{
  p_risk = q_risk;
  //bzero(q_risk, sizeof(struct query_risk));
  memset(q_risk, 0, sizeof(struct query_risk));
  patterns = sql_patterns;
#ifndef WIN32
  scan_buffer(q);
#endif
  free_sql_strings();
  free_expressions();
  return true;
}

void clb_found_or_token()
{
  p_risk->has_or = 1;  
}

void clb_found_union_token()
{
  p_risk->has_union = 1;
}

void clb_found_empty_pwd()
{
  p_risk->has_empty_pwd = 1;
}

void clb_found_comment()
{
  p_risk->has_comment = 1;
}

void clb_found_table(const SQLString * s)
{
  if (s->Length() == 0)
    return;
#ifndef PARSER_DEBUG
  // GreenSQLConfig * conf = GreenSQLConfig::getInstance();
  // if (patterns != NULL && conf->re_s_tables >= 0 )
  // {
    if (patterns->Match( SQL_S_TABLES, s->str_value ) )
      p_risk->has_s_table = 1;
  // }
#else
  p_risk->has_s_table = 1;
#endif
}

// this function check if filed is a stored variable
// for example current_user in MySQL
bool clb_check_true_constant(const SQLString * s)
{
  if (s->Length() == 0)
    return false;
#ifndef PARSER_DEBUG
  if (patterns != NULL && patterns->HasTrueConstantPatterns())
  {
    if (patterns->Match( SQL_TRUE_CONSTANTS,  s->str_value ) )
      return true;
  }
#endif
  return false;
}

// check if the function name passed can be used to bruteforce db contents
bool clb_check_bruteforce_function(const SQLString * s )
{
  if (s->Length() == 0)
    return false;
#ifndef PARSER_DEBUG
  if (patterns != NULL && patterns->HasBruteforcePatterns() )
    if (patterns->Match( SQL_BRUTEFORCE_FUNCTIONS, s->GetStr() ) )
    {
      p_risk->has_bruteforce_function = 1;
      return true;
    }
#endif
  return false;

}

void clb_found_tautology()
{
  p_risk->has_tautology = 1;
}

void clb_found_query_separator()
{
  p_risk->has_separator = 1;
}

void clb_found_bruteforce_function()
{
  p_risk->has_bruteforce_function = 1;
}


static bool free_sql_strings()
{
  std::list<SQLString *>::iterator itr;
  for (itr  = SQLString::sql_strings.begin();
       itr != SQLString::sql_strings.end();
       itr  = SQLString::sql_strings.begin())
  {
    delete *itr;
  }
  return true;
}

static bool free_expressions()
{
  std::list<Expression *>::iterator itr;
  for (itr  = Expression::expressions.begin();
       itr != Expression::expressions.end();
       itr  = Expression::expressions.begin())
  {
    delete *itr;
  }
  return true;
}

