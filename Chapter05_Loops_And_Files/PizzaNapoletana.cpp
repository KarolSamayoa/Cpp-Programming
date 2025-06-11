/*
Goal: Reading from text files

Assignment: You found a file named recipe.txt on your computer, 
which contains a recipe for Pizza Napoletana, and you decide that 
you would like to have one for dinner.

You need to find the ingredients in the recipe so 
you can make a grocery shopping list. To easily find the ingredients, 
you will write code that finds the first occurrence of the word "dough" 
and then prints its word position, or index, on the screen. 
For example, if "dough" is the 9th word in the file, your code should print 9.

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream inputFile;

	inputFile.open("recipe.txt");

	string ingredient; 
	int index = 0, position =0;


	while (inputFile >> ingredient) {
		index++;
		cout << index << " " << ingredient << endl;

		if (ingredient == "dough") {
			position = index;
		}		
	}

	cout << "position is: " << position;

	inputFile.close();

	return 0;
}