/*
Написать программу, которая для целочисленной матрицы размером(NxM)
определяет среднее арифметическое её элементов, а также количество
положительных и отрицательных элементов в каждой строке.
*/

#include <iostream>

using namespace std;



void main()
{
	srand(time(0));
	const int N = 5;
	const int M = 5;

	int matrix[N][M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = (rand() - RAND_MAX / 2) % 10;
			cout << matrix[i][j] <<'\t';
		}
		cout << endl;
	}

		

	float mean = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			mean += matrix[i][j];

	mean /= N * M;
	cout << endl<< mean << endl;

	for (int i = 0; i < N; i++)
	{
		int kpos = 0, kneg = 0;
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] > 0) kpos++;
			if (matrix[i][j] < 0) kneg++;
		}

		cout << i << "\t" << kpos << "\t" << kneg << endl;
	}

}