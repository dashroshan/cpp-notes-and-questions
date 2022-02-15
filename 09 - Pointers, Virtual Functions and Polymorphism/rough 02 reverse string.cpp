#include <iostream>

using namespace std;

int main()
{
    char text[] = "Roshan", temp;
    int size = sizeof(text) / sizeof(text[0]) - 1;
    for (int i = 0; i < size / 2; i += 1)
    {
        temp = text[i];
        text[i] = text[size - 1 - i];
        text[size - 1 - i] = temp;
    }
    cout << text;
    return 0;
}