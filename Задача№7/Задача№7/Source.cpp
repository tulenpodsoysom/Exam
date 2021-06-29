/*
Даны два массива из N целых чисел каждый.
Определить, для какого из них среднее арифметическое значение элементов больше.
Для решения задачи написать функцию, принимающую массив в качестве параметра
и возвращающую среднее значение.
*/
#include <iostream>
using namespace std;

const int N = 5;

float mean(int* arr)
{
	int sum = 0;
	for (int i = 0; i < N; i++)
		sum += arr[i];
	return sum / float(N);
}

void main()
{
	srand(time(0));

	int arr_1[N];
	int arr_2[N];

	for (int i = 0; i < N; i++)
	{
		arr_1[i] = (rand() - RAND_MAX / 2)%10;
		arr_2[i] = (rand() - RAND_MAX / 2)%10;
		cout << arr_1[i] << '\t' << arr_2[i] << endl;
	}

	float m1 = mean(arr_1), m2 = mean(arr_2);

	cout <<'\n'<< m1 << '\t' << m2 << "\n\n";

	if (m1 > m2)
		cout << "first's mean is bigger" << endl;
	else if (m1 < m2)
		cout << "Second's mean is bigger" << endl;
	else if ((m1 == m2))
		cout << "Means are equal" << endl;
}