/*
Overloading the + operator to add 2 class objects of complex numbers
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
    Complex operator+(Complex &c);
    void display(void);
};

Complex::Complex(double r, double i)
{
    real = r;
    img = i;
}

Complex Complex::operator+(Complex &c)
{
    return Complex(real + c.real, img + c.img);
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
    return 0;
}

/*
OUTPUT

1 + 2i
3 + 4i
4 + 6i
*/