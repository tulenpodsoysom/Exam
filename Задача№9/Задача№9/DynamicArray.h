#pragma once
#include <ostream>
using namespace std;

class DynamicArray
{
	int* _array;
	int _amount;
	DynamicArray();
	~DynamicArray();
	void insert(int in);
	int amount();
	int& operator [] (const int index);
	ostream& operator << (ostream& stream);
};
