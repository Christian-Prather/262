//
// Created by Christian on 11/6/2019.
//

#ifndef LAB_OVERLOAD_CLOCK_TIME_H
#define LAB_OVERLOAD_CLOCK_TIME_H

#include <ostream>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

using  namespace std;

class clock_time{
    friend bool operator==(clock_time a, clock_time b);
    friend bool operator!=(clock_time a, clock_time b);
    friend clock_time operator+(clock_time a, clock_time b);
public:
    int get_hour();	//Get the hour part of the time.
    int get_minute();	//Get the minute part of the time.
    int get_second();	//Get the second part of the time.
    void set_time(int h, int m, int s);	//Set the time to the time that would exist at h hours, m minutes, and s seconds after midnight.
    clock_time();	//Construct a clock_time object representing midnight.
    clock_time(int h, int m, int s); //Construct a clock_time object representing the same time as an object after calling set_time(h, m, s).
    void negativeAccount(int &h, int &m, int &s);

private:
    int _seconds = 0;


};

ostream & operator<<(ostream & out, clock_time c);	//Output the human-readable time to the output stream out.
string to_string(clock_time c);	//Return the human-readable time as a string.

bool operator==(clock_time a, clock_time b);
bool operator!=(clock_time a, clock_time b);
clock_time operator+(clock_time a, clock_time b);

#endif //LAB_OVERLOAD_CLOCK_TIME_H
