/*
Goal: Declare variables of the appropriate type. Assign values to variables. 
Perform calculations with variables. Output the final result.

Assignment: There are 60 seconds in a minute, 60 minutes in an hour, and 24 hours in a day.

Write a complete C++ program that defines the following named constants :

DAYS, a constant of type int, initialized with the value 3
SECONDS_PER_MINUTE, a constant of type int, initialized with the correct value
MINUTES_PER_HOUR, a constant of type int, initialized with the correct value
HOURS_PER_DAY, a constant of type int, initialized with the correct value

The program should calculate and display the number of seconds, 
minutes and hours that the value of DAYS is equivalent to.

The following sample run shows how the output of your program should appear. 
Make sure your output matches the sample run exactly, including spaces and punctuation.

Sample Run:

The number of seconds in 3 days is: 259200
The number of minutes in 3 days is: 4320
The number of hours in 3 days is: 72

*/


#include <iostream>
using namespace std;

int main (){

	const int DAYS = 3;

	const int HOURS_PER_DAY = 24;
	const int MINUTES_PER_HOUR =  60;
	const int SECONDS_PER_MINUTE = 60;

	int totalHours = DAYS * HOURS_PER_DAY;
	int totalMinutes = totalHours * MINUTES_PER_HOUR;
	int totalSeconds = totalMinutes * SECONDS_PER_MINUTE;

	cout <<"The number of seconds in 3 days is: " << totalSeconds << endl;
	cout <<"The number of minutes in 3 days is: " << totalMinutes << endl;
	cout << "The number of hours in 3 days is: " << totalHours << endl;

	return 0;
}
