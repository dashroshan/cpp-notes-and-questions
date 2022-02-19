/*
Write a program using the algorithm count() to count how
many elements in a container have a specified value
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
    cout << "Enter element to count : ";
    cin >> num;
    cout << num << " is present " << count(v.begin(), v.end(), num) << " times!";
    return 0;
}

/*
OUTPUT

Enter total elements : 5
Enter the elements (separated by space) : 1 2 3 2 2
Enter element to count : 2
2 is present 3 times!
*/