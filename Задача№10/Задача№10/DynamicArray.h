#pragma once
#include <ostream>
using namespace std;

template <typename T> class DynamicArray
{
	T* _array;
	int _amount;

public:
	DynamicArray()
	{
		_array = nullptr;
	}

	~DynamicArray()
	{
		delete[] _array;
	}

	void insert(T in)
	{
		_amount++;
		if (_array != nullptr)
		{
			T* buffer = _array;
			_array = new T[_amount];
			for (int i = 0; i < _amount - 1; i++)
			{
				_array[i] = buffer[i];
			}
			_array[_amount - 1] = in;
		}
		else
		{
			_array = new T;
			_array[0] = in;
		}

	}

	int amount()
	{
		return this->_amount;
	}

	int& operator[](const int index)
	{
		return _array[index];
	}

	ostream& operator << (ostream& stream)
	{
		for (int i = 0; i < _amount; i++)
			stream << _array[i] << endl;
		return stream;
	}

};
