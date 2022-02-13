/*
Define two classes Polar and Rectangle to represent points in the polar and
rectangle systems. Use conversion routines to convert from one system to the
other.
*/

#include <iostream>
#include <cmath>

using namespace std;

class Rect;

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
    operator Rect();
};

class Rect
{
private:
    double x;
    double y;

public:
    Rect(double xIn, double yIn)
    {
        x = xIn;
        y = yIn;
    }
    Rect() {}
    friend ostream &operator<<(ostream &dout, Rect &r);
    operator Polar();
};

Polar::operator Rect()
{
    return Rect(radius * cos(angle), radius * sin(angle));
}

Rect::operator Polar()
{
    return Polar(sqrt(x * x + y * y), atan(y / x));
}

ostream &
operator<<(ostream &dout, Polar &p)
{
    dout << "Polar (" << p.radius << ", " << p.angle << ")";
    return (dout);
}

ostream &operator<<(ostream &dout, Rect &r)
{
    dout << "Rectangular (" << r.x << ", " << r.y << ")";
    return (dout);
}

int main()
{
    Polar p(5, 1.2), pFromR;
    Rect r(3, 4), rFromP;
    pFromR = r;
    rFromP = p;
    cout << p << " -> " << rFromP << endl;
    cout << r << " -> " << pFromR << endl;
    return 0;
}

/*
OUTPUT

Polar (5, 1.2) -> Rectangular (1.81179, 4.6602)
Rectangular (3, 4) -> Polar (5, 0.927295)
*/