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
    // TODO: Read in and store words from dictionary.txt
    ifstream dictionaryFile;
    dictionaryFile.open("dictionary.txt");
    string line;
    if (dictionaryFile.is_open())
    {

        while (getline(dictionaryFile, line))
        {
            _theWords[line.size()].push_back(line);

        }
       // cout << "Dictionary Loaded....." << endl;
    }
    else
    {
        cout << "Error loading file" <<endl;
        // TODO EXIT
    }






}
int hangman::getWordsLeftAmount()
{
    return _currentList.size();
}
void hangman::setWordLength(int length)
{
    _wordLength = length;
}

// start_new_game()
//
// Setup a new game of hangman.
void hangman::start_new_game(int num_guesses) {
    // TODO: Initialize game state variables
    _totalGuesses = num_guesses;
    _guessesRemaining = num_guesses;
    _currentList = _theWords[_wordLength];
    _wordPrint.clear();
    _guessedChars = "";
    for (int i = 0; i < _wordLength; i++)
    {
        _wordPrint.push_back('_');

    }


}


// process_guess()
//
// Process a player's guess - should return true/false depending on whether
// or not the guess was in the hidden word.  If the guess is incorrect, the
// remaining guess count is decreased.

bool inFam = false;
bool hangman::process_guess(char c)
{
    notInFam.clear();
    inFamList.clear();
    _guessedChars = _guessedChars + c;
    _guessesRemaining--;
    for (string word : _currentList)
    {
        inFam = false;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == c)
            {
                inFam = true;
                break;
            }

        }
        if (inFam)
        {
            inFamList.push_back(word);
        }
        else
        {
            notInFam.push_back(word);
        }
    }

//    for (string word : notInFam)
//    {
//        cout << word << " ";
//
//    } cout << "#############################" << endl;
//    for (string word : inFamList)
//    {
//        cout << word << " ";
//    }
    if (notInFam.size() > 0)
    {
        _currentList = notInFam;
        return false;
    }
    else
    {
        // Find which poition of correct guess will give me the most options
        map <int, vector<string>> tempMap;

        for (string word : inFamList)
        {
            for (int i = 0; i < word.size(); i++)
            {
                if (word[i] == c)
                {
                    tempMap[i].push_back(word);
                    break;
                }
            }
        }
        int maxCount = 0;

        map<int, vector<string>>::iterator robbin = tempMap.begin();
        while (robbin != tempMap.end())
        {
            if (robbin->second.size() > maxCount)
            {
                maxCount = robbin->second.size();
                _currentList = robbin->second;
            }
            robbin++;
        }
        // Grab random word from list for sidplay inidices (not effiecnt)
        string tempWord = _currentList[0];
        for (int j =0; j < tempWord.size(); j ++)
        {
            if (c == tempWord[j])
            {
                _wordPrint[j] = c;
            }
        }

        //_currentList = inFamList;
        return true;
    }
}


// get_display_word()
//
// Return a representation of the hidden word, with unguessed letters
// masked by '-' characters.
string hangman::get_display_word()
{
    string tempString = "";
    for (int i = 0; i < _wordPrint.size() -1; i++)
    {
        tempString = tempString + _wordPrint[i] + " ";
    }
    tempString = tempString + _wordPrint[_wordPrint.size() -1];
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
    for (char letter : _guessedChars)
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
    for (char letter : _wordPrint)
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
    return _guessesRemaining == 0;
}


// get_hidden_word
//
// Return the true hidden word to show the player.
string hangman::get_hidden_word() {
    return _currentList[0];
}


