/*
An election is contested by five candidates. The candidates are numbered 1 to 5
and the voting is done by marking the candidate number on the ballot paper.
Write a program to read the ballots and count the votes cast for each candidate
using an array variable count. In case, a number read is outside the range 1 to
5, the ballot should be considered as a 'spoilt ballot', and the program should
also count the number of spoilt ballots.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int votes[] = {1, 2, 1, 4, 3, 5, 4, 3, 2, 6, 1, 8, 3, 9}, count[6] = {0}, candidate;

    for (int i = 0; i < (sizeof(votes) / sizeof(votes[0])); i += 1)
    {
        candidate = votes[i];
        if (candidate >= 1 && candidate <= 5)
        {
            count[candidate] += 1;
        }
        else
        {
            count[0] += 1;
        }
    }

    cout << left << setw(15) << "Invalid Votes : " << count[0] << endl;
    for (int i = 1; i <= 5; i += 1)
    {
        cout << "Candidate " << i << "   : " << count[i] << endl;
    }

    return 0;
}

/*
OUTPUT

Invalid Votes : 3
Candidate 1   : 3
Candidate 2   : 2
Candidate 3   : 3
Candidate 4   : 2
Candidate 5   : 1
*/