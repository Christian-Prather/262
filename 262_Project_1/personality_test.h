#ifndef _PERSONALITY_TEST_H
#define _PERSONALITY_TEST_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;
class question
{
public:
    char categoryId;
    string question;
    char yesAnswer;
    char noAnswer;
private:

};
// personality test class
class personality_test {
    public:
        bool load(istream&);
        void printout();
        void run_test();
        string analyze_personality();
        void categorize_output(string);
        void save_output(string);
        // Add anything you may need
        void set_question(question &);
        question get_question(int);


private:
        // Add anything you may need
        vector<question> questions;

};



#endif
