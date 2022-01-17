#include <iostream>

using namespace std;

int main()
{
    float num1, num2, avg;
    cout << "Enter 2 numbers separated by space : ";
    cin >> num1 >> num2;
    avg = (num1 + num2) / 2;
    cout << "Average = " << avg;
    return 0;
}