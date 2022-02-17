/*
Write an interactive, menu-driven program that will access the file created in
Exercise 11.3 and implement the following tasks

(a) Determine the telephone number of the specified person.
(b) Determine the name if a telephone number is known.
(c) Update the telephone number, whenever there is a change.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>

using namespace std;

class numData
{
public:
    char name[10];
    long num;
    numData() {}
    numData(char *nameIn, long numIn)
    {
        strcpy(name, nameIn);
        num = numIn;
    }
    void print()
    {
        cout << setw(10) << left << name << setw(10) << right << num << endl;
    }
};

int printMenu(void)
{
    int response;
    cout << "TELEPHONE NUMBERS DIRECTORY" << endl
         << endl
         << "[1] Find telephone number of a person" << endl
         << "[2] Find the person with a particular telephone number" << endl
         << "[3] Update a telephone number" << endl
         << "[4] Quit" << endl
         << endl
         << "Enter your choice number : ";
    cin >> response;
    return response;
}

void ch1NumFromName(void)
{
    numData numDataObj;
    char name[10], ch;
    cout << "Enter name : ";
    cin >> name;

    ifstream fIn("files/03 numbersOut");
    while (fIn.read((char *)&numDataObj, sizeof(numDataObj)))
    {
        if (strcmp(name, numDataObj.name) == 0)
        {
            cout << "Number     : " << numDataObj.num;
            fIn.close();
            cout << "\n\nEnter Y to continue : ";
            cin >> ch;
            system("cls");
            return;
        }
    }
    fIn.close();
    cout << "Person not found!\n\nEnter Y to continue : ";
    cin >> ch;
    system("cls");
}

void ch2NameFromNum(void)
{
    numData numDataObj;
    long num;
    char ch;
    cout << "Enter number : ";
    cin >> num;

    ifstream fIn("files/03 numbersOut");
    while (fIn.read((char *)&numDataObj, sizeof(numDataObj)))
    {
        if (num == numDataObj.num)
        {
            cout << "Name         : " << numDataObj.name;
            fIn.close();
            cout << "\n\nEnter Y to continue : ";
            cin >> ch;
            system("cls");
            return;
        }
    }
    fIn.close();
    cout << "Number not found!\n\nEnter Y to continue : ";
    cin >> ch;
    system("cls");
}

void updateNumber(void)
{
    numData numDataObj;
    char name[10], ch;
    int position = 0;
    cout << "Enter name       : ";
    cin >> name;

    ifstream fIn("files/03 numbersOut");
    while (fIn.read((char *)&numDataObj, sizeof(numDataObj)))
    {
        if (strcmp(name, numDataObj.name) == 0)
        {
            cout << "Enter new number : ";
            cin >> numDataObj.num;
            fIn.close();

            ofstream fOut("files/03 numbersOut", ios::app);
            fOut.seekp(position, ios::beg);
            fOut.write((char *)&numDataObj, sizeof(numDataObj));
            fOut.close();

            cout << "Number updated!\n\nEnter Y to continue : ";
            cin >> ch;
            system("cls");
            return;
        }
        position = fIn.tellg();
    }
    fIn.close();
    cout << "Person not found!\n\nEnter Y to continue : ";
    cin >> ch;
    system("cls");
}

int main()
{
    int response;
    char ch;
    while ((response = printMenu()) != 4)
    {
        if (response == 1)
        {
            ch1NumFromName();
        }
        else if (response == 2)
        {
            ch2NameFromNum();
        }
        else if (response == 3)
        {
            updateNumber();
        }
        else
        {
            cout << "Invalid choice!\n\nEnter Y to continue : ";
            cin >> ch;
            system("cls");
        }
    }
    cout << "Thank you for using the telephone numbers directory!";
    return 0;
}

/*
OUTPUT

TELEPHONE NUMBERS DIRECTORY

[1] Find telephone number of a person
[2] Find the person with a particular telephone number
[3] Update a telephone number
[4] Quit

Enter your choice number : 1
Enter name : Roshan
Number     : 123456

Enter Y to continue :
*/