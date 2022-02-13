/*
Define a class String. Use overloaded == operator to compare two strings.
*/

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *text;

public:
    String(void);
    String(char *s);
    String(String &s);
    friend ostream &operator<<(ostream &dout, String &s);
    friend String operator+(String &s1, String &s2);
    friend int operator==(String &s1, String &s2);
};

String::String(void)
{
    text = new char[1];
    strcpy(text, "");
}

String::String(char *s)
{
    text = new char[strlen(s) + 1];
    strcpy(text, s);
}

String::String(String &s)
{
    text = new char[strlen(s.text) + 1];
    strcpy(text, s.text);
}

ostream &operator<<(ostream &dout, String &s)
{
    dout << s.text;
    return (dout);
}

String operator+(String &s1, String &s2)
{
    char *temp;
    temp = new char[strlen(s1.text) + strlen(s2.text) + 1];
    strcpy(temp, s1.text);
    strcat(temp, s2.text);
    String tempS(temp);
    delete[] temp;
    return tempS;
}

int operator==(String &s1, String &s2)
{
    return (strcmp(s1.text, s2.text) == 0) ? 1 : 0;
}

int main()
{
    String s1, s2, s3;
    s1 = "Hello ";
    s2 = "Hello ";
    if (s1 == s2)
    {
        s3 = s1 + s2;
        cout << s3;
    }
    return 0;
}

/*
OUTPUT

Hello Hello
*/