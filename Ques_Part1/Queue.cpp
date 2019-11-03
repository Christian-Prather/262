#include "Queue.h"
/*
    Queue.cpp
        
    Method implementations for Queue class

    assignment: CSCI 262 Lab - Queues, part 1        

    author: 

    last modified: 9/7/2017
*/

/* 
   NOTE: if you prefer, the Queue class is simple enough that you can do all
   of your methods inline.  In that case, you can remove this file.
*/
bool Queue::enqueue(char c)
{
    if (_size == ARRAY_SZ)
    {
        return false;
    }
    if (_back != ARRAY_SZ)
    {
        _data[_back] = c;
        _back++;
        _back = _back % ARRAY_SZ;
        _size++;
        return true;
    }
    return false;
}

bool Queue::dequeue()
{
    if (!is_empty())
    {
        _front++;
        _front = _front % ARRAY_SZ;
        _size --;
        return true;
    }

    return  false;
}

char Queue::front()
{
    return  _data[_front];
}

bool Queue::is_empty()
{
    if (_size == 0)
    {
       return true;
    }
    return  false;
}