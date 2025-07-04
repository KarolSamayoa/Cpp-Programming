#include <iostream>

using namespace std;

void getThreeValues(int&, int&, int&);
int addThreeValues(int, int, int);

int main() {

	int v1, v2, v3;

	getThreeValues(v1, v2, v3);

	cout << "The sum of those number is: "
		<< addThreeValues(v1, v2, v3) << endl; 
	cout << addThreeValues(v1, v2, v3) << endl; 

	return 0; 
}

void getThreeValues(int& num1, int& num2, int& num3) {
	cout << "Enter three integer values: ";
	cin >> num1 >> num2 >> num3;
}

int addThreeValues(int num1, int num2, int num3) {
	return num1 + num2 + num3;
}