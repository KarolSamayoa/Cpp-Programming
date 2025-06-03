/*
==========================================
Program: Cable Bill Calculator

Description:
    This program calculates the total amount due for cable services
    based on the customer type (Residential or Business). The user
    is prompted to enter their account number, customer type, and
    additional information such as the number of premium channels
    and basic service connections (for business customers).

    Pricing Rules:
    - Residential Customers:
        - Processing Fee: $4.50
        - Basic Service Cost: $20.50
        - Premium Channel Cost: $7.50 per channel

    - Business Customers:
        - Processing Fee: $15.00
        - Basic Service Cost: $75.00
        - Basic Connection Cost: $5.00 per connection (after the first 10)
        - Premium Channel Cost: $50.00 per channel

Instructions:
    1. Enter the account number (as an integer).
    2. Enter the customer type: R or r (Residential), B or b (Business).
    3. Depending on customer type, provide:
       - Number of premium channels.
       - Number of basic service connections (Business only).
    4. The program will display the account number and total amount due.

==========================================
*/

#include <iostream>
#include <iomanip>

using namespace std;

//Named constants - residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 20.50;
const double RES_COST_PREM_CHANNEL = 7.50;

//Named constants - business customers
const double BUS_BILL_PROC_FEEES = 15.00;
const double BUS_BASIC_SERV_COST = 75.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 50.00;

int main() {

    //Variable declaration
    int accountNumber;
    char customerType;
    int numOfPremChannels;
    int numOfBasicServConn;
    double amountDue;

    cout << fixed << showpoint << setprecision(2);

    cout << "This program computes a cable bill.\n";
    cout << "Enter account number (an integer): ";
    cin >> accountNumber;
    cout << endl;

    cout << "Enter customer type: "
        << "R or r (Residential) "
        << "B or b (Business): ";
    cin >> customerType;
    cout << endl;

    switch (customerType) {
    case 'r':
    case 'R':
        cout << "Enter the number of premium channel: ";
        cin >> numOfPremChannels;
        cout << endl;

        amountDue = RES_BILL_PROC_FEES +
            RES_BASIC_SERV_COST +
            numOfPremChannels *
            RES_COST_PREM_CHANNEL;

        cout << "Account number: " << accountNumber;
        cout << endl;
        cout << "Amount due: $" << amountDue << endl;
        break;

    case 'b':
    case 'B':
        cout << "Enter the number of basic"
            << " service connections: ";
        cin >> numOfBasicServConn;
        cout << endl;

        cout << "Enter the number of premium channels: ";
        cin >> numOfPremChannels;
        cout << endl;

        if (numOfBasicServConn <= 10)
            amountDue = BUS_BILL_PROC_FEEES +
            BUS_BASIC_SERV_COST +
            numOfPremChannels *
            BUS_COST_PREM_CHANNEL;
        else
            amountDue = BUS_BILL_PROC_FEEES +
            BUS_BASIC_SERV_COST +
            (numOfBasicServConn - 10) *
            BUS_BASIC_CONN_COST +
            numOfPremChannels *
            BUS_COST_PREM_CHANNEL;

        cout << "Account number: " << accountNumber << endl;
        cout << "Amount due: $" << amountDue << endl;
        break;

    default:
        cout << "Invalid customer type." << endl;
    }

    return 0;
}
