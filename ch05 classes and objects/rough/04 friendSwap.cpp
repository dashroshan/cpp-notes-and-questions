#include <iostream>

using namespace std;

class c2;

class c1
{
    int value;

public:
    void set(int val)
    {
        value = val;
    }

    void display(void)
    {
        cout << value;
    }

    friend void exchange(c1 &class1, c2 &class2);
};

class c2
{
    int value;

public:
    void set(int val)
    {
        value = val;
    }

    void display(void)
    {
        cout << value;
    }

    friend void exchange(c1 &class1, c2 &class2);
};

void exchange(c1 &class1, c2 &class2)
{
    int temp = class1.value;
    class1.value = class2.value;
    class2.value = temp;
}

int main()
{
    c1 class1;
    c2 class2;
    class1.set(1);
    class2.set(2);
    exchange(class1, class2);
    class1.display();
    class2.display();
    return 0;
}

/*
OUTPUT

21
*/