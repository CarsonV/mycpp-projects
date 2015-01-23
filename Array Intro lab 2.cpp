//using arrays to find the maximum and minimum in a randomly generated pool of numbers
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	const int SIZE = 100;
	int  max, min;
	int numbers[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)// assigns array values
	{
		numbers[i] = rand();
		cout << numbers[i] << "\t" ;
	}
	cout << " " << endl;
	max = numbers[0];
	min = numbers[0];
	for (int i = 0; i < SIZE; i++) // compares numbers array to min and max
	{
		if (numbers[i] > max)
			max = numbers[i];
		if (numbers[i] < min)
			min = numbers[i];
	}
	cout << "max: " << max << endl;
	cout << "min: " << min << endl;

	system("pause");
	return 0;
}
