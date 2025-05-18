/*Program: ProfitDoublingCalculator

Purpose: Calculates and displays the company's profit for years 1 to 4,
assuming the profit doubles each year starting from an initial value.

Author: Karol Samayoa
Date: 5/17/2025 */


/*
Goal: Declare variables of the appropriate type.Assign values to variables
.Perform calculations with variables.Output the final result.

Assignment : A company doubles its profit every year.This means :

At the end of year 1, its profit will be twice the profit of year 0.
At the end of year 2, its profit will be twice the profit of year 1.
At the end of year 3, its profit will be twice the profit of year 2.
At the end of year 4, its profit will be twice the profit of year 3.

Write a complete C++ program that defines a named constant called YEAR_0 of type double, 
initialized with the value 25000. 
The program should then calculate and display the profits for years 1 through 4.
*/

#include <iostream> //required for input/output
using namespace std;

int main() {
    //define the initial profit for year 0 as a constant
    const double YEAR_0 = 25000;

    //Calculate profits for the next four years, doubling each years
    double year1 = YEAR_0 * 2;
    double year2 = year1 * 2;
    double year3 = year2 * 2;
    double year4 = year3 * 2;

    //Display the profits for years1 - year4
    cout << "The profit for year 1 was: " << year1 << " dollars" << endl;
    cout << "The profit for year 2 was: " << year2 << " dollars" << endl;
    cout << "The profit for year 3 was: " << year3 << " dollars" << endl;
    cout << "The profit for year 4 was: " << year4 << " dollars" << endl;

    return 0;

}

