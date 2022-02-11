/*
Write a program to evaluate the following investment equation

V=P(1+r)^n

and print the tables which would give the value of V for various combination of
the following values of P, r and n:

P: 1000, 2000, 3000,..., 10000
r: 0.10, 0.11, 0.12,...,0.20
n. 1,2,3,...,10

(Hint: P is the principal amount and V is the value of money at the end of n
years. This equation can be recursively written as

V = P(1 + r)
P=V

In other words, the value of money at the end of the first year becomes the
principal amount for the next year, and so on.
*/

#include <iostream>
#include <cmath>   // For pow() and fabs()
#include <iomanip> // For setw()

using namespace std;

int main()
{
    double vRequired, v;
    cout << "Enter V : ";
    cin >> vRequired;
    cout << left << setw(10) << "P" << setw(10) << "r" << setw(10) << "n" << endl;
    for (int p = 1000; p <= 10000; p += 1000)
    {
        for (double r = 0.10; r < 0.201; r += 0.01)
        {
            for (int n = 1; n <= 10; n += 1)
            {
                v = p * pow((1 + r), n);
                if (fabs(v - vRequired) < 0.1)
                {
                    cout << setw(10) << p << setw(10) << r << setw(10) << n << endl;
                }
            }
        }
    }
    return 0;
}

/*
OUTPUT

Enter V : 7200
P         r         n
5000      0.2       2
6000      0.2       1
*/