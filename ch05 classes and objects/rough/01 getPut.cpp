#include <iostream>

using namespace std;

class item
{
    int number;
    double cost;

public:
    void getData(int num, double c);
    void putData(void)
    {
        cout << "Number : " << number << endl
             << "Cost : " << cost;
    }
};

void item::getData(int num, double c)
{
    number = num;
    cost = c;
}

int main()
{
    item a;
    a.getData(10, 50.5);
    a.putData();
    return 0;
}

/*
OUTPUT

Number : 10
Cost : 50.5
*/