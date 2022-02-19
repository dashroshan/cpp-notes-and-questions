#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string, int> m;
    m["Roshan"] = 123;
    m["Dash"] = 45678;
    cout << "Total key value pairs : " << m.size() << endl;
    map<string, int>::iterator it;
    it = m.begin();
    while (it != m.end())
    {
        cout << (*it).first << " : " << (*it).second << endl;
        it++;
    }
    return 0;
}