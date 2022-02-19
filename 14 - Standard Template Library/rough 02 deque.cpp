#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<int> dequeObj;
    for (int i = 5; i <= 10; i += 1)
    {
        dequeObj.push_back(i);
    }
    for (int i = 4; i >= 1; i -= 1)
    {
        dequeObj.push_front(i);
    }
    for (int i = 0; i < dequeObj.size(); i += 1)
    {
        cout << dequeObj[i] << " ";
    }
    return 0;
}