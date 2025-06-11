
#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

void UnaryOperators() {

    int num = 4;

    cout << "The variable num is " << num << endl << endl;

    cout << "I will now increment num. \n";

    //Use postfix ++ to increment num
    num++;
    cout << " now the variale num is " << num << endl;

    //use prefix ++ to increment num
    cout << "\nI will increment num again. " << endl;
    ++num;
    cout << "Now the variable num is " << num << endl;


    //use postfix -- to decrement num    
    cout << "\nI will decrement num.\n";
    num--;
    cout << "now the variale num is " << num << endl;

    //use pretfix -- to decrement num  
    cout << "\nI will decrement num again.\n";
    --num; 
    cout << "Now the variable num is " << num << endl;

}

//The while loop

void TemperatureChek() {

    const double MAX_TEMP = 102.5;
    double temperature; 

    cout << "Enter the substance's Celsius temperature: ";
    cin >> temperature;

    while (temperature > MAX_TEMP) {
        cout << "The temperature is too high. Turn the\n";
        cout << "thermostat down and wait 5 minutes.\n";
        cout << "Then take the celcius temperature again\n";
        cout << "and enter it here: ";
        cin >> temperature;
    }

    cout << "The temperature is acceptable." << endl;
    cout << "Check it again in 15 minutes.\n";
}

void CalculatNumberPlayers() {

    const int MIN_PLAYERS = 9,
        MAX_PLAYERS = 15; 

    int players, teamPlayers, numTeams, leftOvers; 

    cout << "How many players do you wish per team? ";
    cin >> teamPlayers;

    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS) {
        cout << "You sould have at least " << MIN_PLAYERS <<
            " but no more than " << MAX_PLAYERS << " per team." << endl;

        cout << "How many players do you wish per team? ";
        cin >> teamPlayers;
    }

    cout << "How many players are available? ";
    cin >> players; 

    while (players <= 0) {
        cout << "Please enter 0 or greater: ";
        cin >> players; 
    }

    //Calculate the number of teams. 
    numTeams = players / teamPlayers;

    //calculate the number of leftover players
    leftOvers = players % teamPlayers;

    cout << "There will be " << numTeams << " teams with "
        << leftOvers << " players left over.\n";

}

void PuzzleGame() {

    //const int CODE = 1234;

    int secretCode = 1234;
    int number;

    cin >> number;

    while (number != secretCode ) {
        cout << "Wrong code" << endl;
        cin >> number;
    }

    cout << "Correct!" << endl; 
}

//counters
void Counters() {
    const int MIN_NUMBER = 1,
        MAX_NUMBER = 10;

    int num = MIN_NUMBER;

    cout << "Number\tNumber Squared\n";
    cout << "----------------------\n";
    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << (num * num) << endl;
        num++;
    }
}

//The do-while loop
void AverageScore() {

    int score1, score2, score3; 
    double average; 
    char again; 

    do {
        cout << "Enter 3 scores and I will average them: ";
        cin >> score1 >> score2 >> score3; 

        average = (score1 + score2 + score3) / 3.0;
        cout << "The average is " << average << endl; 

        cout << "\nDo you want to average another set? (Y/N) ";
        cin >> again; 
    } while (again == 'Y' || again == 'y');
}

//The do while loop with menus

void Menus() {
    const int ADULT_CHOICE = 1,
        CHILD_CHOICE = 2,
        SENIOR_CHOICE = 3,
        QUIT_CHOICE = 4;

    const double ADULT = 40.0,
        CHILD = 20.0,
        SENIOR = 30; 

    int choice;
    int months; 
    double charges; 

    cout << fixed << showpoint << setprecision(2);

    do {
        cout << "\n\t\tHealth Club Membership Menu\n\n"
            << "1. Standard Adult Membership\n "
            << "2. Child Membership\n"
            << "3. Senior Citizen Membership\n"
            << "4. Quit the program\n\n"
            << "Enter your choice: ";
        cin >> choice;

        while (choice < ADULT_CHOICE || choice > QUIT_CHOICE) {
            cout << "Please enter a valid menu choice: ";
            cin >> choice;
        }

        if (choice != QUIT_CHOICE) {
            cout << "For how many months? ";
            cin >> months;

            switch (choice) {
                case ADULT_CHOICE:
                    charges = months * ADULT;
                    break;
                case CHILD_CHOICE:
                    charges = months * CHILD;
                    break;
                case SENIOR_CHOICE:
                    charges = months * SENIOR;
            }

            cout << "The total charges are $" << charges << endl;
        } 
    } while (choice != QUIT_CHOICE);
}

//The for loop

void SalesTotal() {

    int days;
    double total = 0.0;

    cout << "For how many days do you have sales amounts? ";
    cin >> days;

    for (int count = 1; count <= days; count++) {

        double sales;
        cout << "Enter the sales for day " << count << ": ";
        cin >> sales;
        total += sales;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "\nThe total sales are $" << total << endl;
}

void RunningTotal() {
    int numbers = 5;
    int sum = 0;

    for (int count = 1; count <= numbers; count++) {
        int number; 

        cout << "Enter a value for number " << count << ": ";
        cin >> number; 

        sum += number; 
    }

    cout << "The sum of all the numbers is " << sum << endl;
}


//Sentines 

void GamePoints() {

    int game = 1, points, total = 0;

    cout << "Enter the number of points your team has earned\n";
    cout << "so far in the season, then enter -1 when finished.\n\n";
    cout << "Enter the points for game " << game << ": ";
    cin >> points; 

    while (points != -1) {
        total += points; 
        game++;
        cout << "Enter the points for game " << game << ": ";
        cin >> points;
    }

    cout << "\nThe total points are " << total << endl; 
}

void CaloriesBurned() {

    int exercise = 1, calories, total = 0;

    cout << "Enter the number of calories you have burned\n";
    cout << "during each exercise so far at the gym.\n";
    cout << "Enter any negative number when finished.\n\n";

    cout << "Enter the calories burned during exercise ";
    cout << exercise << ": ";
    cin >> calories;

    while (calories >= 0) {
        total += calories; 
        exercise++; 

        cout << "Enter the calories burned during exercise ";
        cout << exercise << ": ";
        cin >> calories;
    }

    cout << "\nThe total calories burned are: " << total << endl; 
}

//Nested Loops
void TestScores() {
    int numStudents, numTests;
    double total, average;

    cout << fixed << showpoint << setprecision(1);

    cout << "This program averages test scores.\n";
    cout << "How many students do you have scores? ";
    cin >> numStudents;

    cout << "How many scores does each student have? ";
    cin >> numTests;

    for (int student = 1; student <= numStudents; student++) {
        total = 0;
        for (int test = 1; test <= numTests; test++) {
            double score;
            cout << "Enter score " << test << " for ";
            cout << "student " << student << ": ";
            cin >> score;
            total += score;
        }

        average = total / numTests;
        cout << "The average score for student " << student;
        cout << " is " << average << endl << endl;
    }
}

void BookStore() {

    int numStores, numGenres, numBooks, average;
    int overallAverage = 0;

    cout << "Enter the number of book stores: ";
    cin >> numStores;

    cout << "Enter the number genres each store offers: ";
    cin >> numGenres; 

    for (int store = 1; store <= numStores; store++) {
        numBooks = 0;
        for (int genre = 1; genre <= numGenres; genre++) {
            int books; 
            cout << "Enter the number of books in genre: ";
            cout << genre << " for book store " << store << ": ";
            cin >> books;
            numBooks += books; 
        }

        average = numBooks / numGenres; 
        cout << "\nThe average number of books for store ";
        cout << store << " is " << average << endl << endl;

        overallAverage += average;
    }
    cout << "\nThe overall average number of books across all ";
    cout << "stores is " << overallAverage << endl; 
}



int main()
{
    //UnaryOperators();
    //TemperatureChek();
    //CalculatNumberPlayers();
    //PuzzleGame();
    //Counters();   
    //AverageScore();
    //Menus();
    //SalesTotal();
    //RunningTotal();
    //GamePoints(); 
    //CaloriesBurned();
    //TestScores();
    BookStore();
    
    return 0; 
}

