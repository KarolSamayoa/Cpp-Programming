
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

void loanQualifier() {

    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;

    double income; 
    int years;

    cout << "What is your annual income? ";
    cin >> income; 

    cout << "How many years have you worked "
        << "at your current job? ";
    cin >> years;

    if (income >= MIN_INCOME || years > MIN_YEARS)
        cout << "You qualify." << endl;
    else
    {
        cout << "You must earn at least $"
            << MIN_INCOME << " or have been"
            << " employed mora than " << MIN_YEARS
            << " years.\n";
    }

}

void Menu() {
    
    int choice;
    int months;
    double charges;

    //Constants for membership rates
    const double ADULT = 40.0,
        SENIOR = 30.0,
        CHILD = 20.0;

    //Constants for menu choices
    const int ADULT_CHOICE = 1,
        CHILD_CHOICE = 2,
        SENIOR_CHOICE = 3,
        QUIT_CHOICE = 4; 

    //Display the menue and get a choice
    cout << "\t\tHealth Club Membership Menu\n\n"
        << "1. Standar Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
    cin >> choice; 

    //Set the numeric output formatting
    cout << fixed << showpoint << setprecision(2); 

    //Responde the user's menu selection
    if (choice == ADULT_CHOICE) {
        cout << "For how many months? ";
        cin >> months;
        charges = months * ADULT;
        cout << "The total charges are $" << charges << endl; 
    } 
    else if (choice == CHILD_CHOICE) {
        cout << "For how many months? ";
        cin >> months;
        charges = months * CHILD;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == SENIOR_CHOICE) {
        cout << "For how many months? ";
        cin >> months;
        charges = months * SENIOR;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == QUIT_CHOICE) {
        cout << "program ending.\n";
    }
    else {
        cout << "The valid choices are 1 -4. Run the \n"
            << "program again and select one of those.\n";
    }
}

void TestScore(){
    const int A_SCORE = 90,
        B_SCORE = 80,
        C_SCORE = 70,
        D_SCORE = 60,
        MIN_SCORE = 0,
        MAX_SCORE = 100; 
    
    int  testScore; 

    cout << "Enter your numberic score and I will\n"
        << "tell you the letter grade you earned: ";
    cin >> testScore;

    //Validate the input and determine the grade.
    if (testScore >= MIN_SCORE && testScore <= MAX_SCORE) {
        //Determine the letter grade
        if (testScore >= A_SCORE)
            cout << "Your grade is A.\n";
        else if (testScore >= B_SCORE)
            cout << "Your grade is B.\n";
        else if (testScore >= C_SCORE)
            cout << "Your grade is C.\n";
        else if (testScore >= D_SCORE)
            cout << "Your grade is D.\n";
        else
            cout << "Your Grade is F.\n";
    }
    else {
        //An invalid score was entered.
        cout << "That is an invalid score. Run the program\n"
            << "again and enter an value in the range of\n"
            << MIN_SCORE << " through " << MAX_SCORE << ".\n";
    }

}

//Program: BookArrival
/*
Assignment: You are developing a program for the local library to track new book arrivals. 
Your task is to write a complete C++ program that prompts the user to enter the number
of new fiction books, and then the number of new nonfiction books.

If the user enters a value less than 0 for either input, 
your program should display the message "Your input is invalid!".
Otherwise, your program should display the total number of new books 
in the following message: "Total number of new books: X", where X is the total.

The following sample run shows an example of your program’s output when valid input is given.

Sample Run

Enter the new fiction books: <20>
Enter the new nonfiction books: <12>
Total number of new books: 32

Sample Run
Enter the new fiction books: <-1>
Enter the new nonfiction books: <22>
Your input is invalid!

*/

void BookArrival() {

    int fictionBooks;
    int nonFictionBooks;
    int totalBooks; 

    cout << "Enter the new fiction books: ";
    cin >> fictionBooks;

    cout << "Enter the new nonfiction books: ";
    cin >> nonFictionBooks;

    if (fictionBooks >= 0 && nonFictionBooks >= 0) {
        totalBooks = fictionBooks + nonFictionBooks;
        cout << "Total number of new books: " << totalBooks << endl;
    }
    else {
        cout << "Your input is invalid!" << endl;
    }

}

//Comparing Characters

void ComparingChar() {
    char ch;

    cout << "Enter a digit or a letter: ";
    ch = cin.get();

    //Determin that the user entered.
    if (ch >= '0' && ch <= '9')
        cout << "You enter a digit. \n";
    else if (ch >= 'A' && ch <= 'Z')
        cout << "You enter an uppercase letter.\n";
    else if (ch >= 'a' && ch <= 'z')
        cout << "You enter a lowercase letter.\n";
    else
        cout << "That is not a digit or letter.\n";
}

//Comparing strings

void CompareString() {
    
    const double PRICE_A = 249.0,
        PRICE_B = 199.0;

    string partNum;

    cout << "The headphone part numbers are: \n"
        << "Noice canceling: part S-29A \n"
        << "Wireless: part number S-29B \n"
        << "Enter the part number of the headphones you \n"
        << "wish to purchase: "; 
    cin >> partNum;

    //set the numeric output formatting
    cout << fixed << showpoint << setprecision(2);

    //determine and display the correct price. 
    if (partNum == "S-29A")
        cout << "The price is $" << PRICE_A << endl;
    else if (partNum == "S-29B")
        cout << "The price is $" << PRICE_B << endl;
    else
        cout << partNum << " is not valid part number.\n";
}

void CalcPayRate() {

    const double PAY_RATE = 50.0;
    const int MIN_HOURS = 5;
    double hours, charges; 

    cout << "How many hours were worked? ";
    cin >> hours; 

    //Determine the hours to charge
    hours = hours < MIN_HOURS ? MIN_HOURS : hours;

    //calculate and display the charges
    charges = PAY_RATE * hours; 

    cout << fixed << showpoint << setprecision(2);

    cout << "The charges are $" << charges << endl;

}

void SwitchTest(){

    int modelNum;

    cout << "Our TVs come in three models: \n";
    cout << "The 100, 200, 300. Which one do you want? ";
    cin >> modelNum;

    cout << endl << "\t\tThe model has the following features: \n";
    switch (modelNum) 
    {
        case 300: cout << "\tPicture-in-a-picture.\n";
            break;
        case 200: cout << "\tStereo Sound.\n";
            break;
        case 100: cout << "\tRemote Control.\n";
            break; 
        default: cout << "You can only choose the 100, ";
            cout << "200, or 300.\n";
    }
}

void MenuUsingSwitch() {

    int choice;
    int months;
    double charges;

    //Constants for membership rates
    const double ADULT = 40.0,
        SENIOR = 30.0,
        CHILD = 20.0;

    //Constants for menu choices
    const int ADULT_CHOICE = 1,
        CHILD_CHOICE = 2,
        SENIOR_CHOICE = 3,
        QUIT_CHOICE = 4;

    //Display the menue and get a choice
    cout << "\t\tHealth Club Membership Menu\n\n"
        << "1. Standar Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
    cin >> choice;

    cout << fixed << showpoint << setprecision(2);

    switch (choice) 
    {
        case ADULT_CHOICE:
            cout << "For how many months? ";
            cin >> months;
            charges = months * ADULT;
            cout << "The total charges are $" << charges << endl;
            break;

        case CHILD_CHOICE:
            cout << "For how many months? ";
            cin >> months;
            charges = months * CHILD;
            cout << "The total charges are $" << charges << endl;
            break;

        case SENIOR_CHOICE:
            cout << "For how many months? ";
            cin >> months;
            charges = months * SENIOR;
            cout << "The total charges are $" << charges << endl;
            break;

        case QUIT_CHOICE:
            cout << "Program ending.\n";
            break;

        default:
            cout << "The valid choices are 1 - 4. Run the \n"
                << "program again and select one of those.\n";
    }
}

int main()
{
    
    //loanQualifier();
    //Menu();
    //TestScore();
    //BookArrival();
    //ComparingChar();
    //CompareString();
    //CalcPayRate();
    //SwitchTest();
    MenuUsingSwitch();

    return 0;
}


