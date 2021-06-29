/*
Написать программу, которая для вещественного массива из N элементов
определяет сумму его элементов, расположенных правее последнего
отрицательного элемента
*/

#include <iostream>

using namespace std;

void main()
{
	const int N = 10;

	float arr[N];

	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() - RAND_MAX / 2;
		std::cout << arr[i] << std::endl;
	}

	int j = N - 1;
	while (arr[j] >= 0)
		j--;

	float sum = 0;
	for (int i = j + 1; i < N; i++)
		sum += arr[i];


	std::cout << std::endl << sum;
}