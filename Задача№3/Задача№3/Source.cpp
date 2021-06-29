/*
Ќаписать программу, котора€ дл€ целочисленного массива из N элементов определ€ет, 
сколько положительных элементов располагаетс€ между его максимальным и минимальным элементами.
*/
#include <iostream>

void main()
{
	const int N = 10;

	int arr[N];

	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() - RAND_MAX / 2;
		std::cout << arr[i] << std::endl;
	}
		

	int min = 0, max = 0;
	int k = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > arr[max]) max = i;
		else if (arr[i] < arr[min]) min = i;
	}

	if		(max < min)
	{
		for (int i = max + 1; i < min; i++)
			if (arr[i] > 0) k++;
	}
	else if (min < max)
	{
		for (int i = min + 1; i < max; i++)
			if (arr[i] > 0) k++;
	}

	std::cout << k;

}