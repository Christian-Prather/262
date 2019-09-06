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

class result
{
    public:
        string personalityType;
        string category;
        string type;
        string description;

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
        int extrovertScore = 0;
        int introvertScore = 0;
        int sensingScore = 0;
        int intuitionScore = 0;
        int thinkingScore = 0;
        int feelingScore = 0;
        int judgingScore = 0;
        int perceivingScore = 0;

        int cateory1[2] = {0,0};
        int cateory2[2] = {0,0};
        int cateory3[2] = {0,0};
        int cateory4[2] = {0,0};

        vector<result> results;







private:
        // Add anything you may need
        vector<question> questions;

};



#endif
