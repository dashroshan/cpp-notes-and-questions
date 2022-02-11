/*
Print the value of 1 + (1/2)^2 + (1/3)^4... upto 0.0001% accuracy
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double sum, toAdd;
    for (int i = 1;; i += 1)
    {
        toAdd = pow(1.0 / (double)i, i);
        if (fabs(toAdd) < 0.0001)
        {
            break;
        }
        sum += toAdd;
    }
    cout << "Sum = " << round(sum * 10000.0) / 10000.0;
    return 0;
}

/*
OUTPUT

Sum = 1.2913
*/