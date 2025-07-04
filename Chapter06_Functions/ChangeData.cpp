/*
Goal: Using function overloading and reference variables to change data.

Assignment: Write a complete C++ program that allows the user to input and sort 
two values of a selected data type in ascending order. More in detail:

 -Prompt the user to select a data type by entering one of the following strings: 
 "char", "int", or "double". If a different string is entered the program should display
 the message "Invalid Option" and use the exit function to terminate with exit code 0.

- Once a valid data type is selected, prompt the user to input two values of that type.

-Pass the user's input values as arguments, in the same order they were entered by the user, 
to an overloaded function named order. 
The order function should use reference parameters to receive the arguments.
If the first argument is greater than the second, the function should swap the two values.

-Print the input values to the screen in ascending order, separated by a space

Your program should have the following overloaded versions of the order function:

A version that accepts two char arguments
A version that accepts two int arguments
A version that accepts two double arguments

As previously mentioned, the order function's parameters should be reference variables. 
The function should return nothing.

<Sample Run (User input in bold)>

Select a data type among char, int, and double: int
Enter the first value: -3

Enter the second value: -6

-6 -3

<End Sample Run>

Hint: To swap the values, use a temporary variable inside the order function 
to hold the value of one variable while assigning the other. 
This prevents losing the value during the swap process.

*/


#include <iostream>
#include <cstdlib>

using namespace std;

void order(int&, int&);
void order(double&, double&);
void order(char&, char&);

int main()
{

    string dataType;
    int a, b;
    double c, d;
    char e, f;

    cout << "Select a data type among char, int, and double: ";
    cin >> dataType;

    if (dataType != "char" && dataType != "int" && dataType != "double") {
        cout << "Invalid Option" << endl;
        exit(0);
    }
    else {
        if (dataType == "int") {
            cout << "Enter the first value: ";
            cin >> a;
            cout << "Enter the second value: ";
            cin >> b;
            order(a, b);
        }
        else if (dataType == "double") {
            cout << "Enter the first value: ";
            cin >> c;
            cout << "Enter the second value: ";
            cin >> d;
            order(c, d);
        }
        else if (dataType == "char") {
            cout << "Enter the first value: ";
            cin >> e;
            cout << "Enter the second value: ";
            cin >> f;
            order(e, f);
        }
    }

    return 0;
}

void order(int& x, int& y) {

    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    cout << x << " " << y << endl;
}

void order(double& x, double& y) {
    if (x > y) {
        double temp = x;
        x = y;
        y = temp;
    }

    cout << x << " " << y << endl;
}

void order(char& x, char& y) {
    if (x > y) {
        char temp = x;
        x = y;
        y = temp;
    }

    cout << x << " " << y << endl;
}