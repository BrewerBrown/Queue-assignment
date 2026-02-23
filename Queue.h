#ifndef _QUEUE_H
#define _QUEUE_H

#include <iostream>
using namespace std;

const int MAX 10;

class Queue {
	int front{};
	int back{};
	int data{ MAX };
public:
	Queue();
	bool Enq(int item);
	bool Deq(int& item);
	bool IsFull()const;
	bool IsEmpty()const;
	void Print()const;
