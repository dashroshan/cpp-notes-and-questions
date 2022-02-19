/*
A table gives a list of car models and the number of units sold in each type in
a specified period. Write a program to store this table in a suitable container,
and to display interactively the total value of a particular model sold, given
the unit-cost of that model.
*/

#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

void initializeData(map<string, int> &m)
{
    m["model1"] = 10;
    m["model2"] = 20;
    m["model3"] = 30;
}

int main()
{
    double cost;
    map<string, int> data;
    initializeData(data);
    string model;
    cout << "Enter model : ";
    cin >> model;

    map<string, int>::iterator it;
    for (it = data.begin(); it != data.end(); it++)
    {
        if ((*it).first == model)
        {
            cout << "Enter unit cost : ";
            cin >> cost;
            cout << "Total value of the model sold = " << setprecision(2) << fixed << ((*it).second) * cost;
        }
    }
    return 0;
}

/*
OUTPUT

Enter model : model2
Enter unit cost : 4500.5
Total value of the model sold = 90010.00
*/