/*
Write a program that counts the number of occurrences of a particular character,
say ‘e’, in a line of text.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    char ch;
    cout << "Enter text : ";
    getline(cin, s);
    cout << "Enter character to count : ";
    cin >> ch;
    cout << "Total occurances of '" << ch << "' in the text : " << count(s.begin(), s.end(), ch);
    return 0;
}

/*
OUTPUT

Enter text : Hello World!
Enter character to count : l
Total occurances of 'l' in the text : 3
*/