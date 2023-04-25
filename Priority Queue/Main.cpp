#include "PriorityQueue.h"

int main()
{
	// innitialize the priority queue
	PriorityQueue *q = new PriorityQueue();
	// push values to the queue
	q->push(21, 10);
	q->push(13, 8);
	q->push(16, 11);
	// traverse the queue and print the queue contents
	cout << "Queue's content: ";
	q->traverse();

	// testing the peek, and pop function
	cout << "Peeking! Front of the queue: " << q->peek() << endl;
	cout << "Queue after peeking: ";
	q->traverse();
	cout << "Popping! Front of the queue: " << q->pop() << endl;
	cout << "Queue after popping: ";
	q->traverse();

	// pause terminal
	system("pause");
	return 0;
}