/*
Goal: Use the switch case statement and perform input validation.

Assignment: Develop a program for a fitness activity tracker that displays a menu
for different types of physical activities. 
The program will calculate and display the estimated calories 
burned for that activity based on the user's choice.

Menu Structure:

Jogging
Cycling
Swimming
Quit

Enter your choice (1-4): User Choices and Prompts:

If the user enters 1 (Jogging):
	-Prompt: "\nEnter the time spent jogging in minutes: "
	-Read the duration as input.
	-Calculate calories burned using the formula: Calories = 0.75 * duration
	-Print: "\nCalories burned: ", followed by the calculated value, followed by a newline.

If the user enters 2 (Cycling):
	-Prompt: "\nEnter the time spent cycling in minutes: "
	-Read the duration.
	-Calculate calories burned using: Calories = 0.5 * duration
	-Print the result as above.

If the user enters 3 (Swimming):
	-Prompt: "\nEnter the time spent swimming in minutes: "
	-Read the duration.
	-Calculate calories burned using: Calories = 0.8 * duration
	-Print the result as above.
If the user enters 4 (Quit):
	Print: "\nProgram ending.\n" 
	
Valid menu choices are 1, 2, 3, or 4. 
	If invalid, print: "\nValid choices are 1 through 4. Try again.\n"

Fitness Activity Tracker↵
↵
1. Jogging↵
2. Cycling↵
3. Swimming↵
4. Quit↵
↵
Enter your choice (1-4): [2]
↵
Enter the duration in minutes: [30]
↵
Calories burned: [15.0]
*/

#include <iostream>
using namespace std;

int main() {

    int choice;
    int minutes;
    double caloriedBurned;

    cout << "Fitness Activity Tracker\n" << endl;
    cout << "1. Jogging" << endl;
    cout << "2. Cycling" << endl;
    cout << "3. Swimming" << endl;
    cout << "4. Quit" << endl << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "\nEnter the time spent jogging in minutes: ";
        cin >> minutes;
        caloriedBurned = minutes * 0.75;
        cout << "\nCalories burned: " << caloriedBurned << endl;
        break;
    case 2:
        cout << "\nEnter the time spent cycling in minutes: ";
        cin >> minutes;
        caloriedBurned = minutes * 0.5;
        cout << "\nCalories burned: " << caloriedBurned << endl;
        break;
    case 3:
        cout << "\nEnter the time spent swimming in minutes: ";
        cin >> minutes;
        caloriedBurned = minutes * 0.8;
        cout << "\nCalories burned: " << caloriedBurned << endl;
        break;
    case 4:
        cout << "\nProgram ending.\n";
        break;
    default:
        cout << "\nValid choices are 1 through 4. Try again.\n";
    }
    return 0;
}
