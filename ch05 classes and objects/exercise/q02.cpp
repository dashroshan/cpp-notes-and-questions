#include <iostream>
#define MAXSIZE 50

using namespace std;

class vector
{
    float data[MAXSIZE];
    int size;

public:
    void create(float values[], int total);
    void modify(float newValue, int id);
    void multiply(float value);
    void display(void);
};

void vector::create(float values[], int total)
{
    for (int i = 0; i < total; i += 1)
    {
        data[i] = values[i];
    }
    size = total;
}

void vector::modify(float newValue, int id)
{
    if (id < size)
    {
        data[id] = newValue;
    }
    else
    {
        cout << "Invalid id!" << endl;
    }
}

void vector::multiply(float value)
{
    for (int i = 0; i < size; i += 1)
    {
        data[i] *= value;
    }
}

void vector::display(void)
{
    cout << "(";
    for (int i = 0; i < size; i += 1)
    {
        cout << data[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
    cout << ")" << endl;
}

int main()
{
    vector vec;
    float values[] = {1.5, 2, 3.5, 4, 5.5};
    vec.create(values, sizeof(values) / sizeof(values[0]));
    vec.modify(10, 4);
    vec.multiply(2.5);
    vec.display();
    return 0;
}

/*
OUTPUT

(3.75, 5, 8.75, 10, 25)
*/