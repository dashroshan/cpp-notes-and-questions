#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &v)
{
    cout << "Vector ( ";
    for (int i = 0; i < v.size(); i += 1)
    {
        cout << v[i] << " ";
    }
    cout << ")\n";
}

int main()
{
    vector<int> v;
    for (int i = 1; i <= 5; i += 1)
    {
        v.push_back(i);
    }
    print(v);
    v.erase(v.begin(), v.begin() + 2);
    print(v);
    v.insert(v.begin() + 2, 9);
    print(v);
    vector<int>::iterator itr;
    itr = v.begin();
    cout << *(itr + 1);
    return 0;
}