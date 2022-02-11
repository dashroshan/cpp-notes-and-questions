/*
Modify the class and program of Exercise 5.2 such that the program would be able
to add two vectors and display the resultant vector (Note that we can pass
objects as function arguments.)
*/

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
    void sum(vector v1, int t1, vector v2, int t2);
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

void vector::sum(vector v1, int t1, vector v2, int t2)
{
    int alreadyPresent;
    size = 0;
    for (int i = 0; i < t1; i += 1)
    {
        data[i] = v1.data[i];
        size += 1;
    }
    for (int i = 0; i < t2; i += 1)
    {
        alreadyPresent = 0;
        for (int j = 0; j < t1; j += 1)
        {
            if (v2.data[i] == v1.data[j])
            {
                alreadyPresent = 1;
                break;
            }
        }
        if (alreadyPresent == 0)
        {
            data[size] = v2.data[i];
            size += 1;
        }
    }
}

int main()
{
    vector v1, v2, v3;
    float values1[] = {1, 2, 3}, values2[] = {3, 4};
    int size1 = sizeof(values1) / sizeof(values1[0]), size2 = sizeof(values2) / sizeof(values2[0]);
    v1.create(values1, size1);
    v2.create(values2, size2);
    v3.sum(v1, size1, v2, size2);
    v3.display();
    return 0;
}

/*
OUTPUT

(1, 2, 3, 4)
*/