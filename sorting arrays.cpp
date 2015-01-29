// Sorting arrays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

void sort(int[], int);

int _tmain(int argc, _TCHAR* argv[])
{
	const int SIZE = 5;
	int nums[SIZE];
	int x;
	char qFlag = 'n';
	srand(time(NULL));
	do {
		for (int i = 0; i < SIZE; i++)
			{
				x = rand() % 100 + 1;
				nums[i] = x;
				cout << nums[i] << "\t";
			}
		sort(nums, SIZE);
		cout << "quit?";
		cin >> qFlag;
		} while (qFlag != 'y' || qFlag != 'Y');

	return 0;
}
void sort(int arr[], int SIZE)
{
	int i = 0, x = 1;
	int hold; 
	do{
		if (arr[i] > arr[x])
		{
			hold = arr[i];
			arr[i] = arr[x];
			arr[x] = hold;
		}
		i++;
		x++;
	} while (x < SIZE);
	
	for (int z = 0; z < SIZE; z++)
	{
		cout << arr[z] << "\t";
	}
		
}
