/*
Description:

This program displays a simple menu with three options:
   1. Say Hello
   2. Say Goodbye
   3. Exit
The program validates the user's input to ensure a valid menu choice is selected.
If an invalid option is entered, the user will hear a beep and be prompted again.
Once a valid option is selected, the program responds accordingly.
*/


#include <iostream>

using namespace std;

int main()
{
    int choice = 0;
    bool needChoice = true;

    /* do {
         cout << "\n\tMenu:\n";
         cout << "1. Say Hello\n";
         cout << "2. Say Goodbye\n";
         cout << "3. Exit" <<endl;
         cout << "Enter your choice: ";
         cin >> choice;

         switch(choice){
             case 1: cout << "Hello!" << endl;
             break;
             case 2: cout << "Goodbye!" << endl;
             break;
             case 3: cout << "Exiting..." << endl;
             break;
             default: cout << "Invalid choice." << endl;
         }

     } while(choice != 3);
     */


     // Start the menu loop - continues until a valid choice is made
    do {
        cout << "\n\tMenu:\n";
        cout << "1. Say Hello\n";
        cout << "2. Say Goodbye\n";
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: // Valid choice: Hello
        case 2: // Valid choice: Goodbye
        case 3: // Valid choice: Exit
            cout << "You choose " << choice << endl;
            needChoice = false; // Valid input received, exit loop
            break;

        default: // Invalid choice
            cout << "\aInvalid choice - re-enter.\n"; // Beep and message
            needChoice = true;
        }
    } while (needChoice);

    return 0;
}