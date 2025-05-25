/*
Goal: Use mathematical functions, capture input from the user, 
and display the result of an operation.

Assignment: Write a program to calculate the area of a rectangle. 
The formula to calculate the area A of a rectangle is:

A = length * width

Your program should ask the user to input the length 
and width of the rectangle in meters and then 
calculate and display the area.

Sample: 

Enter the length of the rectangle in meters: <5>
Enter the width of the rectangle in meters: <10>
The area of the rectangle is: 50 square meters.

Note: You must write A complete C++ program, 
comprehensive of any inclusion preprocessor directives, 
namespace declaration, and the main function with its return. 
Use the sample run to determine which messages to display to the user.
*/


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <random>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	// Declare variables to store the area, length, 
	//and width of the rectangle
	double area, length, width;

	// Prompt the user to enter the length of the rectangle
	cout << "Enter the length of the rectangle in meters: "; 
	cin >> length;

	// Prompt the user to enter the width of the rectangle
	cout << "Enter the width of the rectangle in meters: ";
	cin >> width; 

	// Calculate the area of the rectangl
	area = (length * width);

	// Display the calculated area with a message
	cout << "The area of the rectangle is: " << area << " square meters." << endl; 
	return 0;
}
