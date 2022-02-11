/*
5.1 Define a class to represent a bank account. Include the following members:

Data members

1. Name of the depositor
2. Account number
3. Type of account
4. Balance amount in the account

Member functions

1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance

Write a main program to test the program.
*/

#include <iostream>
#include <cstring>

using namespace std;

class account
{
    char name[30];
    int accountNumber;
    int typeOfAccount;
    double balance;

public:
    void create(char nameIn[], int accNumIn, int typeIn, double balanceIn);
    void deposit(double amount);
    void withdraw(double amount);
    void display(void);
};

void account::create(char nameIn[], int accNumIn, int typeIn, double balanceIn)
{
    strcpy(name, nameIn);
    accountNumber = accNumIn;
    typeOfAccount = typeIn;
    balance = balanceIn;
}

void account::deposit(double amount)
{
    balance += amount;
    cout << amount << " deposited by " << name << endl;
}

void account::display(void)
{
    cout << "Name : " << name << endl
         << "Balance : " << balance << endl;
}

void account::withdraw(double amount)
{
    if (balance > amount)
    {
        balance -= amount;
        cout << amount << " withdrawn by " << name << endl;
    }
    else
    {
        cout << "Withdrawl request by " << name << " failed!" << endl
             << "Insufficient balance!" << endl;
    }
}

int main()
{
    account acc;
    acc.create("Roshan Dash", 12345, 1, 5000);
    acc.withdraw(500);
    acc.deposit(100);
    acc.display();
    return 0;
}

/*
OUTPUT

500 withdrawn by Roshan Dash
100 deposited by Roshan Dash
Name : Roshan Dash
Balance : 4600
*/