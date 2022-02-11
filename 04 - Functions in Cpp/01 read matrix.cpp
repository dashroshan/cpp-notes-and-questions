/*
Write a function to read a matrix of size m xn from the keyboard.
*/

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter size of matrix as 'mxn' : ";
    scanf("%dx%d", &m, &n);
    cout << "Enter matrix as : " << endl
         << "1 2 3" << endl
         << "4 5 6" << endl
         << endl;

    double matrix[m][n];
    for (int i = 0; i < m; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            cin >> matrix[i][j];
        }
    }

    cout << endl
         << "Matrix : " << endl;
    for (int i = 0; i < m; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*
OUTPUT

Enter size of matrix as 'mxn' : 3x4
Enter matrix as :
1 2 3
4 5 6

1 2 3 4
5 6 7 8
1 2 3 4

Matrix :
1 2 3 4
5 6 7 8
1 2 3 4
*/