/*
Write a code segment that does the following:

(a) Defines a vector v with a maximum size of 10.
(b) Sets the first element of v to 0.
(c) Sets the last element of v to 9.
(d) Sets the other elements to 1.
(e) Displays the contents of v
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(10, 1);
    v[0] = 0;
    v[v.size() - 1] = 9;
    for (int i = 0; i < v.size(); i += 1)
    {
        cout << v[i] << " ";
    }
    return 0;
}

/*
OUTPUT

0 1 1 1 1 1 1 1 1 9
*/