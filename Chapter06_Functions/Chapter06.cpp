
#include <iostream>
#include <iomanip>

using namespace std;

//Functions prototype

void showDollars(double);  //This function is part of Salary Calculator. 
void SalaryCalculator();


void showMercuryFacts(); //This function is part of PlanetFacts function.
void showVenusFacts();   //This function is part of PlanetFacts function.
void showEarthFacts();  //This function is part of PlanetFacts function.
void PlanetsFacts();  


//The return statement
void divide(double, double);  //This fuction is part of ReturnStatement function.
void ReturnStatement();


int main()
{
    //SalaryCalculator(); 
    //PlanetsFacts();
    ReturnStatement();

    return 0; 
}

void SalaryCalculator() {

    double payRate, hoursWorked, wages;

    cout << "How many hours have you worked? ";
    cin >> hoursWorked;

    cout << " What is your hourly pay rate? ";
    cin >> payRate;

    wages = hoursWorked * payRate;
    showDollars(wages);
}


void showDollars(double dollars) {
    cout << fixed << showpoint << setprecision(2);
    cout << "Your wages are $" << dollars << endl; 
}

void PlanetsFacts() {

    int selection;

    do {
        cout << "\tPlanetary Facts\n";
        cout << "1. Mercury\n";
        cout << "2. Venus\n";
        cout << "3. Earth\n";
        cout << "4. Quit\n\n";

        cout << "Enter your selection: ";
        cin >> selection;

        while (selection != 1 && selection != 2
            && selection != 3 && selection != 4) 
        {
            cout << "\nEnter your selection (1-4): ";
            cin >> selection;
        }

        switch (selection) {
        case 1:
            showMercuryFacts();
            break;

        case 2:
            showVenusFacts();
            break;

        case 3:
            showEarthFacts();
            break;
        }
    } while (selection != 4);
}

void showMercuryFacts() {
    cout << "\nMercury Facts\n";
    cout << "Distance from the Sun: 35,980,000 miles\n";
    cout << "Length of a day: 1,408 hours\n\n";
}


void showVenusFacts()
{
    cout << "\nVenus Facts\n";
    cout << "Distance from the Sun: 67,240,000 miles\n";
    cout << "Length od a day: 5,832 hours\n\n ";
}

void showEarthFacts() {
    cout << "\nEarth Facts\n";
    cout << "Distance from the Sun: 92,900,000 miles\n";
    cout << "Length of a day: 24 hours\n\n";
}

void ReturnStatement() {

    double num1, num2;

    cout << "Enter two numbers and I will divede "
        << "the first number by the second number: ";
    cin >> num1 >> num2;
    divide(num1, num2);
}

void divide(double arg1, double arg2) {
    if (arg2 == 0) {
        cout << "Sorry, I cannot divide by zero.\n";
        return;
    }
    cout << "The quotient is " << (arg1 / arg2) << endl;
}