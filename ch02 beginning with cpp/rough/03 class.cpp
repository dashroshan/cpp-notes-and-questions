#include <iostream>

using namespace std;

class avg
{
    float num1, num2;

public:
    void getNums(void);
    void showAvg(void);
};

void avg::getNums(void)
{
    cout << "Enter 2 numbers separated by space : ";
    cin >> num1 >> num2;
}

void avg::showAvg(void)
{
    float avg;
    avg = (num1 + num2) / 2;
    cout << "Average = " << avg;
}

int main()
{
    avg a;
    a.getNums();
    a.showAvg();
    return 0;
}