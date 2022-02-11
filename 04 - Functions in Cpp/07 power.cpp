/*
Write a function power() to raise a number m to a power n. The function takes a
double value for m and int value for n, and returns the result correctly. Use a
default value of 2 for n to make the function to calculate squares when this
argument is omitted. Write a main that gets the values of m and n from the user
to test the function.
*/

#include <iostream>

using namespace std;

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
    double m;
    int n;
    cout << "Enter m^n : ";
    scanf("%lf^%d", &m, &n);
    cout << power(m, n);
    return 0;
}

/*
OUTPUT

Enter m^n : 2^3
8
*/