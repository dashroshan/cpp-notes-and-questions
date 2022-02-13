/*
Overload << >> operators with a vector class to take elements input directly
using cin >> vector and print directly using cout << vector
*/

#include <iostream>

using namespace std;

const int size = 3;

class Vector
{
private:
    int v[size];

public:
    Vector() {}
    friend istream &operator>>(istream &din, Vector &b);
    friend ostream &operator<<(ostream &dout, Vector &b);
};

istream &operator>>(istream &din, Vector &b)
{
    for (int i = 0; i < size; i += 1)
    {
        din >> b.v[i];
    }
    return (din);
}

ostream &operator<<(ostream &dout, Vector &b)
{
    dout << "(" << b.v[0];
    for (int i = 1; i < size; i += 1)
    {
        dout << ", " << b.v[i];
    }
    dout << ")";
    return (dout);
}

int main()
{
    Vector v;
    cout << "Enter " << size << " elements separated by spaces : ";
    cin >> v;
    cout << "Vector : " << v;
    return 0;
}

/*
OUTPUT

Enter 3 elements separated by spaces : 1 2 3
Vector : (1, 2, 3)
*/