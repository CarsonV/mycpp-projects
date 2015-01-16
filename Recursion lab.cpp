// lab prompt is on the google drive
//

#include "stdafx.h"
#include <iostream>


using namespace std;

int pow(int, int, int);
int factorial(int);
int fibonacci(int);
int collatz(int,int);

int _tmain(int argc, _TCHAR* argv[])
{
	int choice, input, exp, x;
	char qFlag;
	do
	{
		cout << "Chose choose one of the following programs" << endl;
		cout << "1.Powers" << endl;
		cout << "2.Factorials" << endl;
		cout << "3.Fibonacci" << endl;
		cout << "4.Collatz" << endl;
		cout << "5.Quit" << endl;
		cin >> choice;

		do
		{
			switch (choice)
			{
			case 1:
				cout << "Base #: ";
				cin >> input;
				cout << "Exponent #: ";
				cin >> exp;
				x = pow(input, exp, 0);
				cout << x << endl;
				cout << "quit(y/n)";
				cin >> qFlag;
				break;

			case 2:
				cout << "Base #: ";
				cin >> input;
				x = factorial(input);
				cout << x << endl;
				cout << "quit(y/n)";
				cin >> qFlag;
				break;

			case 3:
				cout << "Base #: ";
				cin >> input;
				x = fibonacci(input);
				cout<< "Answer is: " << x << endl;
				cout << "quit(y/n)";
				cin >> qFlag;
				break;

			case 4:
				cout << "Base #: ";
				cin >> input;
				x = collatz(input, 0);
				cout << "Answer is :" << x << endl;
				cout << "quit(y/n)";
				cin >> qFlag;
				break;

			case 5:
				qFlag = 'y';
				break;

			}
			
		} while (qFlag != 'y');
		system("cls");
	} while (choice != 5);


	return 0;
}
int pow(int num, int exp, int level)
{
	level++;
	for (int i = 1; i < level * 2; i++)
	{
		cout << " ";
	}
	cout << "At depth " << level << endl;

	if (exp == 1)
		return num;
	//cout << level << endl;
	return num *= pow(num, exp - 1, level);
}
int factorial(int input)
{
	if (input == 1)
		return input;
	return input * factorial(input - 1);
}
int fibonacci(int num)
{
	if (num == 1)
		return 0;
	if (num == 2)
		return 1;
	cout << num << endl;
	return fibonacci(num - 1) + fibonacci(num - 2);
}
int collatz(int num,int level)
{
	level++;
	for (int i = 1; i < level * 2; i++)
	{
		cout << " ";
	}
	cout << "At depth " << level << endl;
	cout << num << endl;
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return collatz(num / 2, level);
	if (num % 2 != 0)
		return collatz(3 * num + 1, level);


}
