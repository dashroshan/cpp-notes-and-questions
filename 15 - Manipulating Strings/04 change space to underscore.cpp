/*
Write a program that will read a line of text containing more than three words
and then replace all the blank spaces with an underscore(_).
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cout << "Enter text : ";
    getline(cin, s);
    replace(s.begin(), s.end(), ' ', '_');
    cout << s;
    return 0;
}

/*
OUPUT

Enter text : Replace space with underscore
Replace_space_with_underscore
*/