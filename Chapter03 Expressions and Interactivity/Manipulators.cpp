#include <iostream> // For input/output operations
#include <iomanip> // For output formatting (setw, setfill, left, right, etc.)
#include <string> // For using string variables


using namespace std;

int main(){

	// Declare and initialize two integers
	int x = 15, y = 7634;

	cout << left;  // Align output to the left

	// Print a guide ruler to visualize field widths
	cout << "12345678901234567890" << endl;

	// Print x, y, and the string "Warm" using field widths of 5, 7, and 8
	cout << setw(5) << x << setw(7) << y
		 << setw(8) << "Warm" << endl; 

	cout << setfill('*');  // Change the fill character to '*'


	cout << setw(5) << x << setw(7) << y
		<< setw(8) << "Warm" << endl;

	// Set the fill character to '#' just before printing `y`
	cout << setw(5) << x << setw(7) << setfill('#')
		<< y << setw(8) <<"Warm" << endl;

	// Set different fill characters for each field
	cout << setw(5) << setfill('@') << x
		<< setw(7) << setfill('#') << y
		<< setw(8) << setfill('^') << "Warm"
		<< endl;

	cout << right;// Align output to the right
	cout << setfill('-'); // Set the fill character to '-'

	// Print x, y, and "Warm" again with right alignment and '-' padding
	cout << setw(5) << x << setw(7) << y << setw(8) << "Warm"
		<< endl; 

	return 0; 
}