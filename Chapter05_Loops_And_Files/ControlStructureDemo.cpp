/*

This program demonstrates the use of whilea nd do - while loops, input validation,
and increment operations(prefix and postfix). It includes examples of:
    -Counting up and down using loops
    -Validating user input within a specific range
    -Displaying values and their squares in tabular form
    -Understanding infinite loop behavior and how to avoid it

*/


#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Constants to define valid range for later loop
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    // Variable declarations
    int number = 0;
    int maxNum = 0;
    int counter = 0;
    bool needData = true;
    bool validData = false;

    // Demonstrating postfix and prefix increment
    cout << number++ << endl;
    cout << number << endl;
    cout << ++number << endl;
    cout << number << endl;
    cin.get();

    number = 1;

    // Simple while loop: prints 1 to 5
    while (number <= 5) {
        cout << number << " ";
        number++;
    }
    cout << endl;

    // This loop will NOT execute since number > 5 already
    while (number <= 5) {
        cout << number++ << " ";
    }
    cout << endl;

    // User enters a number, loop prints from current value of 'number' to 'maxNum'
    cout << "Enter a number: ";
    cin >> maxNum;

    while (number <= maxNum) {
        cout << number << " ";
        number++;
    }
    cout << endl;

    //infinite loop
    number = 1;
    while (number <= maxNum) {
        cout << number << " ";
        number++;
    }
    cout << endl;

    // Countdown using while loop
    number = 3;
    while (number > 0) {
        cout << "num " << number << endl;
        number--;
    }
    cout << endl;

    //while loop for data validation
    cout << "Enter a number from 1-100 while loop: ";
    cin >> number;

    while ((number < 1) || (number > 100)) {
        cout << "Error - Please reenter: ";
        cin >> number;
    }

    // Input validation using do-while (ensures the loop runs at least once)
    do {
        cout << "Enter a number from 1-100 do while no boolean: ";
        cin >> number;
        if ((number < 1) || (number > 100)) {
            cout << "Invalid data" << endl;
        }

    } while ((number < 1) || (number > 100));

    // Improved version using a boolean variable
    do {
        cout << "Enter a number from 1-100 Better: ";
        cin >> number;
        needData = (number < 1) || (number > 100);
        if (needData) {
            cout << "Invalid Data" << endl;
        }
    } while (needData);

    // Print numbers and their squares using while loop
    counter = MIN_NUMBER;
    while (counter <= MAX_NUMBER) {
        int numSquared = (counter * counter);
        cout << counter << setw(10) << numSquared << endl;
        counter++;
    }

    return 0;
}