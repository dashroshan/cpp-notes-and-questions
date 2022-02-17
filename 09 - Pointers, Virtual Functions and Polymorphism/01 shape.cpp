/*
Create a base class called shape. Use this class to store two double type values
that could be used to compute the area of figures. Derive two specific classes
called triangle and rectangle from the base shape. Add to the base class, a
member function get_data() to initialize base class data members and another
member function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived
classes to suit their requirements.

Using these three classes, design a program that will accept dimensions of a
triangle or a rectangle interactively, and display the area.

Remember the two values given as input will be treated as lengths of two sides
in the case of rectangles, and as base and width in the case of triangles, and
used as follows:

Area of rectangle = x * y
Area of triangle = 1/2 * x * y
*/

#include <iostream>

using namespace std;

class shape
{
protected:
    double x;
    double y;
};

class triange : public shape
{
public:
    void get_data(void)
    {
        cout << "Triangle : Enter the 2 values (separated by space) : ";
        cin >> x >> y;
    }
    void display_area(void)
    {
        cout << "Area = " << ((1.0 / 2.0) * x * y) << endl;
    }
};

class rectangle : public shape
{
public:
    void get_data(void)
    {
        cout << "Rectangle : Enter the 2 values (separated by space) : ";
        cin >> x >> y;
    }
    void display_area(void)
    {
        cout << "Area = " << (x * y) << endl;
    }
};

int main()
{
    rectangle rectObj;
    triange triObj;
    rectObj.get_data();
    rectObj.display_area();
    triObj.get_data();
    triObj.display_area();
    return 0;
}

/*
OUTPUT

Rectangle : Enter the 2 values (separated by space) : 2 3
Area = 6
Triangle : Enter the 2 values (separated by space) : 4 5
Area = 10
*/