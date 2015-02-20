// Life.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int XSIZE = 22;
const int YSIZE = 75;

void printWorld(char[][YSIZE]);
void populate(char[][YSIZE]);
int _tmain(int argc, _TCHAR* argv[])
{

	//startup - declare the array then clear it of junk
	char world[XSIZE][YSIZE] = { };// 2d array 22 tall by 75 wide
	
	
	//populate the array  
	populate(world);
	//print out array
	printWorld(world);
	//calculate live and dead cell moves

	//print out new array
	system("pause > NULL");
	return 0;
}
void populate(char world[XSIZE][YSIZE])
{
	char live = 178;

	for (int y = 0; y < 75; y++)
	{
		for (int x = 0; x < 22; x++)
		{
			if (x % 2 == 0 && y % 4 != 0)
			{
				world[x][y] = live;
			}
		}
	}
	
}
void printWorld(char world[XSIZE][YSIZE])
{
	for (int y = 0; y < 75; y++)
	{
		for (int x = 0; x < 22; x++)
		{
			cout << world[x][y];
		}
	}
}
