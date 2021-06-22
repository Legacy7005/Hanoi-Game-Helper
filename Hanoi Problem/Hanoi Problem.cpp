// Hanoi Problem.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Clinton Fabian Tower of Hanoi using Recursion 4/29/2021//

/*
https://www.mathsisfun.com/games/towerofhanoi.html
This website can be used to played the game...
*/

#include <iostream>
using namespace std;
//Recursion: Tower of Hanoi

//We take 4 int, one for the count, needle 1, needle 2, needle 3.
void move(int, int, int, int);

int main()
{
	int num;
	cout << "Enter the number of disks please: ";
	cin >> num;
	cout << endl;
	move(num, 1, 3, 2);
	system("Pause");
	return 0;
}


void move(int count, int n1, int n3, int n2)
{
	if(count > 0 )
	{
		move(count - 1, n1, n2, n3);
		cout << "Move disk " << " from " << n1 << " to " << n3 << "." << endl;
		move(count - 1, n2, n3, n1);
	}
}
