
/*
Program: Grade to Letter Converter
-----------------------------------

This program reads a numeric grade from the user,
validates it within a specified range, and converts it
to the corresponding letter grade (AF or X for invalid input).

Input:
	- grade (int): Numeric grade entered by the user

Processing:
	- MIN_GRADE (const int): Minimum acceptable grade (40)
	- MAX_GRADE (const int): Maximum acceptable grade (105)
	- letterGrade (char):    Holds the result of the letter grade
	                         after evaluating the numeric grade

Output:
	- letterGrade (char): Displayed to the user as the equivalent
	                      letter grade or 'X' for invalid input
*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX_GRADE = 105;          // Maximum allowed grade input
const int MIN_GRADE = 40;           // Minimum allowed grade input
const char INVALID_GRADE = 'X';

int main() {

	int grade = 0;  
	char letterGrade;

	cout << "Enter a grade between " << MIN_GRADE << " and " << MAX_GRADE
		<< ": ";
	cin >> grade; 

	if (grade > MAX_GRADE) {
		cout << "Grade cannot be higher than " << MAX_GRADE << endl; 
		letterGrade = INVALID_GRADE;
	}
	else if (grade >= 90) {
		letterGrade = 'A';
	}
	else if (grade >= 80) {
		letterGrade = 'B';
	}
	else if (grade >= 70) {
		letterGrade = 'C';
	}
	else if (grade >= 60) {
		letterGrade = 'D';
	}
	else if (grade >= MIN_GRADE) {
		letterGrade = 'F';
	}
	else {
		cout << "Grade cannot be less than " << MIN_GRADE << endl;
		letterGrade = INVALID_GRADE; 
	}

	if (letterGrade != INVALID_GRADE) {
		cout << "You earned a " << letterGrade << endl;
	}
	else {
		cout << "Invalid grade input so not grade is assigned" << endl; 
	}

	return 0;
}