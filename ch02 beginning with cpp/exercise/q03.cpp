#include <iostream>

using namespace std;

int main()
{
    int numberOfTimes;
    cout << "How many times do you want to display \"WELL DONE\" : ";
    cin >> numberOfTimes;

    while (numberOfTimes)
    {
        cout << "WELL DONE\n";
        numberOfTimes -= 1;
    }
    return 0;
}

/*
OUTPUT

How many times do you want to display "WELL DONE" : 3
WELL DONE
WELL DONE
WELL DONE
*/