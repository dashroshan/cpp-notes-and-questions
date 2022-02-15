#include <iostream>

using namespace std;

class testClass
{
    int id;
    double price;

public:
    testClass() {}
    testClass(int a, double b)
    {
        id = a;
        price = b;
    }
    void print(void)
    {
        cout << "ID " << id << " : Price = " << price << endl;
    }
};

int main()
{
    testClass *ptr;
    int total;
    cout << "Enter total : ";
    cin >> total;
    ptr = new testClass[total];
    for (int i = 0; i < total; i += 1)
    {
        ptr[i] = testClass(i + 1, (i + 1) * 100);
    }
    for (int i = 0; i < total; i += 1)
    {
        ptr[i].print();
    }
    return 0;
}

/*
OUTPUT

Enter total : 3
ID 1 : Price = 100
ID 2 : Price = 200
ID 3 : Price = 300
*/