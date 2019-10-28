/*
    hangman.cpp
        
    Method implementations for the hangman class.
    
    assignment: CSCI 262 Project - Evil Hangman        

    author:

    last modified: 3/7/2019
*/

#include "hangman.h"


using namespace std;

// constructor
hangman::hangman()
{
    ifstream dictionaryFile;
    dictionaryFile.open("dictionary.txt");
    string line;
    if (dictionaryFile.is_open()) // If file can be opened parse it in one line at a time
    {

        while (getline(dictionaryFile, line)) // each word is a line
        {
            _theWords[line.size()].push_back(line); // use the word length as the key for the map and add it to the vector of strings for that given key

        }
    }
    else
    {
        cout << "Error loading file" <<endl;
    }






}
int hangman::getWordsLeftAmount()
{
    return _currentList.size(); //_currentlist is the vector of words being used at any moment in the code (master family)
}
void hangman::setWordLength(int length)
{
    _wordLength = length; // Set private variable of wordlength for future reference
}


void hangman::start_new_game(int num_guesses) {

    _totalGuesses = num_guesses; // Total guesses allowed
    _guessesRemaining = num_guesses; // Total guesses remaining (initialized to guesses allowed)
    _currentList = _theWords[_wordLength]; // set the inital family to the list with wordlength key
    _wordPrint.clear(); // Clear the display for multiple runs
    _guessedChars = ""; // Clear gueesed letters for future runs
    for (int i = 0; i < _wordLength; i++) // Build display string will be formatted later
    {
        _wordPrint.push_back('_');

    }


}

bool inFam = false; // True if char is in a word in the family list
bool hangman::process_guess(char c)
{
    notInFam.clear(); // Clear temp list
    inFamList.clear();
    _guessedChars = _guessedChars + c; // Added guess to list of past guesses
    _guessesRemaining--; // Remove guess number
    for (string word : _currentList) // For every word in the list check if guess is letter in it
    {
        inFam = false;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == c) // The guess is in a word in the family
            {
                inFam = true;
                break;
            }

        }
        if (inFam)
        {
            inFamList.push_back(word); // Add the current word to a temp list of words that have the guessed letter
        }
        else
        {
            notInFam.push_back(word); // Add current word to temp list of words that dont have the guess in it
        }
    }
    if (notInFam.size() > 0) // If there is the option to use a word without the user guess than set the list to them
    {
        _currentList = notInFam;
        return false; // Say the guess was not in the word
    }
    else
    {
        // Find which poition of correct guess will give me the most options
        map <int, vector<string>> tempMap;

        for (string word : inFamList) // Loop through each word in the mathcing list
        {
            for (int i = 0; i < word.size(); i++)
            {
                if (word[i] == c) // find where the guess is in the word
                {
                    tempMap[i].push_back(word); // use the index of mathc as key to build keys with all the words that have a guess in that spot
                    break;
                }
            }
        }
        int maxCount = 0;

        map<int, vector<string>>::iterator robbin = tempMap.begin(); // Tmep map iterator used to loop through all keys in tempMap an find the longest list (most options)
        while (robbin != tempMap.end())
        {
            if (robbin->second.size() > maxCount)
            {
                maxCount = robbin->second.size(); // New max count
                _currentList = robbin->second; // Update currently used list
            }
            robbin++;
        }
        // Grab random word from list for displaying indiices (not effiecnt)
        string tempWord = _currentList[0];
        for (int j =0; j < tempWord.size(); j ++)
        {
            if (c == tempWord[j])
            {
                _wordPrint[j] = c; // Makes display string updated version
            }
        }

        return true;
    }
}



string hangman::get_display_word()
{
    string tempString = "";
    for (int i = 0; i < _wordPrint.size() -1; i++) // Need to pad display word with spaces
    {
        tempString = tempString + _wordPrint[i] + " ";
    }
    tempString = tempString + _wordPrint[_wordPrint.size() -1]; // Dont pad last space
    return tempString;
}


// get_guesses_remaining()
//
// Return the number of guesses remaining for the player.
int hangman::get_guesses_remaining() {
    return _guessesRemaining;
}


// get_guessed_chars()
//
// What letters has the player already guessed?  Return in alphabetic order.
string hangman::get_guessed_chars()
{

    return _guessedChars;
}


// was_char_guessed()
//
// Return true if letter was already guessed.
bool hangman::was_char_guessed(char c)
{
    for (char letter : _guessedChars) // Loop through string of guessed letters and see if current guess is in it
    {
        if (c == letter)
        {
            return true;
        }
    }
    return false;
}


// is_won()
//
// Return true if the game has been won by the player.
bool hangman::is_won()
{
    for (char letter : _wordPrint) // Check if there is still a blank letter to guess if not you won (not a fan of this but couldnt think of a better way
    {
        if (letter == '_')
        {
            return false;
        }
    }
    return true;
}


// is_lost()
//
// Return true if the game has been lost.
bool hangman::is_lost()
{
    return _guessesRemaining == 0; // Check if there are no guesses left
}


// get_hidden_word
//
// Return the true hidden word to show the player.
string hangman::get_hidden_word() {
    return _currentList[0]; // Pick first word from current list as "the word"
}


