#include "DynamicArray.h"
#include <ostream>

DynamicArray::DynamicArray()
{
	_array = nullptr;
}

DynamicArray::~DynamicArray()
{
	delete[] _array;
}

void DynamicArray::insert(int in)
{
	_amount++;
	if (_array != nullptr)
	{
		int* buffer = _array;
		_array = new int[_amount];
		for (int i = 0; i < _amount-1; i++)
		{
			_array[i] = buffer[i];
		}
		_array[_amount-1] = in;
	}
	else
	{
		_array = new int;
		_array[0] = in;
	}

}

int DynamicArray::amount()
{
	return this->_amount;
}

int& DynamicArray::operator[](const int index)
{
	// TODO: вставьте здесь оператор return
	return _array[index];
}

ostream& DynamicArray::operator << (ostream& stream)
{
	for (int i = 0; i < _amount; i++)
		stream << _array[i] << endl;
	return stream;
}
