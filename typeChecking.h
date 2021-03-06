/* typeChecking.h */

#include <iostream>
#include <regex>
#include <string>
#include "Token.h"
//#include "env.h"
using namespace std;

bool isInt(string);
bool isFloat(string);
bool isString(string);
//bool isOperator(string); deprecated
bool isVariable(string);
bool isArithOperator(string);
bool isLogicalOperator(string);
bool isAssignmentOperator(string);
bool isSemiColon(string);
bool isKeyword(string);
bool isSameType(Token *, Token *);
bool isScopeSym(string);
