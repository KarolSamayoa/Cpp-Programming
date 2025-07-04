/*
Goal: Using Driver functions.

Assignment: The program shown below has a function named calculateDiscountedPrice 
that accepts an item's original price and its discount rate as arguments. 
The function returns the discounted price of the item. 
For example, the following statement will calculate the discounted price 
of an item with an original price of $100 and a discount rate of 20 percent:

double result = calculateDiscountedPrice(100, 20);

Fill in the main function in the program below to test 
the calculateDiscountedPrice function in the following cases:

Test Case 1: Display the discounted price of an item with an original 
price of $100 and a discount rate of 50 percent.

Test Case 2: Display the discounted price of an item with an original 
price of $50 and a discount rate of 0 percent.

Test Case 3: Display the discounted price of an item with an original 
price of $100 and a discount rate of 100 percent.

Test Case 4: Display the discounted price of an item with an original 
price of $75 and a discount rate of 25 percent.

Your output should be as follows:

Test Case 1: Price after a 50% discount on $100 is $50
Test Case 2: Price after a 0% discount on $50 is $50
Test Case 3: Price after a 100% discount on $100 is $0
Test Case 4: Price after a 25% discount on $75 is $56.25

*/

#include <iostream>
using namespace std;

double calculateDiscountedPrice(double, double);

int main() {

    // Test Case 1: 50% discount on $100
    // Implement test case here
    cout << "Test Case 1: Price after a 50% discount on $100 is $"
         << calculateDiscountedPrice(100, 50);

    // Test Case 2: 0% discount on $50
    // Implement test case here
    cout << "\nTest Case 2: Price after a 0% discount on $50 is $"
        << calculateDiscountedPrice(50, 0);

    // Test Case 3: 100% discount on $100
    // Implement test case here
    cout << "\nTest Case 3: Price after a 100% discount on $100 is $"
        << calculateDiscountedPrice(100, 100);

    // Test Case 4: 25% discount on $75
    // Implement test case here
    cout << "\nTest Case 4: Price after a 25% discount on $75 is $"
        << calculateDiscountedPrice(75, 25);

	return 0; 
}

double calculateDiscountedPrice(double originalPrice, double discountRate)
{
	return originalPrice * (1 - discountRate / 100);
}