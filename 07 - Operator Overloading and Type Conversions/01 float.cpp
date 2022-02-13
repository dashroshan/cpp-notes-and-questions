/*
Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they operate on the objects of FLOAT.
*/

#include <iostream>

using namespace std;

class FLOAT
{
private:
    float data;

public:
    FLOAT() {}
    FLOAT(float f) { data = f; }
    operator float() { return data; }
    FLOAT operator+(FLOAT &f) { return FLOAT(data + f.data); }
    FLOAT operator-(FLOAT &f) { return FLOAT(data - f.data); }
    FLOAT operator*(FLOAT &f) { return FLOAT(data * f.data); }
    FLOAT operator/(FLOAT &f) { return FLOAT(data / f.data); }
    friend istream &operator>>(istream &din, FLOAT &f);
};

istream &operator>>(istream &din, FLOAT &f)
{
    din >> f.data;
    return (din);
}

int main()
{
    FLOAT f1, f2, f3;
    cout << "Enter two floating point numbers : ";
    cin >> f1 >> f2;
    f3 = f1 + f2;
    cout << "Sum        : " << f3 << endl;
    f3 = f1 - f2;
    cout << "Difference : " << f3 << endl;
    f3 = f1 * f2;
    cout << "Product    : " << f3 << endl;
    f3 = f1 / f2;
    cout << "Division   : " << f3 << endl;
    return 0;
}

/*
OUTPUT

Enter two floating point numbers : 4.4 1.6
Sum        : 6
Difference : 2.8
Product    : 7.04
Division   : 2.75
*/