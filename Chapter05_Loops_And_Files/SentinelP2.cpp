/*
Goal: Use a sentinel value to exit a loop

Assignment: Imagine you're developing an app for a chef. 
Write a code snippet that uses a loop to read ingredient names as strings from the console, 
one at a time. Count how many times "onion" is entered. 
Your code should stop reading input when the sentinel value "pepper" is entered. 
After the loop terminates, calculate and display the total weight of the onions, w
here each onion weighs 50 grams.

Make sure your code's output matches the format of the sample run below. 
In the sample run, the user entered "onion" two times, 
so the total weight of the onions is 100 grams.

Sample Run with User Input Shown in <>

Enter ingredient: <wheat flour>
Enter ingredient: <tomato>
Enter ingredient: <mozzarella>
Enter ingredient: <onion>
Enter ingredient: <tuna>
Enter ingredient: <olives>
Enter ingredient: <onion>
Enter ingredient: <pepper>
Total weight of onions: 100 grams

*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	string ingredient = ""; 
	int Weight = 50;

	cout << "Enter ingredient: ";
	cin >> ingredient;

	while (ingredient != "pepper") {
		cout << "Enter ingredient: ";
		cin >> ingredient; 
		if (ingredient == "onion") {			
			Weight += 50;
		}
	}

	cout << "Total weight of onions: " << Weight << " grams" << endl;

	return 0; 
}