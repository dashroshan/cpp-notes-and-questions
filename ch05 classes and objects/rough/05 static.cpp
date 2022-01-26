#include <iostream>

using namespace std;

class test
{
    int number;

public:
    void print(void)
    {
        number += 1;
        cout << number;
    }
};

int main()
{
    test t1;
    t1.print();
    return 0;
}