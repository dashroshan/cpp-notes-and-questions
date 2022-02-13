/*
Create a class MAT of size m x n. Define all possible matrix operations for MAT
type objects.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class MAT
{
private:
    double **p;
    int rows, columns;

public:
    MAT(int m, int n);
    MAT() {}
    friend istream &operator>>(istream &din, MAT &m);
    friend ostream &operator<<(ostream &dout, MAT &m);
    MAT operator+(MAT &m);
    MAT operator-(MAT &m);
    MAT operator*(MAT &m);
};

MAT::MAT(int m, int n)
{
    rows = m;
    columns = n;
    p = new double *[rows];
    for (int i = 0; i < rows; i += 1)
    {
        p[i] = new double[columns];
    }
}

istream &operator>>(istream &din, MAT &m)
{
    cout << "Enter " << m.rows << "x" << m.columns << " matrix with columns separated by spaces and rows in separated lines : \n";
    for (int i = 0; i < m.rows; i += 1)
    {
        for (int j = 0; j < m.columns; j += 1)
        {
            din >> m.p[i][j];
        }
    }
    return (din);
}

ostream &operator<<(ostream &dout, MAT &m)
{
    for (int i = 0; i < m.rows; i += 1)
    {
        for (int j = 0; j < m.columns; j += 1)
        {
            dout << left << setw(5) << m.p[i][j];
        }
        dout << endl;
    }
    return (dout);
}

MAT MAT::operator+(MAT &m)
{
    MAT newM(rows, columns);
    for (int i = 0; i < rows; i += 1)
    {
        for (int j = 0; j < columns; j += 1)
        {
            newM.p[i][j] = p[i][j] + m.p[i][j];
        }
    }
    return newM;
}

MAT MAT::operator-(MAT &m)
{
    MAT newM(rows, columns);
    for (int i = 0; i < rows; i += 1)
    {
        for (int j = 0; j < columns; j += 1)
        {
            newM.p[i][j] = p[i][j] - m.p[i][j];
        }
    }
    return newM;
}

MAT MAT::operator*(MAT &m)
{
    MAT newM(rows, columns);
    int tempSum;
    if (columns != m.rows)
    {
        cout << "The given matrices cannot be multiplied!\n";
        return newM;
    }
    for (int i = 0; i < rows; i += 1)
    {
        for (int j = 0; j < m.columns; j += 1)
        {
            newM.p[i][j] = 0;
            for (int k = 0; k < columns; k += 1)
            {
                newM.p[i][j] += p[i][k] * m.p[k][j];
            }
        }
    }
    return newM;
}

int main()
{
    MAT m1(2, 2), m2(2, 2), m3;
    cin >> m1 >> m2;
    m3 = m1 + m2;
    cout << "\nSum\n"
         << m3;
    m3 = m1 - m2;
    cout << "\nDifference\n"
         << m3;
    m3 = m1 * m2;
    cout << "\nProduct\n"
         << m3;
    return 0;
}

/*
PRODUCT

Enter 2x2 matrix with columns separated by spaces and rows in separated lines :
1 2
3 4
Enter 2x2 matrix with columns separated by spaces and rows in separated lines :
5 6
7 8

Sum
6    8
10   12

Difference
-4   -4
-4   -4

Product
19   22
43   50
*/