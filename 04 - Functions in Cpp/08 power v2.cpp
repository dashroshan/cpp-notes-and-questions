/*
Write a function that performs the same operation as that of Exercise 4.7 but
takes an int value for m. Both the functions should have the same name. Write a
main that calls both the functions. Use the concept of function overloading.
*/

#include <iostream>

using namespace std;

int power(int m, int n = 2)
{
    int power = 1;
    for (int i = 1; i <= n; i += 1)
    {
        power *= m;
    }
    return power;
}

double power(double m, int n = 2)
{
    double power = 1;
    for (int i = 1; i <= n; i += 1)
    {
        power *= m;
    }
    return power;
}

int main()
{
    cout << power(2.4, 5) << endl;
    cout << power(2, 5);
    return 0;
}

/*
OUTPUT

79.6262
32
*/