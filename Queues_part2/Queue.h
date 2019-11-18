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
	    _QUESIZE = 10;
	    _data = new char[_QUESIZE]; }

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


#endif
