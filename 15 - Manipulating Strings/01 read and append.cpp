/*
Write a program that reads the name : Martin Luther King, from the keyboard into
three separate string objects and then concatenates them into a new string
object using:

(a) + operator and
(b) append() function
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fN, mN, lN, sPlus, sAppend;
    cout << "Enter name : ";
    cin >> fN >> mN >> lN;
    sPlus = fN + " " + mN + " " + lN;
    sAppend = fN.append(" ").append(mN).append(" ").append(lN);
    cout << "Concatenated with + operator : " << sPlus << endl;
    cout << "Concatenated with append()   : " << sAppend;
    return 0;
}

/*
OUTPUT

Enter name : Martin Luther King
Concatenated with + operator : Martin Luther King
Concatenated with append()   : Martin Luther King
*/