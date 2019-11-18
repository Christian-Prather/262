#include "Queue.h"
#include <iostream>
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
//    std::cout << (int)c <<std::endl;

//if(_size == 99999)
//{
//    std::cout << "9";
//}
    if (_size == _QUESIZE)
    {
///////////////////////////////////////////////////////////////////////
char* tmpArray = new char[_QUESIZE * 2];
char tmp[_QUESIZE+1];
for (int i = 0; i < _QUESIZE; i ++)
{
    tmp[i] = this->front();
    tmpArray[i] = this->front();
    this->dequeue();

}

delete[] _data;
tmpArray[_QUESIZE] = c;
tmp[_QUESIZE] = c;

_data = tmpArray;
_QUESIZE++;
_size = _QUESIZE;
_front = 0;
_back  = _size;
///////////////////////////////////////////////////////////////////////
//        char tmp[_size];
//        for ( int i=0; i  < _QUESIZE; i++ )
//        {
//           // std::cout << (int) this->front() <<std::endl;
//
//            tmp[i] = this->front();
//            this->dequeue();
//         //   std::cout << (int)tmp[i] << std::endl;
//
//        }
//        delete[] _data;
//        _QUESIZE ++;
//        char* tmpArray = new char[_QUESIZE];
//        //_data = tmpArray;
//        _front = 0;
//        _size = 0;
//        _back = 0;
//        int thing = sizeof(tmp);
//        for (int j = 0; j < thing; j++)
//        {
//            tmpArray[_back] = tmp[j];
//            _back ++;
//            _back = _back % _QUESIZE;
//            _size++;
//        }
//        tmpArray[_back] = c;
//        _back ++;
//        _back = _back % _QUESIZE;
//        _size++;
//        _data = tmpArray;
        return true;
        //return false;
    }
    else
    {
        _data[_back] = c;
        _back++;
        _back = _back % _QUESIZE;
        _size++;
        return true;
    }
}

bool Queue::dequeue()
{
    if (!is_empty())
    {
        _front++;
        _front = _front % _QUESIZE;
        _size --;
        return true;
    }

    return  false;
}

char Queue::front()
{

    //   std::cout << (int)_data[_front] << std::endl;

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
Queue::Queue(Queue &a)
{
    char* data = new char[a._QUESIZE];
    for (int i = 0; i < a._QUESIZE; i++)
    {
        data[i] = a._data[i];

    }
    _data = data;
    _size = a._size;
    _QUESIZE = a._QUESIZE;
    _front = a._front;
    _back = a._back;



}
Queue& Queue::operator=(Queue &a)
{
    if (this == &a )
    {
        return  *this;

    }
    for (int i = 0; i < a._QUESIZE; i++)
    {
        this->_data[i] = a._data[i];

    }
    _size = a._size;
    _QUESIZE = a._QUESIZE;
    _front = a._front;
    _back = a._back;

    return *this;

}

Queue::~Queue()
{
    delete[]_data;
}


