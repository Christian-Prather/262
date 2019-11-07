/*
   CSCI 262 Data Structures, Fall 2019, Project 4 - Markov

   Author: Lucas Henke

   Modified: 10/24/2019
*/

#include "word_model.h"

void word_model::initialize(string text, int order) {

    string key;
    string value;
    string word;

    // Loop through every character looking for ' ' to break words at
    for (int i = 0; i <= text.size(); i++ )
    {
        bool setWord = false; // used for last word
        if (text[i] == ' ')
        {
            key = word;
            word = "";

            for (int j = i+1; j <= text.size(); j++) // Find the next word
            {

                if (text[j] == ' ')
                {
                    myMap[key].push_back(value);
                    value = "";
                    setWord = true;
                    break;
                }
                else
                {
                    value = value + text[j];
                }
            }
            if (!setWord) // if got to end and didnt get full word add the first word
            {
                value = "";
                for (int j = 0; j <= text.size(); j++)
                {

                    if (text[j] == ' ')
                    {
                        myMap[key].push_back(value);
                        value = "";
                        break;
                    }
                    else
                    {
                        value = value + text[j];
                    }
                }
            }


        }

        else
        {
            word = word + text[i];

        }
    }
}


string word_model::generate(int size) {

    string generated = "";
    map<string, vector<string>>::iterator it =myMap.begin();
    int start = rand() % (myMap.size() - _order);
    // Jump to _order index in map use its word as seed
    for (int j =0; j <= start; j++ )
    {
        ++it;
    }

    string seed = it->first;

    vector<string> options;
    // Generate text
    for (int i = 0; i < size; i++)
    {
        options = myMap[seed];
        string nextWord = options[rand() % options.size()];
        generated = generated + " " + nextWord;
        seed = nextWord;

    }
    return generated;
}
