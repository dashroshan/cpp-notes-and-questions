#include <iostream>

using namespace std;

class temp
{
    float tempInF;

public:
    void input(void);
    void display(void);
};

void temp::input(void)
{
    cout << "Enter the temperature in Fahrenheit : ";
    cin >> tempInF;
}

void temp::display(void)
{
    cout << tempInF << "F is " << ((tempInF - 32) * (5.0 / 9.0)) << "C";
}

int main()
{
    temp t;
    t.input();
    t.display();
    return 0;
}

/*
OUTPUT

Enter the temperature in Fahrenheit : 90
90F is 32.2222C
*/