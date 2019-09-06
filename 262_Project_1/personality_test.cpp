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
void personality_test::clearQuestions()
{
    // Clear all variables for repeat use
    questions.clear();
    for (int i =0; i < 2; i ++)
    {
        cateory4[i] = 0;
        cateory3[i] = 0;
        cateory2[i] = 0;
        cateory1[i] = 0;

    }


}
void personality_test::set_question(question & item)
{
    //Setter
    questions.push_back(item);
}

question personality_test::get_question(int index)
{
    //Getter unused but paired with setter
    return questions[index];
}

bool personality_test::load(istream &in)
{

    cout << "called load" << endl;
    string tmp ="";
    vector<string> storage;
    storage.clear();


    while(!in.eof())
    {
        getline(in, tmp);
        storage.push_back(tmp);

    }
    // Throw out first line
    storage.erase(storage.begin());
    storage.resize(storage.size() -1); // Remove last unformatted line
    for (int i = 0; i < storage.size(); i++)
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
        tmp_question.question = tmp.substr(6);
        set_question(tmp_question);
    }


    return true;
}


/* personality_test::printout method
 * 1) Printout the questions to ensure that the load method was written correctly
 * This part will not be graded, just for your own check
 */
void personality_test::printout()
{

    cout << "called printout" << endl;
    for (int i = 0; i < questions.size(); i++)
    {
        cout << "Question " << questions[i].question << " ID "<< questions[i].categoryId << " YES "<<questions[i].yesAnswer << " NO "<<questions[i].noAnswer << endl;
    }

}

/* Run Test method
 * 1) Call proper methods in order to run the test
 * @param: None
 * @return: None, Text to Console
 */
void personality_test::run_test()
{
    string output = analyze_personality();
    cout << output <<  endl;
    categorize_output(output);
    save_output(output);
}

/* Analyze Personality Method
 * 1) Ask user one question at a time
 * 2) Read in user's response and construct a vector containing the responses
 * 3) Analyze the responses to construct a personality type (eg. ENFJ)
 * @param None
 * @return string
 */
string personality_test::analyze_personality()
{

    string yesOptions[] = {"Y", "y", "yes", "Yes", "YES"};
    string noOptions[] = {"N", "n", "no", "No", "NO"};
    string userAnswer = "";


    for (int i = 0; i < questions.size(); i ++)
    {
        cout << "Question: " << questions[i].question << endl;
        // Check for which category the asked question belongs to and store in mapped array
        while (true)
        {
            cin >> userAnswer;
            for (auto answer : yesOptions)
            {
                if (answer == userAnswer)
                {
                    userAnswer = "y";
                }
            }
            for (auto answer : noOptions)
            {
                if (answer == userAnswer)
                {
                    userAnswer = "n";
                }
            }
            if (userAnswer == "y")
            {
                // Yes result
                if (questions[i].categoryId == '1')
                {
                    if (questions[i].yesAnswer == 'I')
                    {
                        cateory1[0] ++;
                    }
                    if (questions[i].yesAnswer == 'E')
                    {
                        cateory1[1] ++;
                    }
                }
                else if (questions[i].categoryId == '2')
                {
                    if (questions[i].yesAnswer == 'S')
                    {
                        cateory2[0] ++;
                    }
                    if (questions[i].yesAnswer == 'N')
                    {
                        cateory2[1] ++;
                    }
                }
                else if (questions[i].categoryId == '3')
                {
                    if (questions[i].yesAnswer == 'T')
                    {
                        cateory3[0] ++;
                    }
                    if (questions[i].yesAnswer == 'F')
                    {
                        cateory3[1] ++;
                    }
                }
                else if (questions[i].categoryId == '4')
                {
                    if (questions[i].yesAnswer == 'J')
                    {
                        cateory4[0] ++;
                    }
                    if (questions[i].yesAnswer == 'P')
                    {
                        cateory4[1] ++;
                    }
                }
                break;
            } else if (userAnswer == "n")
            {
                // No result
                if (questions[i].categoryId == '1')
                {
                    if (questions[i].noAnswer == 'I')
                    {
                        cateory1[0] ++;
                    }
                    if (questions[i].noAnswer == 'E')
                    {
                        cateory1[1] ++;
                    }
                }
                else if (questions[i].categoryId == '2')
                {
                    if (questions[i].noAnswer == 'S')
                    {
                        cateory2[0] ++;
                    }
                    if (questions[i].noAnswer == 'N')
                    {
                        cateory2[1] ++;
                    }
                }
                else if (questions[i].categoryId == '3')
                {
                    if (questions[i].noAnswer == 'T')
                    {
                        cateory3[0] ++;
                    }
                    if (questions[i].noAnswer == 'F')
                    {
                        cateory3[1] ++;
                    }
                }
                else if (questions[i].categoryId == '4')
                {
                    if (questions[i].noAnswer == 'J')
                    {
                        cateory4[0] ++;
                    }
                    if (questions[i].noAnswer == 'P')
                    {
                        cateory4[1] ++;
                    }
                }
                break;
            }
            else
                {
                    cout << "Sorry, I didn't recognize your input, please type again" << endl;
                }
        }


    }
    string output = "";

    if (cateory1[0] > cateory1[1])
    {
        output += "I";
    }
    else if (cateory1[0] < cateory1[1])
    {
        output += "E";
    }

    if (cateory2[0] > cateory2[1])
    {
        output += "S";
    }
    else if (cateory2[0] < cateory2[1])
    {
        output += "N";
    }

    if (cateory3[0] > cateory3[1])
    {
        output += "T";
    }
    else if (cateory3[0] < cateory3[1])
    {
        output += "F";
    }

    if (cateory4[0] > cateory4[1])
    {
        output += "J";
    }
    else if (cateory4[0] < cateory4[1])
    {
        output += "P";
    }
    return output;
}

/* Categorize Output Method
 * 1) Read in the analysis.txt file
 * 2) Provided a user's personality type, print out to console the user's personality description
 * @param Personality type string (eg. "ENFJ")
 * @return None, Text to console
 */
void personality_test::categorize_output(string my_personality)
{
    string fileLine = "";
    ifstream analyseFile("analysis.txt");
    if (analyseFile.fail())
    {
        cout << "Error loading analysis file" << endl;
    }
    while (!analyseFile.eof())
    {
        result analysisObj;

        analyseFile >> analysisObj.personalityType >> analysisObj.category >> analysisObj.type;
        getline(analyseFile, analysisObj.description);
        results.push_back(analysisObj);
        cout << "Pushing back" << endl;
    }

    for (int i =0; i < results.size(); i++)
    {
        if (my_personality == results[i].personalityType)
        {
            cout << endl;
            cout << "+++++++++++++++++++++++++"<<endl;
            cout << "Your personality type is: " << results[i].personalityType << endl;
            cout << "The category is: " << results[i].category << endl;
            cout << "You are: The " << results[i].type << endl;
            cout << "Description: " << results[i].description << endl;
            cout << "+++++++++++++++++++++++++"<<endl;

        }
    }
analyseFile.close();
}

/* Save Output
 * 1) Ask user to save or not
 * 2) If yes, ask for a file name and save the results
 * @param string (the thing to write)
 * @return None, creates a file
 */
void personality_test::save_output(string output)
{
    cout << "Would you like to save the file y/n" << endl;
    string input =  "";
    cin >> input;
    while (true)
    {
        if (input == "y")
        {
            ofstream saveFile;
            string saveFileName;
            cout << "Please enter file name" << endl;
            cin >> saveFileName;
            saveFile.open(saveFileName);
            for (int i =0; i < results.size(); i++)
            {
                if (output == results[i].personalityType)
                {
                    saveFile << "Your personality type is: " << results[i].personalityType << endl;
                    saveFile << "The category is: " << results[i].category << endl;
                    saveFile << "You are: The " << results[i].type << endl;
                    saveFile << "Description: " << results[i].description << endl;
                }
            }
            saveFile.close();
            break;
        }
        else if (input == "n")
        {
            break;
        }
        else
        {
            cout << "Not valid input" << endl;
        }
    }
}



