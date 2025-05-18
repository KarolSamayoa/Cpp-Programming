#include <iostream>
#include <string>
using namespace std;

void programmingIsFun() {
    cout << "Programming is fun!";
}

// This function named wellAdjusted outputs a list of top-selling 
// items for the month of June.
// It uses multiple cout statements to print each line of text to the console.
void wellAdjusted() {
    cout << "The following items were top sellers" << endl;
    cout << "during the month of June: " << endl;
    cout << "Computer Games" << endl;
    cout << "Coffee" << endl;
    cout << "Aspirin" << endl;
}

void wellAdjustedTwo() {
    cout << "2\nThe following items were top sellers\n";
    cout << "during the month of June:\n";
    cout << "Computer games\nCooffee";
    cout << "\nAspirin";
}

//This function demonstrates a raw string
void rawString() {
    cout << "Here is the raw string: " << endl;
    cout << R"(One\nTwo\nThree)" << endl << endl;
    cout << "Here is the regular string:  " << endl;
    cout << "One\nTwp\nThree" << endl;
}

//Variables

void variable() {

    int number; 
    number = 5;

    cout << "The value in number is " << number << endl;

    //This is not the same as
    cout << "The value in number is " << "number" << endl;
}

//Literals

void lite() {
    
    int apples;
    apples = 20;

    cout << "Today we sold " << apples << " bushels of apples.\n";
}

//Integer Data Types

void intDataTypes() {
    int checking;
    unsigned int miles;
    long diameter;

    checking = -20;
    miles = 4276;
    diameter = 100000;

    cout << "We have a long journey of " << miles;
    cout << " miles. \n";
    cout << "Our checking balance is " << checking;
    cout << "\nThe galaxy is about " << diameter;
    cout << " light years in diameter. \n";

}

void intDataTypesTwo() {
    int floors, rooms, suites;

    floors = 15;
    rooms = 300;
    suites = 30;

    cout << "The Grande Hotel has " << floors << " floors\n";
    cout << " with " << rooms << " rooms and " << suites; 
    cout << " suites.\n";
}

//Characters

void characters() {
    char letter;

    letter = 'A';
    cout << letter << endl; 
    letter = 'B';
    cout << letter << endl;
}

void characterTwo() {

    char letter;

    letter = 65;
    cout << letter << endl;
    letter = 66;
    cout << letter << endl;
}


//The String class

void stringClass() {
    string movieTitle;

    movieTitle = "Terminator";

    cout << "My favorite movie is " << movieTitle << endl;
}

//Floating-point Data types

void FloatingPDT() {
    
    float distance;
    double mass;

    distance = 1.495979E11;
    mass = 1.989E30;

    cout << "The Sun is " << distance << " meters aways.\n";
    cout << "The Sun\'s mass is " << mass << " kilorams.\n";
}

//Boolean Variables

void booleanVar() {

    bool boolValue;

    boolValue = true; 
    cout << boolValue << endl;
    boolValue = false;
    cout << boolValue << endl;
}

//Size of DataType
void sizeDataType(){

    long double apple;

    cout << "The size of an integer is " << sizeof(int);
    cout << " bytes.\n";
    cout << "The size of a long integer is " << sizeof(long);
    cout << " bytes.\n";
    cout << "An apple can be eaten in " << sizeof(apple);
    cout << " bytes!\n";
}

void VarInitilization() {
    int month = 2, days = 28;

    cout << "Month " << month << " has " << days << " days.\n";
}

//Calculating hourly wages, including overtime
void wageCalculator() {

    double regularWages,
        basePayRate = 18.25,
        regularHours = 40.0,
        overtimeWages,
        overtimePayRate = 27.78,
        overTimeHours = 10,
        totalWages; 

    //calculate the regular wages
    regularWages = basePayRate * regularHours; 

    //calculate the overtime wages
    overtimeWages = overtimePayRate * overTimeHours;

    //Calculate the total wages. 
    totalWages = regularWages + overtimeWages;

    //display the total wages
    cout << "Wages for this week are $" << totalWages << endl;
}

//Calculating percentages and discounts

void PercentageDiscount() {

    double montlyPay = 6000.0, contribution; 

    //calculate and display 5% contribution
    contribution = montlyPay * 0.05;
    cout << "5 percent is " << contribution << " per month.\n";

    //calculate and display 7% contribution
    contribution = montlyPay * 0.07;
    cout << "7 percent is " << contribution << " per month.\n";

    //calculate and display 10% contribution
    contribution = montlyPay * 0.1;
    cout << "10 percent is " << contribution << " per month.\n";
}

//Calculating the sales price of an item.
void SalesPrice() {

    double regularPrice = 59.95, discount, salePrice;

    //Calculate the amount of a 20% discount
    discount = regularPrice * 0.2; 

    //Calculate the sale price by substracting the 
    //discount  from the regular price. 
    salePrice = regularPrice - discount; 

    //Display the results
    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << salePrice << endl; 
}

//Using the Modulus Operator and Integer Division
void ModulusOperator() {
    int totalSeconds = 125, minutes, seconds; 

    //Get the number of minutes
    minutes = totalSeconds / 60;

    //get the remaining seconds
    seconds = totalSeconds % 60;

    //Display the results
    cout << totalSeconds << " seconds is equivalent to: \n";
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl; 
}

//Named Constants
void CircumferenceOfCircle() {
    //constants 
    const double PI = 3.14159; 
    const double DIAMETER = 10.0;

    //variable to hold the circumference
    double circumference; 

    //calculate the circumference. 
    circumference = PI * DIAMETER; 

    //Display the circumference
    cout << "The circumference is: " << circumference << endl;
}

int main()
{
    //programmingIsFun();
    //wellAdjusted();
    //wellAdjustedTwo();
    //rawString();
    //variable();
    //lite();
    //intDataTypes();
    //intDataTypesTwo();
    //characters();
    //characterTwo();
    //ringClass();
    //oatingPDT();
    //booleanVar();
    //sizeDataType();
    //VarInitilization();
    //wageCalculator();
    //PercentageDiscount();
    //SalesPrice();
    //ModulusOperator();
    //CircumferenceOfCircle();

    return 0;
}

