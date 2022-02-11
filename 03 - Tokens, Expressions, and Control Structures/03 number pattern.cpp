/*
Write a program to print the following output using for loops.
1
22
333
4444
55555
.......
*/

#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout << "Enter total rows : ";
    cin >> rows;

    for (int i = 1; i <= rows; i += 1)
    {
        for (int j = 1; j <= i; j += 1)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT

Enter total rows : 6
1
22
333
4444
55555
666666
*/