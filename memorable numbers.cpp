//Carson Vance

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void convert(char[]);

int _tmain(int argc, _TCHAR* argv[])
{
	string holdIn;
	char input[7] = { };

	cout << "Enter in a 7 digit number: ";
	cin >> holdIn;

	for (int i = 0; i < 7; i++)
	{
		if (holdIn.at(i) == '-')
		{
			holdIn.at(i) = holdIn.at(i + 1);
			holdIn.at(i + 1) = holdIn.at(i + 2);
			holdIn.at(i + 2) = holdIn.at(i + 3);
			holdIn.at(i + 3) = holdIn.at(i + 4);
		}
		input[i] = holdIn.at(i);
	}
	for (int i = 0; i < 7; i++)
	{
		cout << input[i];
	}

	system("pause");
	return 0;
}
void convert(char in[])
{
	char words[7];

	for (int i = 0; i < 7; i++)
	{
		if (in[i] == 2)
	}
}
