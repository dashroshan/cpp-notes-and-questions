#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2(" world!");
    s1 = "Hello";
    s1 += s2;
    cout << s1 << endl;

    cout << "Char at 1 : " << s1.at(1) << endl;
    cout << "Char at 2 : " << s1[2] << endl;
    cout << "3 chars starting from 1 position : " << s1.substr(1, 3) << endl;
    cout << "Starting point of substring 'lo' : " << s1.find("lo") << endl;
    cout << "First 'o' occurance : " << s1.find_first_of('o') << endl;
    cout << "Last  'o' occurance : " << s1.find_last_of('o') << endl;

    cout << endl;
    s1.insert(5, s2);
    cout << s1 << endl;

    s1.erase(5, 7);
    cout << s1 << endl;

    s1.replace(1, 4, "i");
    cout << s1 << endl;

    if (s1 != s2)
    {
        cout << s1 << " != " << s2 << endl;
    }
    if (s2 < s1)
    {
        cout << s1 << " > " << s2 << endl;
    }

    s1.swap(s2);
    cout << "After swapping s1 : " << s1 << endl;
    return 0;
}