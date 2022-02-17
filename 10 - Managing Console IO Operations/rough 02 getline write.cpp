#include <iostream>

using namespace std;

int main()
{
    char text[20];
    cout << "Enter text : ";
    cin.getline(text, 20);
    cout << "Entered text : " << text << endl;
    cout.write(text, 20);
    return 0;
}

/*
OUTPUT

Enter text : Roshan Dash
Entered text : Roshan Dash
Roshan Dash     ╨▬╓
*/