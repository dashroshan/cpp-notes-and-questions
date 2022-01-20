#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double avg = 0.0, variance = 0.0, standardDeviation;
    cout << "Enter N : ";
    cin >> n;

    double numbers[n];
    cout << "Enter N numbers (separated by spaces) : ";
    for (int i = 0; i < n; i += 1)
    {
        cin >> numbers[i];
        avg += numbers[i];
    }
    avg /= (double)n;

    for (int i = 0; i < n; i += 1)
    {
        variance += pow((numbers[i] - avg), 2);
    }
    variance /= (double)n;
    standardDeviation = sqrt(variance);

    printf("Variance = %0.2lf\nStandard deviation = %0.2lf", variance, standardDeviation);
    return 0;
}

/*
OUTPUT

Enter N : 4
Enter N numbers (separated by spaces) : 3 8 1 19
Variance = 48.69
Standard deviation = 6.98
*/