#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("abcde");
    cout << "Size     : " << s.size() << endl;     // Total chars
    cout << "Length   : " << s.length() << endl;   // Same as size
    cout << "Capacity : " << s.capacity() << endl; // Current char array size before it needs to grow
    cout << "Max size : " << s.max_size() << endl; // Maximum number of chars the array can grow to contain
    return 0;
}