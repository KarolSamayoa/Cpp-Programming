
/*
Goal: Use files to retrieve data.

Assignment: Imagine you're a junior meteorologist tasked with analyzing historical weather data.
You have a file named "WeatherData.txt", 
containing a list of daily average temperatures (in Celsius) for a year. 
The file contains 30 readings for each month, for a total of 360. 
Each reading is on a separate line in the file.

Write a complete C++ program that reads the contents of the file and computes the following:

The yearly average temperature
The hottest day of the year
The coldest day of the year

Sample Output

Average yearly temperature: 15.3
Day 182 was the hottest, with a temperature of 31.3 degrees Celsius.
Day 359 was the coldest, with a temperature of -2.62 degrees Celsius.

Note: For this project, you will need to write a Complete C++ program with a main function, 
the inclusion of any header files needed, etc. 
When outputting floating point values, use setprecision(3), 
for which you will need the <iomanip> header.

*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	ifstream inputFile;

	inputFile.open("WeatherData.txt");

	double totalYearTemp =0.0; 
	double averageYearlyTemp = 0.0;
	double dailyTemp; 

	int daysInYear = 360, hottestDay, coldestDay; 
	int index = 1; 

	double maxTemp = 0.0, minTemp = 0.0;
	int maxDayTemp = 0, minDayTemp = 0; 

	 

	while (inputFile >> dailyTemp && index  <= daysInYear) {
		//cout << index << " " << dailyTemp <<  endl;
		index++;
		totalYearTemp += dailyTemp; 

		if (dailyTemp > maxTemp) {
			maxTemp = dailyTemp;
			maxDayTemp = (index -1); 
		}

		if (dailyTemp < minTemp) {
			minTemp = dailyTemp;
			minDayTemp = (index-1); 
		}
	}

	averageYearlyTemp = (totalYearTemp / daysInYear);

	cout << "Average yearly temperature: " << setprecision(3) << averageYearlyTemp << endl;
	cout << "Day " << maxDayTemp << " was the hottest, with "
		<< "a temperature of " << maxTemp << " degrees Celsius.\n";
	cout << "Day " << setprecision(3) << minDayTemp << " was the coldest, with "
		<< "a temperature of " <<setprecision(3) << minTemp << " degrees Celsius.\n";
	 

	inputFile.close();

	return 0;
}