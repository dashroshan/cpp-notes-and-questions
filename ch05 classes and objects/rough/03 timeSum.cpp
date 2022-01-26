#include <iostream>

using namespace std;

class time
{
    int hours, minutes;

public:
    void put(int hours, int minutes);
    void display(void);
    void sum(time t1, time t2);
};

void time::put(int hrs, int mins)
{
    hrs += mins / 60;
    mins %= 60;
    hours = hrs;
    minutes = mins;
}

void time::display(void)
{
    cout << hours << " hours and " << minutes << " minutes";
}

void time::sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = t1.hours + t2.hours + minutes / 60;
    minutes %= 60;
}

int main()
{
    time t1, t2, t3;
    t1.put(2, 45);
    t2.put(3, 30);
    t3.sum(t1, t2);
    t3.display();
    return 0;
}

/*
OUTPUT

6 hours and 15 minutes
*/