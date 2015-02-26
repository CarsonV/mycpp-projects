// PhoneCall_Real.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char day1;
	char day2;
	int dayNum;
	int time1;
	char colon;
	int time2;
	int callDuration;
	






	// find out the day of the week
	cout << "What day of the week is it: ";
	cin >> day1;
	cin >> day2;
	// convert the day of the week input to uppercase
	day1 = toupper(day1);
	day2 = toupper(day2);

	// convert the first day of the week letter to a number for use in the program

	dayNum = static_cast<int>(day1);

	// find out the hour
	cout << "What time is it: ";
	cin >> time1;
	cin >> colon;
	cin >> time2;

	
	
	

	// find out how long the call was
	cout << "How long was the call in minutes: ";
	cin >> callDuration;


	// calculate the cost
	if ((dayNum == 77) || (dayNum == 84) ||(dayNum == 87) ||(dayNum == 70))
	{
		
	}
	//test
	cout << dayNum << endl;
	cout << day1 << day2 << endl;
	cout << time1 << time2 << endl;
	cout << callDuration << endl;

	system("pause");
	return 0;
}

