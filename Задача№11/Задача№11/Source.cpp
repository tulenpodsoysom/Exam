template <typename T>
class Node
{
public:
	T data;
	Node* prev;
};

template <typename T>
class Queue
{
	<T> Node* start;
	<T> Node* end;
	Queue()
	{
		start = new Node();
		end = new Node();
	}
	~Queue()
	{
	}
	void push(T in)
	{
		end->prev = new Node();
		end->prev->data = in;
		end = end.prev;
	}
	T pull()
	{
		if (start != nullptr)
		{
			<T> Node buffer = *start;
			delete start;
			start = buffer.prev;
		}
	}
	ostream& operator << (ostream& stream)
	{
		stream << this->pull() << endl;
	}
};