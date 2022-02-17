/*
Write a program which reads a text from the keyboard and displays the following
information on the screen in two columns:

(a) Number of lines
(b) Number of words
(c) Number of characters

Strings should be left-justified and numbers should be right-justified in a
suitable field width.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int lines = 0, words = 0, chars = 0;
    char ch, chPrev = ' ';
    cout << "Enter text (Type ^ followed by enter to stop) :\n";
    while ((ch = cin.get()) != '\n' || chPrev != '^')
    {
        chPrev = ch;
        if (ch == '\n')
        {
            lines += 1;
            words += 1;
        }
        else if (ch == ' ')
        {
            words += 1;
            chars += 1;
        }
        else
        {
            chars += 1;
        }
    }
    words += 1;
    lines += 1;
    chars -= 1;
    cout << endl
         << setw(15) << left << "Lines"
         << ":" << setw(5) << right << lines << endl;
    cout << setw(15) << left << "Words"
         << ":" << setw(5) << right << words << endl;
    cout << setw(15) << left << "Characters"
         << ":" << setw(5) << right << chars << endl;
    return 0;
}

/*
OUTPUT

Enter text (Type ^ followed by enter to stop) :
Roshan Dash
Cpp^

Lines          :    2
Words          :    3
Characters     :   14
*/