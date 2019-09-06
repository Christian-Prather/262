#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "personality_test.h"

using namespace std;

/* Load method
 * 1) Provided an istream object, read in each line and process them accordingly
 * 2) Ensure to see if the input is "correct" (do at least one simple check, like first character is a number)
 * Input: istream object
 * Output: Boolean
 */
void personality_test::set_question(question & item)
{
    questions.push_back(item);
}

question personality_test::get_question(int index)
{
    return questions[index];
}

bool personality_test::load(istream &in) {
    //TODO
    cout << "called load" << endl;
    string tmp ="";
    vector<string> storage;


    while(!in.eof())
    {
        getline(in, tmp);
        storage.push_back(tmp);

    }
    // Throw out first line
    storage.erase(storage.begin());
    storage.resize(storage.size() -1); // Remove last unformatted line
    cout << storage[12] << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << storage.size() << i <<endl;
        tmp = storage[i];
        cout << tmp << endl;


        if (!(tmp.front() == '1' || tmp.front() == '2' || tmp.front() == '3' || tmp.front() == '4')) {
            cout << "NUMERICE ERROR: " << tmp << endl;

            return false;
        }
        if (!(tmp[2] == 'E' || tmp[2] == 'I' || tmp[2] == 'S' || tmp[2] == 'N' || tmp[2] == 'T' || tmp[2] == 'F' ||
              tmp[2] == 'J' || tmp[2] == 'P')) {
            cout << "CHAR ERROR" << tmp << endl;

            return false;
        }
        question tmp_question;
        tmp_question.categoryId = tmp.front();
        tmp_question.yesAnswer = tmp[2];
        tmp_question.noAnswer = tmp[4];
//        cout << tmp_question.categoryId << endl;

        tmp_question.question = tmp.substr(6);
        set_question(tmp_question);
    }

    return true;
}


/* personality_test::printout method
 * 1) Printout the questions to ensure that the load method was written correctly
 * This part will not be graded, just for your own check
 */
void personality_test::printout() {
    //TODO
    cout << "called printout" << endl;
    cout << sizeof(questions);
    for (int i = 0; i < 12; i++)
    {
        cout << "Question " << questions[i].question << " ID "<< questions[i].categoryId << " YES "<<questions[i].yesAnswer << " NO "<<questions[i].noAnswer << endl;
    }

}

/* Run Test method
 * 1) Call proper methods in order to run the test
 * @param: None
 * @return: None, Text to Console
 */
void personality_test::run_test() {
    //Uncomment below as you comeplete them
    //Feel free to add any other methods to call

    //string output = analyzePersonality();
    //categorizeOutput(output);
}

/* Analyze Personality Method
 * 1) Ask user one question at a time
 * 2) Read in user's response and construct a vector containing the responses
 * 3) Analyze the responses to construct a personality type (eg. ENFJ)
 * @param None
 * @return string
 */
string personality_test::analyze_personality() {
    //TODO
    string output = "";
    return output;
}

/* Categorize Output Method
 * 1) Read in the analysis.txt file
 * 2) Provided a user's personality type, print out to console the user's personality description
 * @param Personality type string (eg. "ENFJ")
 * @return None, Text to console
 */
void personality_test::categorize_output(string my_personality) {
    //TODO
}

/* Save Output
 * 1) Ask user to save or not
 * 2) If yes, ask for a file name and save the results
 * @param string (the thing to write)
 * @return None, creates a file
 */
void personality_test::save_output(string output) {
    //TODO
}
