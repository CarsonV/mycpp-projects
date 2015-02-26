// Life.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int XSIZE = 22;
const int YSIZE = 75;

void printWorld(char[][YSIZE]);
void populate(char[][YSIZE]);
void generation(char[][YSIZE]);
int _tmain(int argc, _TCHAR* argv[])
{

	//startup - declare the array then clear it of junk
	char world[XSIZE][YSIZE] = { };// 2d array 22 tall by 75 wide
	
	
	//populate the array  
	populate(world);
	//print out array
	printWorld(world);
	//calculate live and dead cell moves
	generation(world);
	//print out new array
	system("pause > NULL");
	return 0;
}
void populate(char world[XSIZE][YSIZE]) //inital seed for the world array
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
void printWorld(char world[XSIZE][YSIZE]) //prints out the world array
{
	for (int y = 0; y < 75; y++)
	{
		for (int x = 0; x < 22; x++)
		{
			cout << world[x][y];
		}
	}
}
void generation(char world[XSIZE][YSIZE])
{
	int next = 0;
	for (int y = 0; y < 75; y++)
	{
		for (int x = 0; x < 22; x++)
		{
			//if (y > 1 && x > 1 )
			{
				if ((world[x - 1][y]) ==  178) // search directly to the left for life
					next++;
				if (world[x - 1][y + 1] == 178)// up left
					next++;
				if (world[x][y + 1] == 178) // directly above
					next++;
				if (world[x + 1][y + 1] == 178) // up right
					next++;
				if (world[x + 1][y] == 178) // directly right
					next++;
				if (world[x + 1][y - 1] == 178) // down right
					next++;
				if (world[x][y - 1] == 178) // directly below
					next++;
				if (world[x - 1][y - 1] == 178) // down left
					next++;
			}
		}
	}
	cout << next;
}
