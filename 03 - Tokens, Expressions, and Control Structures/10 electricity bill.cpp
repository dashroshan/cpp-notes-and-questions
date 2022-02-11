/*
An electricity board charges the following rates to domestic users to discourage
large consumption of energy:

For the first 100 units : 60P per unit
For next 200 units : 80P per unit
Beyond 300 units : 90P per unit

All users are charged a minimum of Rs. 50.00. If the total amount is more than
Rs. 300.00 then an additional surcharge of 15% is added.

Write a program to read the names of users and number of units consumed and
print out the charges with names.
*/

#include <iostream>

using namespace std;

struct user
{
    char name[20];
    int units;
    double charge;
};

int main()
{
    int totalUsers;
    cout << "Enter total users : ";
    cin >> totalUsers;
    struct user usersData[totalUsers];

    for (int i = 0; i < totalUsers; i += 1)
    {
        struct user &userData = usersData[i];
        printf("Enter name and units of customer %d (separated by space): ", i + 1);
        cin >> userData.name >> userData.units;

        if (userData.units <= 100)
        {
            userData.charge = userData.units * 0.6;
        }
        else if (userData.units <= 300)
        {
            userData.charge = (userData.units - 100) * 0.8 + 60.0;
        }
        else
        {
            userData.charge = (userData.units - 300) * 0.9 + 160.0 + 60.0;
        }

        if (userData.charge < 50.0)
        {
            userData.charge = 50.0;
        }
        else if (userData.charge > 300.0)
        {
            userData.charge *= 1.15;
        }
    }

    printf("\n%-20s%-20s%-20s\n", "NAME", "UNITS", "CHARGE");
    for (int i = 0; i < totalUsers; i += 1)
    {
        struct user &userData = usersData[i];
        printf("%-20s%-20d%-20.2lf\n", userData.name, userData.units, userData.charge);
    }
    return 0;
}

/*
OUTPUT

Enter total users : 2
Enter name and units of customer 1 (separated by space): Roshan 32
Enter name and units of customer 2 (separated by space): Abhishek 276

NAME                UNITS               CHARGE
Roshan              32                  50.00
Abhishek            276                 200.80
*/