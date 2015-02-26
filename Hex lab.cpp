// HEX lab.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std; 

void printArr(char[], int);
void input(char[], int);

int _tmain(int argc, _TCHAR* argv[])
{
	char num1[10] = { '0', '0', '0', '0', '0', '0', '0', '0', '0', '0' };
	char num2[10] = { '0', '0', '0', '0', '0', '0', '0', '0', '0', '0' };

	cout << "Enter the first hex num ";
	input(num1, 10);
	//cout << "\nEnter the second hex num ";

	
	system("pause");
	return 0;
}
void input(char num[], int size) //input the data into the hex arrays
{
	char holdVal = '0';
	int i = 0;
	while (holdVal != 'CR' || i != 9)
	{
		cin >> holdVal;
		num[i] = holdVal;
		i++;
	}
	printArr(num, size);
}

void printArr(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}
