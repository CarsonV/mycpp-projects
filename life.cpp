// Life.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void printWorld(char[][75]);
int _tmain(int argc, _TCHAR* argv[])
{

	//startup - declare the array then clear it of junk
	char world[22][75];// 2d array 22 tall by 75 wide
	
	
	//populate the array  

	//print out array
	printWorld(world);
	//calculate live and dead cell moves

	//print out new array
	system("pause");
	return 0;
}
void printWorld(char world[22][75])
{
	for (int y = 0; y < 22; y++)
	{
		for (int x = 0; x < 75; x++)
		{
			cout << world[x][y];
		}
	}
}
