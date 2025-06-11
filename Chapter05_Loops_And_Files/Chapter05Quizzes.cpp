

#include <iostream>
#include <string>

using namespace std;

/*
Goal: Use a do-while loop to perform an input validation

Assignment: Imagine you are creating a basic interface for a library management system.
The system should continuously prompt the user to choose an action
until they decide to exit. The actions could be adding a book, searching for a book,
or exiting the system.
For simplicity, the user will input "A" to add a book, "S" to search, and "E" to exit.

Given a string variable choice that has been declared,
write a code snippet that repeatedly reads a value from the console into choice.
The program should continue prompting the user until "E" or "e" (for "Exit") is entered.
If "A" or "a" is entered, print "Add Book\n". If "S" or "s" is entered,
print "Search Book\n". For any other input, the program should ask for input again.

Sample Run:

Enter your choice (A/S/E): a
Add Book
Enter your choice (A/S/E): S
Search Book
Enter your choice (A/S/E): x
Enter your choice (A/S/E): E

*/

void LibraryManagementSystem() {

    string choice;

    do {
        cout << "Enter your choice (A/S/E): ";
        cin >> choice;

        if (choice == "A" || choice == "a") {
            cout << "Add Book\n";
        }
        else if (choice == "S" || choice == "s") {
            cout << "Search Book\n";
        }
        else if (choice == "E" || choice == "e") {
        }
        else {
        }

    } while (choice != "E" && choice != "e");
}

/*
* Goal: Use a do-while loop to perform actions.

Assignment: Imagine you are programming a simulation for a robot that explores areas 
that are difficult for humans to reach. The robot periodically sends the distance 
it has traveled as input to your program. When the robot reaches its destination, it sends 0.
Your task is to write code that reads the values sent by the robot and calculates their total.

Assume that an int variable named totalDistance has already been declared and initialized.
Write a do-while loop that performs the following steps:

 -Reads an integer as input. This is the distance the robot has traveled.
 -Adds the input to the totalDistance variable.

The loop should repeat these steps until the input is 0. 
When the loop stops, your code should print the message:

Distance traveled: <totalDistance>

Where <totalDistance> is the value of the totalDistance variable.

Sample Run: 

10>
<4>
<6>
<12>
<0>
Distance traveled: 32
*/

void Simulation() {

    int distance= 0;
    int totalDistance = 0;

    do {
        cin >> distance;
        if (distance != 0)
            totalDistance += distance;

    } while (distance != 0);

    cout << "Distance traveled: " << totalDistance;
}

/*
Goal: Using loops to keep a total

Assignment: Imagine you are a teacher and have recently conducted an exam,
and you want to know the average grade.

To calculate the average you need to sum up all the grades that were achieved 
so you can divide that by the amount of students that took the exam. 
Grades in this exam range from 0 to 10, any other grade is invalid.

two double variables named sum and grade have been declared.

Write a loop that reads all of the grades as keyboard input (do not display a prompt),
and calculates the sum of all the grades entered. 
The loop should end when an invalid grade has been entered.
*/

void GradeSum() {

    double grade= 0.0;
    double sum = 0.0;

    while (grade >= 0.0 && grade <= 10.0) {
        cin >> grade;
        grade++;
    }
    cout << grade;
    
}

/*
Goal: Use loops to keep a total

Assignment: Assume an int variable named maxValue has been defined and assigned 
a value greater than 0. Also assume an int variable named sum has been defined 
but has not been assigned a value.

Write a code snippet that uses a loop to calculate the sum of all the integers 
from 1 through maxValue (inclusive). Store the sum in the sum variable.
*/

void SumOfIntegers() {

    int maxValue = 10;
    int sum= 0; 

    for (int i = 1; i <= maxValue; ++i) {
        sum += i;
    }
    cout << sum;
}

int main()
{
    //LibraryManagementSystem();
    //Simulation();
    //GradeSum();
    //SumOfIntegers();

    double grade = 0.0;
    double sum = 0.0;

    while (grade >= 0.0 && grade <= 10.0) {
        cin >> grade;
        grade++;
    }
    cout << grade;

    return 0;
}