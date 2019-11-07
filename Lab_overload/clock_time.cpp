//
// Created by Christian on 11/6/2019.
//

#include "clock_time.h"
int clock_time::get_hour()
{
    return  _seconds / 3600;

}
int clock_time::get_minute()
{
    return (_seconds % 3600)/ 60;


}
int clock_time::get_second()
{
    return  _seconds %60;
}

void clock_time::set_time(int h, int m, int s)
{
   // negativeAccount(h,m,s);
    if (s < 0)
    {
        //m = m + (s % 60);
        m = m -1 + (s /60);
        s = s % 60;

    }
    if (m < 0)
    {
        //h = h + (m / 60);
        h = h -1 + (m /60);
        m = m % 60;
    }
    if (h < 0)
    {
        h = 24 + h;
    }

    h = h % 24;
    if (s > 60)
    {
        m = m + (s/60);
        s = (s % 60);
    }
    if (m > 60)
    {
        h = h + (m /60);
        m = m % 60;

    }
    negativeAccount(h,m,s);


    _seconds = _seconds + (int (h) * int (3600));
    _seconds = _seconds + (int(m) * int (60));
    _seconds = _seconds + (int(s));
}


clock_time::clock_time() {};
clock_time::clock_time(int h, int m, int s)
{
    set_time(h,m,s);
}

void clock_time::negativeAccount(int &h, int &m, int &s){
    if (h < 0)
    {
        h = h + 24;

    }
    if (m <0)
    {
        m = m + 60;
    }
    if (s < 0)
    {
        s = s+ 60;
    }
}

ostream & operator<<(ostream & out, clock_time c)
{
    int hour = c.get_hour();
    int minute = c.get_minute();
    int second = c.get_second();
    out << hour << ":" << setfill('0') << setw(2) << minute << ":" << setfill('0') << setw(2) << second;
    return  out;

}

string to_string(clock_time c)
{
   ostringstream human;
   human << c;
   return human.str();


}

bool operator==(clock_time a, clock_time b)
{
    return  a._seconds == b._seconds;

}
bool operator!=(clock_time a, clock_time b)
{
    return a._seconds != b._seconds;

}
 clock_time operator+(clock_time a, clock_time b)
{


        return clock_time(
                a.get_hour() + b.get_hour(),
                a.get_minute()+ b.get_minute(),
                a.get_second() + b.get_second()
        );

}