/*
A cricket team has the following table of batting figures for a series of test matches:

Player's name       Runs                Innings             Times not out       Batting average
Sachin              8430                230                 18                  39.7642
Saurav              4200                130                 9                   34.7107
Rahul               3350                105                 11

Write a program to read the figures set out in the above form, to calculate the batting
averages and to print out the complete table including the averages.
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct player
{
    char name[20];
    int runs;
    int innings;
    int timesNotOut;
    double battingAvg;
};

int main()
{
    int totalPlayers;
    cout << "Enter total players : ";
    cin >> totalPlayers;
    struct player data[totalPlayers];

    for (int i = 0; i < totalPlayers; i += 1)
    {
        struct player &playerData = data[i];
        cout << "Enter name, runs, innings, times not out of Player " << i + 1 << " (separated by spaces) : ";
        cin >> playerData.name >> playerData.runs >> playerData.innings >> playerData.timesNotOut;
        playerData.battingAvg = (double)playerData.runs / ((double)(playerData.innings - playerData.timesNotOut));
    }

    cout << endl
         << left << setw(20) << "Player's name" << setw(20) << "Runs" << setw(20) << "Innings" << setw(20) << "Times not out" << setw(20) << "Batting average" << endl;
    for (int i = 0; i < totalPlayers; i += 1)
    {
        struct player &playerData = data[i];
        cout << left << setw(20) << playerData.name << setw(20) << playerData.runs << setw(20) << playerData.innings << setw(20) << playerData.timesNotOut << setw(20) << playerData.battingAvg << endl;
    }
    return 0;
}

/*
OUTPUT

Enter total players : 3
Enter name, runs, innings, times not out of Player 1 (separated by spaces) : Sachin 8430 230 18
Enter name, runs, innings, times not out of Player 2 (separated by spaces) : Saurav 4200 130 9
Enter name, runs, innings, times not out of Player 3 (separated by spaces) : Rahul 3350 105 11

Player's name       Runs                Innings             Times not out       Batting average
Sachin              8430                230                 18                  39.7642
Saurav              4200                130                 9                   34.7107
Rahul               3350                105                 11                  35.6383
*/