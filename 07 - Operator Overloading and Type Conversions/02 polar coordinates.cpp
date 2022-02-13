/*
Design a class Polar which describes a point in the plane using polar
coordinates radius and angle. A point in polar coordinates is shown in Fig. 7.3.

Use the overloaded+operator to add two objects of Polar.

Note that we cannot add polar values of two points directly. This requires first
the conversion of points into rectangular co-ordinates, then adding the
corresponding rectangular co-ordinates and finally converting the result back
into polar co-ordinates. You need to use the following trigonometric formulae:

x = r * cos(a);
y = r * sin(a);
a = atan(y/x); //arc tangent
r = sqrt(x*x + y*y);
*/

#include <iostream>
#include <cmath>

using namespace std;

class Polar
{
private:
    double radius;
    double angle;

public:
    Polar(double r, double a)
    {
        radius = r;
        angle = a;
    }
    Polar() {}
    friend ostream &operator<<(ostream &dout, Polar &p);
    Polar operator+(Polar &p);
};

ostream &operator<<(ostream &dout, Polar &p)
{
    dout << "Point (" << p.radius << ", " << p.angle << ")";
    return (dout);
}

Polar Polar::operator+(Polar &p)
{
    double x, y;
    x = radius * cos(angle) + p.radius * cos(p.angle);
    y = radius * sin(angle) + p.radius * sin(p.angle);
    return Polar(sqrt(x * x + y * y), atan(y / x));
}

int main()
{
    Polar p1(4.5, 1.3), p2(2.3, 1), p3;
    p3 = p1 + p2;
    cout << p1 << " + " << p2 << " = " << p3;
    return 0;
}

/*
OUTPUT

Point (4.5, 1.3) + Point (2.3, 1) = Point (6.73168, 1.19886)
*/