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