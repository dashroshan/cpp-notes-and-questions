/*
Write a program to read a matrix of size m x n from the keyboard and display the
same on the screen using functions.
*/

#include <iostream>

using namespace std;

int m, n;

double *getMatrix(void)
{
    cout << "Enter size of matrix as 'mxn' : ";
    scanf("%dx%d", &m, &n);
    cout << "Enter matrix as : " << endl
         << "1 2 3" << endl
         << "4 5 6" << endl
         << endl;

    double *matrix = new double[m * n];
    for (int i = 0; i < m; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            cin >> *(matrix + i * n + j);
        }
    }
    return matrix;
}

void showMatrix(double *matrix)
{
    cout << endl
         << "Matrix : " << endl;
    for (int i = 0; i < m; i += 1)
    {
        for (int j = 0; j < n; j += 1)
        {
            cout << *(matrix + i * n + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    showMatrix(getMatrix());
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