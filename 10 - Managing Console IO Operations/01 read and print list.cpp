/*
Write a program to read a list containing itemData name, itemData code, and cost
interactively and produce a three column output as shown below.

NAME            CODE      COST
------------------------------
Turbo C++       1001    250.95
C Primer         905     95.70
:
:
------------------------------

Note that the name and code are left-justified and the cost is right-justified
with a precision of two digits. Trailing zeros are shown.
*/

#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class itemData
{
private:
    char *name;
    int code;
    double cost;

public:
    itemData() {}
    itemData(char *nameIn, int codeIn, double costIn);
    friend ostream &operator<<(ostream &dout, itemData &it);
};

itemData::itemData(char *nameIn, int codeIn, double costIn)
{
    name = new char[strlen(nameIn) + 1];
    strcpy(name, nameIn);
    code = codeIn;
    cost = costIn;
}

ostream &operator<<(ostream &dout, itemData &it)
{
    dout << left << setw(15) << it.name << right << setw(10) << it.code << setw(10) << showpoint << setprecision(2) << fixed << it.cost << endl;
    return dout;
}

int main()
{
    char name[15];
    int code, totalItems;
    double cost;
    itemData *data;
    cout << "Enter total items : ";
    cin >> totalItems;
    data = new itemData[totalItems];
    for (int i = 0; i < totalItems; i += 1)
    {
        cout << "Enter name, code, cost (space separated) : ";
        cin >> name >> code >> cost;
        data[i] = itemData(name, code, cost);
    }
    cout << endl
         << setw(15) << left << "NAME" << setw(10) << right << "CODE" << setw(10) << "COST\n";
    for (int i = 1; i <= 35; i += 1)
    {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < totalItems; i += 1)
    {
        cout << data[i];
    }
}

/*
OUTPUT

Enter total items : 2
Enter name, code, cost (space separated) : Book 1234 14.5
Enter name, code, cost (space separated) : Pen 34 56

NAME                 CODE     COST
-----------------------------------
Book                 1234     14.50
Pen                    34     56.00
*/