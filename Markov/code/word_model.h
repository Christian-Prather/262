/*
   CSCI 262 Data Structures, Fall 2019, Project 4 - Markov

   Author: Lucas Henke

   Modified: 10/24/2019
*/
#ifndef _WORD_MODEL_H
#define _WORD_MODEL_H

#include <vector>
#include <map>
#include "model.h"
#include <iostream>

using namespace std;

class word_model : public markov_model {
public:
    virtual void initialize(string text, int order);

    virtual string generate(int size);

    // Add any helper methods you want here
    map <string, vector<string>> myMap;

protected:
    // Add any variables you may need here
    int _order;
    string _text;
};

#endif
