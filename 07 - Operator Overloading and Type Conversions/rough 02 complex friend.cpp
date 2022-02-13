/*
Overloading the + operator to add 2 class objects of complex numbers using
friend functions. Also make + operator be able to add a floating point number to
an object of complex class where it is treated as the real part.
*/

#include <iostream>

using namespace std;

class Complex
{
private:
    double real;
    double img;

public:
    Complex(double r, double i);
    Complex(void){};
    friend Complex operator+(Complex &c1, Complex &c2);
    friend Complex operator+(Complex &c, double r);
    friend Complex operator+(double r, Complex &c);
    void display(void);
};

Complex::Complex(double r, double i)
{
    real = r;
    img = i;
}

Complex operator+(Complex &c1, Complex &c2)
{
    return Complex(c1.real + c2.real, c1.img + c2.img);
}

Complex operator+(Complex &c, double r)
{
    return Complex(r + c.real, c.img);
}

Complex operator+(double r, Complex &c)
{
    return Complex(r + c.real, c.img);
}

void Complex::display(void)
{
    cout << real << " + " << img << "i\n";
}

int main()
{
    Complex c1(1, 2), c2(3, 4), c3;
    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    c3 = c1 + 5;
    c3 = 2 + c3;
    c3.display();
    return 0;
}

/*
OUTPUT

1 + 2i
3 + 4i
4 + 6i
8 + 2i
*/