/*
Extend the above program to display the area of circles. This requires addition
of a new derived class 'circle that computes the area of a circle. Remember, for
a circle we need only one value, its radius, but the get_data() function in the
base class requires two values to be passed (Hint: Make the second argument of
get data() function as a default one with zero value.)
*/

#include <iostream>

using namespace std;

class shape
{
protected:
    double x;
    double y;
};

class circle : public shape
{
public:
    void get_data(void)
    {
        cout << "Circle : Enter the radius : ";
        cin >> x;
    }
    void display_area(void)
    {
        cout << "Area = " << (3.14 * x * x) << endl;
    }
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
    circle cirObj;
    cirObj.get_data();
    cirObj.display_area();
    rectObj.get_data();
    rectObj.display_area();
    triObj.get_data();
    triObj.display_area();
    return 0;
}

/*
Circle : Enter the radius : 2
Area = 12.56
Rectangle : Enter the 2 values (separated by space) : 2 3
Area = 6
Triangle : Enter the 2 values (separated by space) : 4 5
Area = 10
*/