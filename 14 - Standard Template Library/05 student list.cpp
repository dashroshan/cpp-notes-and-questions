/*
Create a student class that includes a student’s first name and his roll_number.
Create five objects of this class and store them in a list thus creating a
phone_lit. Write a program using this list to display the student name if the
roll_number is given and viceversa.
*/

#include <iostream>
#include <cstring>
#include <list>

using namespace std;

class student
{
public:
    char *firstName;
    int roll;
    student() {}
    student(char *firstNameIn, int rollIn)
    {
        firstName = new char[strlen(firstNameIn)];
        strcpy(firstName, firstNameIn);
        roll = rollIn;
    }
    void display(void) const { cout << "Roll number " << roll << " : " << firstName; }
};

void initializeData(list<student> &li)
{
    li.push_back(student("Rohan", 45));
    li.push_back(student("Roshan", 46));
    li.push_back(student("Rudradev", 47));
    li.push_back(student("Rudransh", 48));
    li.push_back(student("Sameer", 49));
}

int main()
{
    int choice, roll;
    char name[20];
    list<student> sRecord;
    initializeData(sRecord);
    list<student>::const_iterator it;

    cout << "[1] Search by roll number" << endl
         << "[2] Search by first name" << endl
         << endl
         << "Enter choice : ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter roll number : ";
        cin >> roll;
    }
    else if (choice == 2)
    {
        cout << "Enter first name : ";
        cin >> name;
    }
    else
    {
        cout << "Invalid choice!";
        return 0;
    }

    for (it = sRecord.begin(); it != sRecord.end(); it++)
    {
        if (choice == 1 && ((*it).roll == roll))
        {
            (*it).display();
            return 0;
        }
        else if (choice == 2 && (strcmp(name, (*it).firstName) == 0))
        {
            (*it).display();
            return 0;
        }
    }
    cout << "Entry not found!";
    return 0;
}

/*
OUTPUT

[1] Search by roll number
[2] Search by first name

Enter choice : 1
Enter roll number : 46
Roll number 46 : Roshan
*/