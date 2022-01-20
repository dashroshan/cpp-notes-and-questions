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