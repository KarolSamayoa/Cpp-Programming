/*
Quiz 5.11 
Number 6

Goal: Handling files

Assignment:
You have stored your yearly revenue in multiple files corresponding to different months. 
January's data in january.txt, February's in february.txt, and so on. 
The data for some of the months has gone missing, though, and you want to find out which ones.

Write a code snippet that reads the name of a file as input from the console 
(do not prompt the user, simply read the filename). 
If the file does not exist, print "missing" to the console and read the next filename. 
If the file exists, do not print a message, but read the next filename. 
Continue reading filenames until the user enters "stop".

Note: Assume the fstream and iostream header files have been included.

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    string filename;

    while (true) {
        cin >> filename;

        if (filename == "stop") {
            break;
        }

        ifstream inputFile(filename);
        if (!inputFile) {
            cout << "missing" << endl;
        }

        inputFile.close();
    }

	return 0;
}