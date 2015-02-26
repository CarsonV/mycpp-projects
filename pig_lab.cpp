// pig_lab.cpp : not a complete program
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "screen.h"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	float numQuarters;
	float valueQ = .25;

	float numDimes;
	float valueD = .10;

	float numNickels;
	float valueN = .05;

	float numPennies;
	float valueP = .01;

	float total;

	int wSaving;


	//title screen
	gotoxy(30, 10);
	cout << "Piggy Bank Program!" << endl;
	gotoxy(1, 23);
	delay(1000);
	system("cls");

	//User welcome
	cout << "What is your first name?" << endl;
	cin >> name;
	cout << "Hello! " << name << endl;

	//number of coins
	cout << "How many quarters do you have in the piggy bank?" << endl;
	cin >> numQuarters;

	cout << "How many dimes do you have in the piggy bank?" << endl;
	cin >> numDimes;

	cout << "How many nickles do you have in the piggy bank?" << endl;
	cin >> numNickels;

	cout << "How many pennies do you have?" << endl;
	cin >> numPennies; 

	cout << "How many weeks have you been saving?" << endl;
	cin >> wSaving;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout << setprecision(2);
	
	numQuarters = numQuarters * valueQ;
	
	numDimes = numDimes * valueD;

	numNickels = numNickels * valueN;

	numPennies = numPennies * valueP;

	total = numQuarters + numDimes + numNickels + numPennies;


	cout << "$" << total << endl;

	
	





	system("pause");
	return 0;
}

