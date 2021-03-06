//
//  env.h
//
//
//  Created by Pierce Cunneen on 3/15/16. Updated by John Joyce on 4/2/16.
//
//
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Token.h"

using namespace std;

#ifndef ENV_H
#define ENV_H
//typedef void (*func)(void);


class env {
    public:
    env() {
        //push keywords -- i know its more than we will need but just pushed a lot to be thorough.
        keywords.push_back("boolean"); keywords.push_back("break"); keywords.push_back("do");
        keywords.push_back("case"); keywords.push_back("false");
        keywords.push_back("char"); keywords.push_back("float"); keywords.push_back("const");
        keywords.push_back("continue"); keywords.push_back("for");
        keywords.push_back("default"); keywords.push_back("delete"); keywords.push_back("function");
        keywords.push_back("if"); keywords.push_back("in"); keywords.push_back("new");
        keywords.push_back("switch"); keywords.push_back("return");  keywords.push_back("true");
        keywords.push_back("var");  keywords.push_back("void"); keywords.push_back("while"); keywords.push_back("else");

        //push booleans
        booleans["true"] = true;
        booleans["false"] = false;
    }
    vector <string> keywords;
    map <string, Token *> variables;
    map <string, Function> user_defined_functions;
    //map <string, func> operators;
    map <string, bool> booleans;



};

#endif
