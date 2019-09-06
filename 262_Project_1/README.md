# Project 1 Personality Test

A program to automate the 16 Personalities test. The program load a user specified file of formatted
questions and individually ask the user. The user will answer yes or no and the results are scored and
the personality is compared against an analysis file that prints out further information to the user about
their respective personality.

## Tests

There are two tests ran on the questions file passed in by the user to ensure the validity of the file
structure. The first is the first character of every line is checked to be 1-4 (indicating the four categories).
The second tests to ensure that the next field in each line of the file is one of the corresponding allowed
yes/no mapped answers (E,I,S,N,T,F,J,P).

## Versioning
V1.0.0
## Authors

* **Christian Prather** - *Initial work*

## Completion Time
8 hours

## General Notes
The project was interesting, I realize there are numerous ways to accomplish what this program does and I
would like to look into ways of optimizing the code (such as my excessive if else logic).

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* School of Mines
