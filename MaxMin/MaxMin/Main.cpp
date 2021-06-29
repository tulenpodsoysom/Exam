#include <iostream>

using namespace std;

void main()
{
	srand(time(0));
	const int N = 100000;
	int* arr = new int[N];
	//int arr[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() - RAND_MAX/2;
		//cout << arr[i] << '\n';
	}
	cout << endl <<endl;

	int min = 0, max = 0;

	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
		{
			if (arr[min] > arr[j]) min = j;
			if (arr[max] < arr[j]) max = j;
		}

	cout << arr[min] << '\t' << arr[max] << endl;

	unsigned int k = 0;
	if (min > max)
		for (int i = max; i < min; i++)
		{
			if (arr[i] > 0) k++;
		}
	else if (max > min)
		for (int i = min; i < max; i++)
		{
			if (arr[i] > 0) k++;
		}
	cout << k << endl;
}