#include <iostream>
using namespace std;
void main()
{
	const int size = 5;
	/*
	*  matrix[<номер строки>][<номер столбца>]
	*/
	int matrix[size][size] = {
		{45, 8, 12, 6, 1},
		{7, 85, 5, 24, 4},
		{32, 10, 1, 4, 0},
		{74, 85, 66, 41, 71},
		{4, 8, 2, 7, 6}
	};
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		int max = matrix[i][0];
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] > max)
				max = matrix[i][j];
		}
		sum += max;
	}

	cout << sum;
}