/*
Evaluate sinx to 0.0001% accuracy
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, sinx, xPowerN = 1.0, toAdd;
    int xFactorial = 1, multiplier = -1;
    cout << "Enter x : ";
    cin >> x;
    for (int i = 1;; i += 1)
    {
        xPowerN *= x;
        xFactorial *= i;
        if (i % 2 != 0)
        {
            multiplier *= -1;
            toAdd = (double)multiplier * (xPowerN / (double)xFactorial);
            if (fabs(toAdd) < 0.0001)
            {
                break;
            }
            sinx += toAdd;
        }
    }
    cout << "Sin(" << x << ") = " << round(sinx * 10000.0) / 10000.0;
    return 0;
}

/*
OUTPUT

Enter x : 2
Sin(2) = 0.9093
*/