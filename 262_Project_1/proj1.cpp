#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#include "personality_test.h"

using namespace std;

void load_file(personality_test&);

/* main
 * Calls necessary functions in this file as well as functions in personality_test
 * @param None
 * @return None, Text to Console
 */
int main ()
{
    cout << "====================================" << endl;
    cout << "Welcome to CSCI262 Personality Test!" << endl;
    cout << "====================================" << endl << endl;

    personality_test test;

    // Uncomment the below methods as you complete them
    load_file(test);
    test.printout();
    test.run_test();
    while (true)
    {
        cout << "Would you like to play again? y/n" << endl;
        string decision = "";
        cin >> decision;
        if (decision == "y")
        {

            test.clearQuestions();
            load_file(test);
            test.printout();
            test.run_test();
        } else if (decision == "n")
        {
            break;
        } else{
            cout << "Not supported input" << endl;
        }

    }

}



/* Load File Method
 * 1) Prompt the user for a file name. 
 * 2) Confirm that the file can be loaded
 * 3) Run personality_test::load to load in the data
 * 4) If personality_test::load fails, report this and retry
 * @param personality_test object (by reference)
 * @return None, Text to Console
 */
void load_file(personality_test& test)
{
    ifstream file;
    string fileName = "";

    while (true)
    {
        cout << "Please enter the input file name, e.g., \"questions.txt\": ";
        cin >> fileName;
        file.open(fileName);
        if(file.fail())
        {
            cout << "Error opening file " << fileName << endl;
        }
        else
        {
            break;
        }
        //TODO

    }
    if(!test.load(file))
    {
        cout << "Input file " << fileName << " appears to not be a proper file!" << endl;
        load_file(test);
    }
    file.close();
}
