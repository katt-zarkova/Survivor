#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

/*-- start of the game 
================================================== -- */
int main()
{
	char name[50];
	cout << "After the shipwreck, you are the only survivor. With the little battery you have you call for help." << endl;
	cout << "A rescue squad will arive in 30 days. Your task is to survive. " << endl;
	cout << "What is your name?" << endl;
	cin.getline(name, 50);
	cout << "Hello, " << name << "Let's start surviving." << endl;
	cout << "\n----------------------Press any key to continue----------------------" << endl;
	_getch();
	return 0;
}
//start of the game ver. 1.0
