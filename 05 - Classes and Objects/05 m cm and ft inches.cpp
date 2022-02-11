/*
Create two classes DM and DB which store the value of distances. DM stores
distances in metres and centimetres and DB in feet and inches. Write a program
that can read values for the class objects and add one object of DM with another
object of DB.

Use a friend function to carry out the addition operation. The object that
stores the results may be a DM object or DB object, depending on the units in
which the results are required.

The display should be in the format of feet and inches or metres and centimetres
depending on the object on display.
*/

#include <iostream>

using namespace std;

class DB;

class DM
{
    int metres, centimetres;

public:
    void create(int cm)
    {
        metres = cm / 100;
        centimetres = cm % 100;
    }
    void display(void)
    {
        cout << metres << " metres and " << centimetres << " centimetres" << endl;
    }
    friend DM add(DM &dmObj, DB &dbObj);
    friend DB add(DB &dbObj, DM &dmObj);
};

class DB
{
    int feet, inches;

public:
    void create(int in)
    {
        feet = in / 12;
        inches = in % 12;
    }
    void display(void)
    {
        cout << feet << " feet and " << inches << " inches" << endl;
    }
    friend DM add(DM &dmObj, DB &dbObj);
    friend DB add(DB &dbObj, DM &dmObj);
};

DM add(DM &dmObj, DB &dbObj)
{
    int cm = dmObj.metres * 100 + dmObj.centimetres;
    int inches = dbObj.feet * 12 + dbObj.inches;
    cm += int(float(inches) * 2.54);

    DM newDmObj;
    newDmObj.create(cm);
    return newDmObj;
}

DB add(DB &dbObj, DM &dmObj)
{
    int cm = dmObj.metres * 100 + dmObj.centimetres;
    int inches = dbObj.feet * 12 + dbObj.inches;
    inches += int(float(cm) * 0.394);

    DB newDbObj;
    newDbObj.create(inches);
    return newDbObj;
}

int main()
{
    DM dmObj, dmSum;
    DB dbObj, dbSum;
    dmObj.create(550);
    dbObj.create(119);
    dmSum = add(dmObj, dbObj);
    dbSum = add(dbObj, dmObj);
    dmSum.display();
    dbSum.display();
    return 0;
}

/*
OUTPUT

8 metres and 52 centimetres
27 feet and 11 inches
*/