/*
Goal: Use the switch case statement and perform input validation.

Assignment: You are programming a simple utility that identifies the meteorological 
season based on the calendar month and hemisphere entered by the user. 
The program asks for the hemisphere (N for North, S for South), 
asks for the month as a number (1 for January, 2 for February, etc.),
and then displays the corresponding meteorological season.

Note: From now on, NH stands for Northern Hemisphere, and SH stands for Southern Hemisphere.

For this program, assume:

Winter (NH), Summer (SH): 
Spring (NH), Fall (SH): Mar-May
Summer (NH), Winter (SH): Jun- Aug
Fall (NH), Spring (SH): Sep-Nov

If the user enters an invalid hemisphere character, 
display the message "Please enter a valid hemisphere (N - S)." 
If the user enters a number less than 1 or greater than 12 for the month, 
display the message "Please enter a valid month number (1 - 12)."

Sample Runs: User input is in between square brackets.

Enter a hemisphere (N - S): [N]
Enter a month number (1 - 12): [3]
The season is Spring.

Enter a hemisphere (N - S): [n]
Please enter a valid hemisphere (N - S).

Enter a hemisphere (N - S): [S]
Enter a month number (1 - 12): [13]
Please enter a valid month number (1 - 12).

*/

#include <iostream>

using namespace std;

int main() {

	char hemisphere;
	int month = 0;

	cout << "Enter a hemisphere (N - S): ";
	cin >> hemisphere;

	if (hemisphere != 'N' && hemisphere != 'S') {
		cout << "Please enter a valid hemisphere (N - S)." << endl;
	}
	else {
		cout << "Enter a month number (1 - 12): ";
		cin >> month;
		if (month < 1 || month >12)
			cout << "Please enter a valid month number (1 - 12)." << endl;
	}

	switch (month) {
		case 12:
		case 1:
		case 2: 
			if (hemisphere == 'N') {
				cout << "The season is Winter." << endl;
			}
			else {
				cout << "The season is Summer." << endl; 
			}
			break; 

		case 3:
		case 4: 
		case 5:
			if (hemisphere == 'N') {
				cout << "The season is Spring." << endl;
			}
			else {
				cout << "The season is Fall." << endl;
			}
			break;

		case 6:
		case 7:
		case 8:
			if (hemisphere == 'N') {
				cout << "The season is Summer." << endl;
			}
			else {
				cout << "The season is Winter." << endl;
			}
			break;

		case 9:
		case 10:
		case 11:
			if (hemisphere == 'N') {
				cout << "The season is Fall." << endl;
			}
			else {
				cout << "The season is Spring." << endl;
			}
			break;
	}

	return 0;
}