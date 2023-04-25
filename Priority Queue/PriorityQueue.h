#pragma once
#include <iostream>
using namespace std;

class PriorityQueue
{
private:
	class Node
	{
	public:
		int data;
		int priority;
		Node *next;

		Node(int data, int priority)
		{
			this->data = data;
			this->priority = priority;
			this->next = nullptr;
		}

		bool operator<(const Node &other) const
		{
			return this->priority < other.priority;
		}

		bool operator==(const Node &other) const
		{
			return this->data == other.data;
		}

		bool operator>(const Node &other) const
		{
			return this->priority > other.priority;
		}

		friend ostream &operator<<(ostream &os, const Node &node)
		{
			os << node.data;
			return os;
		}
	};

	Node *front;

public:
	PriorityQueue()
	{
		front = nullptr;
	}

	bool isEmpty()
	{
		return front == nullptr;
	}

	void push(int data, int priority)
	{
		Node *newNode = new Node(data, priority);
		if (isEmpty())
		{
			front = newNode;
		}
		else
		{
			if (*front < *newNode || *front == *newNode)
			{
				newNode->next = front;
				front = newNode;
			}
			else
			{
				Node *current = front;
				while (current->next)
				{
					if (*current->next < *newNode || *current->next == *newNode)
					{
						break;
					}
					current = current->next;
				}
				newNode->next = current->next;
				current->next = newNode;
			}
		}
	}

	int pop()
	{
		if (isEmpty())
		{
			return -1; // or any sentinel value to indicate empty queue
		}
		int data = front->data;
		Node *temp = front;
		front = front->next;
		delete temp;
		return data;
	}

	int peek()
	{
		if (isEmpty())
		{
			return -1; // or any sentinel value to indicate empty queue
		}
		return front->data;
	}

	void traverse()
	{
		if (isEmpty())
		{
			return;
		}
		Node *current = front;
		while (current)
		{
			cout << current->data << " ";
			current = current->next;
		}
		cout << endl;
	}
};