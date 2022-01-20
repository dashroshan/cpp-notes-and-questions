#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, cosx, xPowerN = 1.0, toAdd;
    int xFactorial = 1, multiplier = -1;
    cout << "Enter x : ";
    cin >> x;
    for (int i = 0;; i += 1)
    {
        xPowerN = (i == 0) ? 1.0 : (xPowerN * x);
        xFactorial = (i == 0) ? 1 : (xFactorial * i);
        if (i % 2 == 0)
        {
            multiplier *= -1;
            toAdd = (double)multiplier * (xPowerN / (double)xFactorial);
            if (fabs(toAdd) < 0.0001)
            {
                break;
            }
            cosx += toAdd;
        }
    }
    cout << "Cos(" << x << ") = " << round(cosx * 10000.0) / 10000.0;
    return 0;
}

/*
OUTPUT

Enter x : 2
Cos(2) = -0.4162
*/