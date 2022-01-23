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