#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> li;
    for (int i = 1; i <= 5; i += 1)
    {
        li.push_back(i);
    }

    li.pop_front();
    li.reverse();

    list<int>::const_iterator it;
    it = li.cbegin();
    while (it != li.cend())
    {
        cout << *it << " ";
        it++;
    }
    return 0;
}