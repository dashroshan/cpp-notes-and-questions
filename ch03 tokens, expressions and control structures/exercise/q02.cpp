#include <iostream>

using namespace std;

int main()
{
    int m, *vector;
    cout << "Enter M : ";
    cin >> m;
    vector = new int[m];

    // Put 1 to m values in the vector
    for (int i = 0; i < m; i += 1)
    {
        *(vector + i) = i + 1;
    }

    // Print the contents of the vector
    for (int i = 0; i < m; i += 1)
    {
        cout << *(vector + i) << " ";
    }

    delete[] vector;
    return 0;
}

/*
OUTPUT

Enter M : 10
1 2 3 4 5 6 7 8 9 10
*/