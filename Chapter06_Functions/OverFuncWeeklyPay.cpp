#include <iostream>
#include <iomanip>

using namespace std;

void getChoice(char&);
double calcWeeklyPay(int, double);
double calcWeeklyPay(double);

int main() {

	char selection;
	int worked;
	double rate, yearly;

	cout << fixed << showpoint << setprecision(2);

	cout << "Do you want to calculate the weekly pay of\n";
	cout << "(H) an hourly employee, or \n";
	cout << "(S) a salaried employee?\n";
	getChoice(selection);

	switch (selection) 
	{
		case 'H':
		case 'h': cout << "How many hours were worked? ";
				  cin >> worked;
				  cout << "What is the hourly pay rate? ";
				  cin >> rate;
				  cout << "The gross weekly pay is $";
				  cout << calcWeeklyPay(worked, rate) << endl;
				  break;

		case 'S':
		case 's': cout << "What is the annual salary? ";
			      cin >> yearly;
				  cout << "The gross weekly pay is $";
				  cout << calcWeeklyPay(yearly) << endl; 
				  break;
	}

	return 0; 
}

void getChoice(char& letter) {
	cout << "Enter your choice (H or S): ";
	cin >> letter; 

	while (letter != 'H' && letter != 'h' &&
		letter != 'S' && letter != 's')
	{
		cout << "Please enter H or S: ";
		cin >> letter;
	}
}

double calcWeeklyPay(int hours, double payRate) {
	return hours * payRate; 
}

double calcWeeklyPay(double annSalary) {
	return annSalary / 52; 
}