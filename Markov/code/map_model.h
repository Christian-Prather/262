/*
   CSCI 262 Data Structures, Fall 2019, Project 4 - Markov

   Author: Lucas Henke

   Modified: 10/24/2019
*/
#ifndef _MAP_MODEL_H
#define _MAP_MODEL_H

#include <string>
#include <vector>
#include <map>
#include <iostream>

#include "model.h"

using namespace std;

class map_model : public markov_model {
public:
    virtual void initialize(string text, int order);

    virtual string generate(int size);

    string to_string();
    map <string, vector<char>> myMap;


protected:
    // Add any variables you may need here
    int _order;
    string _text;

};

#endif
