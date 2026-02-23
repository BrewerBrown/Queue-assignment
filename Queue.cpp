#include "Queue.h"

Queue::Queue()front(0)back(0) {}
bool Queue::Enq(int item) {
	bool success{ false };
	if (!IsFull()) {
		data[back++] = e;
	}
	return success;
}
bool Queue::Deq(int& item) {
	bool success{ false };
	if (!IsEmpty()) {
		success = true;
		item = data[front++];
	}
	return success;
}

bool Queue::IsFull()const {
	return back == MAX;
}
bool Queue::IsEmpty()const {
	return front == back;
}
void Queue::Print()const {
	for (int i{ front }; i < back; i++)
		cout << data[i] << endl;
}