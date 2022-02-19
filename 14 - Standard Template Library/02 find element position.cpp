/*
Write a program using the find() algorithm to locate the position of a specified
value in a sequence container.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int total, num, pos;
    cout << "Enter total elements : ";
    cin >> total;
    cout << "Enter the elements (separated by space) : ";
    for (int i = 0; i < total; i += 1)
    {
        cin >> num;
        v.push_back(num);
    }
    cout << "Enter element to find : ";
    cin >> num;

    vector<int>::iterator it;
    it = find(v.begin(), v.end(), num);
    pos = (it != v.end()) ? (it - v.begin()) : -1;
    cout << "Position : " << pos << " from first element";
    return 0;
}

/*
OUTPUT

Enter total elements : 3
Enter the elements (separated by space) : 1 2 3
Enter element to find : 2
Position : 1 from first element
*/