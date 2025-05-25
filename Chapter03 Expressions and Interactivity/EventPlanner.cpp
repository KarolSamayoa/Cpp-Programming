/*
Goal: Utilizing variables and data types to store user inputs. 
Implementing input/output operations for interaction with the user. 
Using string concatenation and formatting.

Assignment: You are developing a program for a virtual event planning service.
The program will ask users to input details about an event they are planning 
and then output a summarized plan based on their input.

The user should provide the following inputs

Their name.
The type of event they are planning (e.g., birthday party, wedding, conference).
The location of the event.
The number of guests expected.
The main theme or color scheme of the event.
The name of a key guest or speaker.

After collecting the inputs, the program should create an event summary.
Note that some of the input might contain multiple words, 
so retrieve them accordingly. The summary should include all the user's inputs,
formatted coherently and readable.

Sample Run with user input inside <>

Please enter your name:
<Karina Novak>
Please enter the type of event you are planning:
<birthday party>
Please enter the location of the event:
<the Ritz Hotel>
Please enter the main theme or color scheme of the event:
<purple>
Please enter the name of a key guest or speaker.
<Professor Martinez>
Please enter the number of guests expected:
<200>
Hello Karina Novak!
Your birthday party is all set to happen at the Ritz Hotel.
You can expect around 200 guests to join the celebration.
The event will be adorned with a purple theme, making it a memorable day.
Special guest Professor Martinez will be the highlight of the event.
We are looking forward to helping you make your event successful!

*/



#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <random>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

	string name = "",
		eventType = "",
		location = "",
		color = "",
		guestName = "";

	int numberOfGuest; 

	cout << "Please enter your name:" << endl;
	getline(cin, name);

	cout << "Please enter the type of event you are planning:" << endl;
	getline(cin, eventType);

	cout << "Please enter the location of the event:" << endl;
	getline(cin, location);

	cout << "Please enter the main theme or color scheme of the event:" << endl;
	getline(cin, color);

	cout << "Please enter the name of a key guest or speaker." << endl;
	getline(cin, guestName);

	cout << "Please enter the number of guests expected:" << endl;
	cin >> numberOfGuest;

	cout << "Hello " << name << "!" << endl;
	cout << "Your " << eventType << " is all set to happen at " << location << ".";
	cout << "\nYou can expect around " << numberOfGuest << " guests to join the celebration."; 
	cout << "\nThe event will be adorned with a " << color << " theme, making it a memorable day.\n";
	cout << "Special guest " << guestName << " will be the highlight of the event.\n";
	cout << "We are looking forward to helping you make your event successful!";	

	return 0;
}