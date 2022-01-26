#include <iostream>

using namespace std;

class set
{
private:
    int a, b;
    int largest(void);

public:
    void input(void);
    void output(void);
};

void set::input(void)
{
    cout << "Enter two numbers separated by space : ";
    cin >> a >> b;
}

int set::largest(void)
{
    return (a >= b) ? a : b;
}

void set::output(void)
{
    cout << "Largest of the two numbers : " << largest();
}

int main()
{
    set data;
    data.input();
    data.output();
    return 0;
}

/*
OUTPUT

Enter two numbers separated by space : 1 2
Largest of the two numbers : 2
*/