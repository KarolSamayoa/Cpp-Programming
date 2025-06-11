#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

void WriteToFile() {

	ofstream outputfile; 
	outputfile.open("demofile.txt");

	cout << "Now writing data to the file.\n";

	//write four names to the file.
	outputfile << "Bach\n";
	outputfile << "Beethoven\n";
	outputfile << "Mozart\n";
	outputfile << "Schubert\n";
	outputfile << "Karol\n";
	outputfile << "Albert\n";
	outputfile << "Goku\n";
	outputfile << "Vegeta\n";

	//close the file 
	outputfile.close();
	cout << "Done." << endl; 
}

void Numbers() {
	ofstream of;
	int number1, number2, number3;

	of.open("Numbers.txt");
	cout << "Enter a number: ";
	cin >> number1;
	cout << "Enter another number: ";
	cin >> number2;
	cout << "One more time. Enter a number: ";
	cin >> number3; 

	//write the numbers to the file.

	of << number1 << endl;
	of << number2 << endl;
	of << number3 << endl;
	cout << "The numbers were saved to a file.\n";

	//Close the file
	of.close();
	cout << "Done.\n";
}

void Friends() {

	ofstream of;
	string name1, name2, name3;

	of.open("Friends.txt");

	cout << "Enter the names of 3 friends.\n";
	cout << "Friend #1: ";
	cin >> name1;
	cout << "Friend #2: ";
	cin >> name2;
	cout << "Friend #3: ";
	cin >> name3;

	of << name1 << endl;
	of << name2 << endl;
	of << name3 << endl;
	cout << "The names were saved to a file.\n";

	of.close();

}

//Reading Data from File

void ReadingData(){
	
	//FIle stream object
	ifstream inputFile;

	//Open the file named demofile.txt
	inputFile.open("demofile.txt"); 

	string name; 
	cout << "These are the names from the file: \n";

	while (inputFile >> name) {
		cout << name << endl;
	}

	inputFile.close();
}

//Reading numeric Data from a text file
void RadingNumeric() {

	ifstream inFile;
	int value1, value2, value3, sum;

	inFile.open("Numbers.txt");

	inFile >> value1;
	inFile >> value2;
	inFile >> value3;

	inFile.close();

	sum = value1 + value2 + value3;

	cout << "Here are the numbers: " << endl;
	cout << value1 << " " << value2 << " " << value3 << endl;

	cout << "The sum of all three numbers is: " << sum << endl; 
}

//Using Loops to process files

void Sales() {

	ofstream outputFile; //File stream object 

	int numberOfDays;
	double sales; 

	cout << "For how many days do you have sales? ";
	cin >> numberOfDays;

	outputFile.open("Sales.txt");

	for (int count = 1; count <= numberOfDays; count++) {
		cout << "Enter the sales for day " << count << ": ";
		cin >> sales; 

		//write the sales to the file
		outputFile << sales << endl;
	}

	outputFile.close();
	cout << "Data written to Sales.txt\n";

}

//Testing for File Open Error

void FileTest() {
	ifstream inputFile;

	int number; 

	inputFile.open("ListOfNumbers.txt");

	if (inputFile) {

		while (inputFile >> number) {
			cout << number << endl;
		}
		inputFile.close();
	}
	else {
		cout << "Error opening the file.\n";
	}
}

//Recipe
/*
You want the ability to type a recipe in the console and save it to a file.
Write code that reads lines of input from the keyboard and writes them 
to a file named recipe.txt. The program should stop reading input 
when the user enters the word "stop".
*/

void Recipe() {

	ofstream of;

	of.open("recipe.txt");


	string ingredient;

	while (true) {
		getline(cin, ingredient);
		if (ingredient == "stop") {
			break;
		}
		else {
			of << ingredient << endl;
		}

	}
	of.close();
}

int main() {

	//WriteToFile();
	//Numbers();
	//Friends();
	//ReadingData();
	//RadingNumeric();
	//Sales();
	FileTest();

	return 0;
}