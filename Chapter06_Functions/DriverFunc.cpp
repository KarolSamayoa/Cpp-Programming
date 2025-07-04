#include <iostream>

using namespace std;

void showFees(double, int);

int main() {

	const double ADULT = 40.0;
	const double SENIOR = 30.0;
	const double CHILD = 20.0;

	cout << "Testing an adult membership...\n"
		<< "Calling the showFees function with arguments "
		<< ADULT << " and 10.\n";
	showFees(ADULT, 10);

	cout << "\nTesting an senior membership...\n"
		<< "Calling the showFees function with arguments "
		<< SENIOR << " and 10.\n";
	showFees(SENIOR, 10);

	cout << "\nTesting an child membership...\n"
		<< "Calling the showFees function with arguments "
		<< CHILD << " and 10.\n";
	showFees(CHILD, 10);

	return 0;
}

void showFees(double memberRate, int months) {
	cout << "The total charges are $"
		<< (memberRate * months) << endl; 
}