#include <iostream>

using namespace std;


template <typename T>
class Queue
{
	struct Node
	{
		T data;
		Node* prev;
	};
	Node* start;
	Node* end;
	Queue()
	{
		start = end = nullptr;
	}
	~Queue()
	{
		if (start != nullptr)
		{
			Node* pv = start;
			while (pv)
			{
				pv = pv->prev;
				delete start;
				start = pv;
			}
		}
	}
	void push(T in)
	{
		if (end == nullptr) 
		{
			start = end = new Node();
			end->data = in;
		}
		else
		{
			end->prev = new Node();
			end->prev->data = in;
			end = end.prev;
		}

	}
	T pull()
	{
		if (start != nullptr)
		{
			Node buffer = *start;
			delete start;
			start = buffer.prev;
		}
		return buffer.data;
	}
	ostream& operator << (ostream& stream)
	{
		Node* pv = start;
		while (pv)
		{
			stream << pv.data << "\t";
			pv = pv->next;
		}
		return stream;
	}
};