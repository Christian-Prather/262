#ifndef _Queue_h
#define _Queue_h

/*
    Queue.h
        
    class definition for the Queue class.

    assignment: CSCI 262 Lab - Queues, part 1       

    author: 

    last modified: 9/7/2017
*/

#include <cstdlib>
template <class T>
class Queue {
public:
	// max elements in queue
    //static const size_t ARRAY_SZ = 5;

	Queue() {
        _front = 0; _back = 0; _size = 0;
	    _QUESIZE = 5;
	    _data = new T[_QUESIZE]; }

	bool enqueue(char c);
	bool dequeue();
	char front();
	bool is_empty();
    int size() { return _size;}
    Queue(Queue<T>& a);
    ~Queue();
    Queue& operator=(Queue<T>& a);

private:
    int _QUESIZE;
	T* _data;
	int _front = 0;
	int _back = 0;
	int _size = 0;
};

template <class T>
bool Queue<T>::enqueue(char c)
{
    if (_size == _QUESIZE)
    {
        T* tmpArray = new T[_QUESIZE * 2];
        for (int i = 0; !is_empty(); i ++) //IS EMPTY!!!
        {
         //   tmp[i] = this->front();
            tmpArray[i] = _data[_front];
            this->dequeue();

        }

        delete[] _data;
        tmpArray[_QUESIZE] = c;
        //tmp[_QUESIZE] = c;

        _data = tmpArray;
        _QUESIZE = _QUESIZE * 2;
        _back = (_QUESIZE /2) + 1;
        _size = _back;
        _front = 0;

        return true;
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
template <class T>
bool Queue<T>::dequeue()
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
template <class T>
char Queue<T>::front()
{

    return  _data[_front];
}
template <class T>
bool Queue<T>::is_empty()
{
    if (_size == 0)
    {
        return true;
    }
    return  false;
}
template <class T>
Queue<T>::Queue(Queue<T> &a)
{
    T* data = new T[a._QUESIZE];
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

template <class T>
Queue<T>& Queue<T>::operator=(Queue<T> &a)
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
template <class T>
Queue<T>::~Queue<T>()
{
    delete[] _data;
}

#endif
