/*
Написать программу, которая для одномерного массива произвольного числового типа
определяет значение максимального и минимального элемента, 
а также среднее арифметическое значение элементов. 
Использовать шаблон функции, которая принимает массив в качестве входного параметра, 
возвращает минимум и максимум через выходные параметры, а среднее–через возвращаемое значение.
*/
#include <iostream>
using namespace std;

const int N = 5;

template <typename T> 
float func(T* arr, T& min, T& max)
{
	int imin = 0;
	int imax = 0;
	T sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
		if (arr[i] > arr[imax]) imax = i;
		else if (arr[i] < arr[imin]) imin = i;
	}
	max = arr[imax];
	min = arr[imin];
	return sum / float (N;
}

void main()
{
	double arr[N];
	for (int i = 0; i < N; i++)
	{
		arr[i] = ((rand() - RAND_MAX / 2) % 10) /2.;
		cout << arr[i] << endl;
	}
	
	cout << endl;
	float arr2[N];
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr[i];
		cout << arr2[i] << endl;
	}

	cout << endl;
	int arr3[N];
	for (int i = 0; i < N; i++)
	{
		arr3[i] = arr[i];
		cout << arr3[i] << endl;
	}

	double min, max;
	float min2, max2;
	int min3, max3;

	cout << endl;
	cout << func(arr, min, max) <<endl;
	cout << min << '\t' << max <<endl;
	cout << func(arr2, min2, max2) << endl;
	cout << min2 << '\t' << max2 << endl;
	cout << func(arr3, min3, max3) << endl;
	cout << min3 << '\t' << max3 << endl;

}
