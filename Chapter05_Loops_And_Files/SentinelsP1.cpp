/*
Goal: Use a sentinel value to exit a loop

Assignment: Write a code snippet that uses a loop to prompt the user to enter integers. 
The loop should continue asking for values until the user enters the sentinel value -999. 
Once the sentinel value is detected, your code should display the count of how many 
negative numbers were entered (not including the sentinel value itself).

The sample run below shows an example of your code's output. 
Make sure your code's output matches the format of the sample run.

Sample Run with User Input Shown in <>

Enter an integer: <9>
Enter an integer: <-1>
Enter an integer: <-7>
Enter an integer: <8>
Enter an integer: <-999>
Negative numbers: 2

*/

#include <iostream>

using namespace std;

int main() {

	const int SENTINEL = -999;

	int integer;
	int count = 0;

	cout << "Enter an integer: ";
	cin >> integer; 

	while (integer != SENTINEL) {
		cout << "Enter an integer: ";
		cin >> integer;

		if (integer < 0 && integer !=SENTINEL) {
			count++;
		}
	}
	cout << "Negative numbers: " << count << endl;

	return 0; 
}