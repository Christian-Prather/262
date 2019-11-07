/*
   CSCI 262 Data Structures, Fall 2019, Project 4 - Markov

   Author: Lucas Henke

   Modified: 10/24/2019
*/

#include "map_model.h"


void map_model::initialize(string text, int order) {
    // Set variables need for later
    _order = order;
    _text = text;
    int diff; // used to see if I need to loop back to the first
    string key;
    char value;
    for (int index = 0; index < text.length(); index ++)
    {
        // Check if need to loop around (crcular)
        if ((index + order )> text.length())
        {
           diff = (index + order) - text.length();
           key = text.substr(index, order - diff);
            key = key + text.substr(0,diff);
            value = text[diff];
        }
        else
        {
            key = text.substr(index, order);
            value = text[index + order];
        }
        myMap[key].push_back(value);
    }


}

string map_model::generate(int size) {
    string generated = "";
    // pick random k-character substring as initial seed
    int start = rand() % (_text.length() - _order);
    string seed = _text.substr(start, _order);
    vector<char> options;
    for (int i = 0; i < size; i++)
    {
        options = myMap[seed];
        // Grab random char from vector of options
        char nextChar = options[rand() % options.size()];
        generated = generated + nextChar;
        seed = seed.substr(1) + nextChar;
    }
    return generated;
}
