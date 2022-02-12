/*
Define a class String that could work as a user-defined string type. Include
constructors that will enable us to create an uninitialized string

String s1; // string with length 0

and also to initialize an object with a string constant at the time of creation
like :

String s2("Well done!");

Include a function that adds two strings to make a third string. Note that the
statement s2=s1; will be perfectly reasonable expression to copy one string to
another. Write a complete program to test your class to see that it does the
following tasks:

(a) Creates uninitialized string objects.
(b) Creates objects with string constants.
(c) Concatenates two strings properly.
(d) Displays a desired string object.
*/

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *text;

public:
    String();
    String(char *textIn);
    String(String &s);
    ~String() { delete[] text; }
    void display(void);
    void join(String &s1, String &s2);
};

String::String()
{
    text = new char[1];
    strcpy(text, "");
}

String::String(char *textIn)
{
    text = new char[strlen(textIn) + 1];
    strcpy(text, textIn);
}

String::String(String &s)
{
    delete[] text;
    text = new char[strlen(s.text) + 1];
    strcpy(text, s.text);
}

void String::display(void)
{
    cout << text;
}

void String::join(String &s1, String &s2)
{
    delete[] text;
    text = new char[strlen(s1.text) + strlen(s2.text) + 1];
    strcpy(text, s1.text);
    strcat(text, s2.text);
}

int main()
{
    String s1("Hello "), s2("World"), s3, s4;
    s3.join(s1, s2);
    s4 = s3;
    s4.display();
    return 0;
}

/*
OUTPUT

Hello World
*/