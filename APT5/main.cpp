#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
vector<char> letters;
bool potential;
vector<string> anagrams(vector<string> phrases) {
//   vector <string> resultVector;
//    for (string word : phrases)
//    {
//        resultVector.push_back(word);
//    }

    // fill in code here
for (int i = 0; i < phrases.size()-1; i ++)
{
    string sorted;
    for (char c : phrases[i])
    {
        if (c != ' ')
        {
            sorted+= towlower(c);
        }
    }
    sort(sorted.begin(), sorted.end());
    for (int j = i + 1; j < phrases.size(); j ++)
    {
        string newSorted;
        for (char letter: phrases[j])
        {
            if (letter != ' ')
            {
                newSorted+=towlower(letter);
            }
        }
        sort(newSorted.begin(), newSorted.end());
        if (newSorted == sorted)
        {
            phrases.erase(j + phrases.begin());
            //resultVector.erase(resultVector.begin() + j - (phrases.size() - resultVector.size()));
           // resultVector.push_back(phrases[i]);
            j--;
        }

    }
}

    return  phrases;
//vector <string> sorted;
//map <string, string> sorted;
//map <string, string>::iterator itr;
//    map <string, string>::iterator SecondItr;
//
//for (string word : phrases)
//{
//    string tempWord;
//    for (char c : word)
//    {
//        if (c != ' ')
//        {
//            tempWord+=tolower(c);
//        }
//    }
//    sort(tempWord.begin(), tempWord.end());
//    sorted[word] = (tempWord);
//}
//for (itr = sorted.begin(); itr != sorted.end(); itr++) {
//    string word = itr->second;
//    for (SecondItr = itr; SecondItr != sorted.end(); SecondItr++) {
//        if (itr->second == SecondItr->second) {
//            // resultVector.push_back(itr->first);
//            sorted.erase(sorted.find(SecondItr->first));
//        }
//    }
//    for (itr = sorted.begin(); itr != sorted.end(); itr++)
//    {
//        resultVector.push_back(itr->second);
//    }
//}
//    return  resultVector;
}

bool remove(char letter, vector<char>& possible)
{
    for (int i = 0; i < possible.size(); i++)
    {
        if (possible[i] == letter)
        {
            possible.erase(possible.begin() + i);
            return true;
        }
    }
    return false;
}
bool valid = false;
int how_many(vector<string> headlines, vector<string> messages) {
    // fill in code here
    vector<char> possible;
    vector<char> tmp;
    int total = messages.size();
for (string word : headlines)
{
    for (int i = 0; i < word.size(); i ++)
    {
        if (word[i] != ' ')
        {
            possible.push_back(towlower(word[i]));
            tmp.push_back(tolower(word[i]));

        }

    }
}

for (string word: messages)
{
    tmp = possible;
    for(char element : word)
    {
        if (element != ' ')
        {
            // loop through possible remove if found
            valid = remove(tolower(element), tmp );
            if (!valid)
            {
                //Couldnt find availabe letter
                // Remove count
                // Go to next word
                total --;
                break;
            }
        }
    }
}
    return total;
}
// Store them all as a vector of chars allowing for duplicates (mapybe do a map of char, amount avalailable)
// If you ever cant find a letter failes if you make it to the end of string incresase counter ++
int total =0;

int snowy_highway_length(vector<int> &start_points, vector<int> &end_points)
{
    int global_start = 10000;
    int global_end = 10000;
    // fill in code here
    if (start_points.size() == 0)
    {
        return total;
    }

    /* Find smalles start and get corresponding end;
     * loop through every start if in start and end or equal to end
     * if above hit then set end to larger of teo ends remove included element
     * After looping through all add diff end - start to sum
     *
     * */
    int startIndex = 0;
    for (int i = 0; i < start_points.size(); i++)
    {
        // Find smallest start
        if (start_points[i] < global_start)
        {
            global_start = start_points[i];
            global_end = end_points[i];

            startIndex = i;
        }
    }
    start_points.erase(start_points.begin()+startIndex);
    end_points.erase(end_points.begin()+startIndex);
    for (int i = 0; i < start_points.size(); i++ )
    {
        int val = start_points[i];
        if ((global_start <= start_points[i]) && (start_points[i] <= global_end))
        {
            // Element in overlap
            // Find new end
            if (end_points[i] > global_end)
            {
                global_end = end_points[i];
            }
            // Erase included part
            start_points.erase(start_points.begin()+i);
            end_points.erase(end_points.begin()+i);
            i = -1;
        }
    }
    snowy_highway_length(start_points, end_points);
    total += (global_end - global_start);

    return total;
}

bool checkString(string input, int index, char letter )
{
    for (int i = index; i < input.size(); i++)
    {
        if (input[i] ==  letter)
        {
            return true;
        }
    }
    return false;
}
int longestLength = 0;
int longest(string input, vector<string> &words) {
    // fill in code here
    for (string word : words)
    {
        // Get each char of input
        // get first chat of first word
        // loop through each letter in the input and check for match
        // if no match go to next word
        // if match check next letter in word check string at new index
        int baseIndex = 0;
        bool isValid = false;
        for (int i = 0; i < word.size(); i++)
        {
            isValid = false;
            char letter = word[i];
            for (int j = baseIndex; j < input.size(); j++)
            {
                if (letter == input[j])
                {
                    // match
                    baseIndex = j;
                    isValid = true;
                    break;
                }
            }
            if (!isValid)
            {
                break;
            }
        }

        if (isValid)
        {
            if (word.size() > longestLength)
            {
                longestLength = word.size();
            }
        }
    }
    return longestLength;
}


int main() {
    vector <string> test = { "VXxrZQkUPBg qZgR", "vG Rg r ZZX Uq B p XKq", "WFVxBTIpQobFICrVipxmRQcq", " X r Xk B G Z P ugQ V Q Z R", " VQu k Zr r Z Q PG x B xg" };
    vector <string> headlines = {"Earthquake in San Francisco","Burglary at musuem in Sweden","Poverty"};
    vector<string> messages = {"Give me my money back","I am the best coder","TOPCODER"};
    vector<int> start_points = {17,85,57};
    vector <int> end_points  = {33,86,84};

   string input = "sfpomrtq";
   vector <string>  words = {"and", "is", "for", "hello"};
   int result = longest(input, words);

 //   int result = snowy_highway_length(start_points, end_points);
 //   int result = how_many(headlines, messages);
 //  vector<string> result =  anagrams(test);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}