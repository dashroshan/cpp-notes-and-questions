/*
Modify the class and the program of Exercise 5.1 for handling 10 customers.
*/

#include <iostream>
#include <cstring>
#define TOTAL 10

using namespace std;

class accounts
{
    char name[TOTAL][30];
    int accountNumber[TOTAL];
    int typeOfAccount[TOTAL];
    double balance[TOTAL];
    int currentCusId = 0;

public:
    void create(char nameIn[], int accNumIn, int typeIn, double balanceIn);
    void deposit(double amount, int accNumIn);
    void withdraw(double amount, int accNumIn);
    void display(int accNumIn);
};

void accounts::create(char nameIn[], int accNumIn, int typeIn, double balanceIn)
{
    strcpy(name[currentCusId], nameIn);
    accountNumber[currentCusId] = accNumIn;
    typeOfAccount[currentCusId] = typeIn;
    balance[currentCusId] = balanceIn;
    currentCusId += 1;
}

void accounts::deposit(double amount, int accNumIn)
{
    int cusId = -1;
    for (int i = 0; i < currentCusId; i += 1)
    {
        if (accountNumber[i] == accNumIn)
        {
            cusId = i;
            break;
        }
    }
    if (cusId == -1)
    {
        cout << "Invalid account number!" << endl;
        return;
    }
    balance[cusId] += amount;
    cout << amount << " deposited by " << name[cusId] << endl;
}

void accounts::display(int accNumIn)
{
    int cusId = -1;
    for (int i = 0; i < currentCusId; i += 1)
    {
        if (accountNumber[i] == accNumIn)
        {
            cusId = i;
            break;
        }
    }
    if (cusId == -1)
    {
        cout << "Invalid account number!" << endl;
        return;
    }
    cout << "Name : " << name[cusId] << endl
         << "Balance : " << balance[cusId] << endl;
}

void accounts::withdraw(double amount, int accNumIn)
{
    int cusId = -1;
    for (int i = 0; i < currentCusId; i += 1)
    {
        if (accountNumber[i] == accNumIn)
        {
            cusId = i;
            break;
        }
    }
    if (cusId == -1)
    {
        cout << "Invalid account number!" << endl;
        return;
    }
    if (balance[cusId] > amount)
    {
        balance[cusId] -= amount;
        cout << amount << " withdrawn by " << name[cusId] << endl;
    }
    else
    {
        cout << "Withdrawl request by " << name[cusId] << " failed!" << endl
             << "Insufficient balance!" << endl;
    }
}

accounts create10Accs(void)
{
    accounts acc;
    acc.create("Name0", 12340, 1, 500);
    acc.create("Name1", 12341, 1, 1000);
    acc.create("Name2", 12342, 1, 2000);
    acc.create("Name3", 12343, 1, 3000);
    acc.create("Name4", 12344, 1, 4000);
    acc.create("Name5", 12345, 1, 5000);
    acc.create("Name6", 12346, 1, 6000);
    acc.create("Name7", 12347, 1, 7000);
    acc.create("Name8", 12348, 1, 8000);
    acc.create("Name9", 12349, 1, 9000);
    return acc;
}

int main()
{
    accounts acc = create10Accs();
    acc.display(12345);
    return 0;
}

/*
OUTPUT

Name : Name5
Balance : 5000
*/