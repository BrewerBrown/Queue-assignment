#include "Queue.h"

int main()
{
	Queue q1;

	int input{};
	cin >> input;
	while (input > 0) {
		if (!q1.End(input)) {
			cout << "Queue is full." << endl;
		}
		q1.Enq(input);
		q1.Print(); cout << endl;
		cout << "Enter val: ";
		cin >> input;
	}
	while (!q1.IsEmpty()) {
		int val{ 0 };
		q1.Deq(val);
		cout << val << " dequeued" << endl;
	}

	return 0;
}