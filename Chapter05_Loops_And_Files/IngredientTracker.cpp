/*
Goal: Writing processed data to a file

Assignment: Write a code snippet that calculates the total amount of 
flour needed for a pizza recipe. Follow these requirements:

1. Accept keyboard input for multiple ingredients, with each line containing
an ingredient name followed by the required amount (as an integer).

2. The same ingredient may be entered multiple times in the input.
Keep track of the total amount of flour.

3. Continue accepting ingredients until the user enters "stop".

4. Write the total amount of flour needed to a file named "flour.txt".

5. If no flour is entered, write 0 to the file.

Make sure your code's screen output matches the format of the sample run below. 
In the sample run, the user entered "flour" two times (with the amounts 250 and 50),
so the code calculated a total 300 units of flour and wrote this value to the file "flour.txt".

Sample Run with User Input Shown in <>

Enter an ingredient: <flour 250>
Enter an ingredient: <salt 10>
Enter an ingredient: <tomato 300>
Enter an ingredient: <flour 50>
Enter an ingredient: <cheese 200>
Enter an ingredient: <stop>
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ofstream of;

	of.open("flour.txt");

	string ingredient;
	int amount = 0, totalFlour = 0; 
	string sentinel = "stop";

	while (true) {
		cout << "Enter an ingredient: ";
		cin >> ingredient;

		if (ingredient == sentinel) {
			break;
		}
		cin >> amount;

		of << ingredient << " " << amount << endl;

		if (ingredient == "flour") {
			totalFlour += amount; 
		}
	}	
	of << "Total amount of flour: " << totalFlour << endl;

	of.close();

	return 0; 
}