/*
Goal: Use cin, perform a basic mathematical operation, 
and display the result using stream manipulation.

Assignment: Write a program to calculate the area of a circle.
The program will use the following formula:

A = π x r^2

Where:

A is the area of the circle (in square meters);
r is the radius of the circle (in meters).

Assume π  is equal to 3.14.

The program should prompt the user to enter the radius of the circle in meters.
It will then calculate and display the area of the circle rounded to two decimal places.
Ensure the number is not shown in scientific notation.

Sample: 

Enter the radius of the circle (m): <5>
The area of the circle is: 78.50 square meters

Note: You will need to write A complete C++ program, 
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

	// Declare a constant value for PI
	const double PI = 3.14;

	// Declare variables to store the area and radius
	double area, radius;

	// Prompt the user to enter the radius
	cout << "Enter the radius of the circle (m): ";
	cin >> radius; 

	// Calculate the area of the circle
	area = PI * pow(radius, 2);

	// Set the output format to show 2 decimal places with fixed-point notation
	cout << setprecision(2) << fixed; 

	// Display the calculated area
	cout << "The area of the circle is: " << area << " square meters" << endl; 

	return 0; 
}