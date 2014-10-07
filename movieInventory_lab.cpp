// movieInventory_LAB.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "screen.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	double gPrice;
	int numGotG;
	double totalG;
	double xPrice;
	int numXmen;
	double totalX;
	double ePrice;
	int numEdge;
	double totalE;
	int numTotal;
	double avgValue;
	double totalValue;

	// set fixed number notation, showpoint and decimal accuracy

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout << setprecision(2);

	//ask movie prices and the ammount in inventory
	
	cout << "How much is Guardians? ";
	cin >> gPrice;
	cout << "How many Guardians does the store own? ";
	cin >> numGotG;

	cout << "How much is X-Men? ";
	cin >> xPrice;
	cout << "How many X-Men does the store own? ";
	cin >> numXmen;

	cout << "How much is Edge? ";
	cin >> ePrice;
	cout << "How many Edge does the store own? ";
	cin >> numEdge;

	// chart displaying the information given above
	
	delay(500);
	gotoxy(2, 8);
	cout << "Video Title \t \t  Cost \t  # in Stock" << endl;

	gotoxy(2, 9);
	cout << "Guardians of the Galaxy";
	gotoxy(27, 9);
	cout << "$" << gPrice << endl;
	gotoxy(35, 9);
	cout << numGotG << endl;

	gotoxy(2, 10);
	cout << "X-Men" << endl;
	gotoxy(27, 10);
	cout << "$" << xPrice << endl;
	gotoxy(35, 10);
	cout << numXmen << endl;

	gotoxy(2, 11);
	cout << "Edge of Tomorrow" << endl;
	gotoxy(27, 11);
	cout << "$" << ePrice << endl;
	gotoxy(35, 11);
	cout << numEdge << endl;

	// figure the total value

	totalG = gPrice * numGotG;

	totalX = xPrice * numXmen;

	totalE = ePrice * numEdge;

	totalValue = totalG + totalX + totalE;

	// figure the average value

	numTotal = numGotG + numXmen + numEdge;

	avgValue = totalValue / numTotal;


	// Display both the total value and average value

	cout << "The total value of all dvds is: $" << totalValue << endl;

	cout << "The average value is: $" << avgValue << endl;
	
	cout << "\n \n";
	system("pause");
	return 0;
}
