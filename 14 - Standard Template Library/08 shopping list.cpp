/*
Write a program that accepts a shopping list of five items from the keyboard and
stores them in a vector. Extend the program to accomplish the following:

(a) To delete a specified item in the list.
(b) To add an item at a specified location.
(c) To add an item at the end.
(d) To print the contents of the vector.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<string> &v)
{
    cout << "\nSHOPPING LIST\n";
    for (int i = 0; i < v.size(); i += 1)
    {
        cout << "[" << i + 1 << "] " << v[i] << endl;
    }
}

int main()
{
    string listItem;
    int position;
    vector<string> shoppingList;
    for (int i = 1; i <= 5; i += 1)
    {
        cout << "[" << i << "] Enter item : ";
        cin >> listItem;
        shoppingList.push_back(listItem);
    }
    print(shoppingList);

    cout << "\nDelete item : ";
    cin >> listItem;
    shoppingList.erase(remove(shoppingList.begin(), shoppingList.end(), listItem), shoppingList.end());
    print(shoppingList);

    cout << "\nEnter item to add and position (separated by space) : ";
    cin >> listItem >> position;
    shoppingList.insert(shoppingList.begin() + position, listItem);
    print(shoppingList);

    cout << "\nEnter item to add at end : ";
    cin >> listItem;
    shoppingList.push_back(listItem);
    print(shoppingList);
    return 0;
}

/*
OUTPUT

[1] Enter item : a
[2] Enter item : b
[3] Enter item : c
[4] Enter item : d
[5] Enter item : e

SHOPPING LIST
[1] a
[2] b
[3] c
[4] d
[5] e

Delete item : b

SHOPPING LIST
[1] a
[2] c
[3] d
[4] e

Enter item to add and position (separated by space) : g 1

SHOPPING LIST
[1] a
[2] g
[3] c
[4] d
[5] e

Enter item to add at end : h

SHOPPING LIST
[1] a
[2] g
[3] c
[4] d
[5] e
[6] h
*/