/*
You are tasked with creating a program for a theater that is hosting a special charity event. 
For this event, a specific movie is shown, and the revenue from ticket sales is partially 
donated to a charitable organization.

The program should:

Prompt the user to enter:

The movie name
The price of an adult ticket
The price of a child ticket
The number of adult tickets sold
The number of child tickets sold
The percentage of the total revenue (gross amount) to be donated

Calculate:

The gross amount earned from ticket sales
The donation amount based on the percentage provided
The net sale amount (gross amount minus the donation)

Display a formatted report showing:

Movie name
Total number of tickets sold
Gross amount
Donation percentage
Donation amount
Net sale amount

Sample Run: 

Enter a movie name: Terminator Salvation

Enter the price of an adult ticket: 4.50

Enter the price of a child ticket: 3.00

Enter the number of adult tickets sold: 800

Enter the number of child tickets sold: 1850

Enter the percentage of donation: 10


-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
Movie Name: ....................... Terminator Salvation
Number of Tickets Sold: ...........      2650
Gross Amount: ..................... $ 9150.00
Percentage of Gross Amount Donated:     10.00%
Amount Donated: ................... $  915.00
Net Sale: ......................... $ 8235.00
*/

//Movie Ticket Sale and Donation Charity

#include <iostream> // For input/output operations
#include <iomanip> // For output formatting (setw, setfill, left, right, etc.)
#include <string>  // For using string variables

using namespace std;

int main(){

	// Declare variables
	string movieName;               // Name of the movie
	double adultTicketPrice;        // Price for one adult ticket
	double childTicketPrice;        // Price for one child ticket
	int noOfAdultTicketSold;        // Number of adult tickets sold
	int noOfChildTicketSold;        // Number of child tickets sold
	double percentageDonation;      // Percentage of gross amount to donate
	double grossAmount;             // Total revenue from ticket sales
	double amountDonated;           // Amount to be donated
	double netSaleAmount;           // Remaining amount after donation

	// Set output format to show 2 decimal places
	cout << fixed << showpoint << setprecision(2);

	// Prompt user for input
	cout << "Enter a movie name: ";
	getline(cin, movieName); 
	cout << endl; 

	cout << "Enter the price of an adult ticket: ";
	cin >> adultTicketPrice;
	cout << endl; 

	cout << "Enter the price of a child ticket: ";
	cin >> childTicketPrice;
	cout << endl;

	cout << "Enter the number of adult tickets "
		<< "sold: ";
	cin >> noOfAdultTicketSold;
	cout << endl;

	cout << "Enter the number of child tickets "
		<< "sold: ";
	cin >> noOfChildTicketSold;
	cout << endl;

	cout << "Enter the percentage of donation: ";
	cin >> percentageDonation;
	cout << endl << endl;

	// Calculate gross amount
	grossAmount = adultTicketPrice * noOfAdultTicketSold +
		childTicketPrice * noOfChildTicketSold; 

	// Calculate amount to be donated
	amountDonated = grossAmount * percentageDonation / 100;

	// Calculate net sale amount
	netSaleAmount = grossAmount - amountDonated;

	//Display Summary
	cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
		<< "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl; 

	cout << setfill('.') << left << setw(35) << "Movie Name: "
		<< right << " " << movieName << endl;

	cout << left << setw(35) << "Number of Tickets Sold: "
		<< setfill(' ') << right << setw(10)
		<< noOfAdultTicketSold + noOfChildTicketSold << endl; 

	cout << setfill('.') << left << setw(35)
		<< "Gross Amount: "
		<< setfill(' ') << right << " $"
		<< setw(8) << grossAmount << endl;

	cout << setfill('.') << left << setw(35)
		<< "Percentage of Gross Amount Donated: "
		<< setfill(' ') << right << setw(9)
		<< percentageDonation << '%' << endl;

	cout << setfill('.') << left << setw(35)
		<< "Amount Donated: " << setfill(' ')
		<< right << " $" << setw(8) << amountDonated << endl; 

	cout << setfill('.') << left << setw(35)
		<< "Net Sale: " << setfill(' ') << right << " $"
		<< setw(8) << netSaleAmount << endl;

	return 0; 
}