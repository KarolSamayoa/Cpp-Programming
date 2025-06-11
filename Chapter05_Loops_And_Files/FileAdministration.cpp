/*
Goal: Processing data read from a file

Assignment: You have stored your revenue for the previous year in a file named administration.txt. 
Each line in this file contains the amount of money you have earned per month (this can also be negative).

You need to know the total amount of money earned that year.

Write a code snippet that reads every entry in administration.txt and writes the total amount to total.txt.

Note: Assume the fstream and iostream header files have been included.

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Administration() {

	ofstream of;

	of.open("administration.txt");

	of << 1000.00 << endl;
	of << 25000.00 << endl;
	of << -15000.00 << endl;
	of << 18000.75 << endl;
	of << -1750.36 << endl;

	of.close();
}

void TotalAmountEarned() {

	ifstream inFile;

	inFile.open("administration.txt");

	double amoutEarned, total =0.0;

	while (inFile >> amoutEarned) {
		total += amoutEarned;
	}

	cout << "Total amount earned: $" << total << endl;

	inFile.close();

	ofstream of;
	of.open("total.txt");

	of <<  total << endl; 

	of.close();
}

int main() {

	//Administration();
	TotalAmountEarned();

	return 0; 
}