/*
Create an array with even numbers and a list with odd numbers. Merge two
sequences of numbers into a vector using the algorithm merge(). Display the
vector.
*/

#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> &v)
{
    cout << "Vector ( ";
    for (int i = 0; i < v.size(); i += 1)
    {
        cout << v[i] << " ";
    }
    cout << ")\n";
}

int main()
{
    int arrayVar[] = {2, 4, 6};
    list<int> listV{1, 3, 5};
    vector<int> vectorV(listV.size() + sizeof(arrayVar) / sizeof(arrayVar[0]));
    merge(arrayVar, arrayVar + 3, listV.begin(), listV.end(), vectorV.begin());
    print(vectorV);
    return 0;
}

/*
OUTPUT

Vector ( 1 2 3 4 5 6 )
*/