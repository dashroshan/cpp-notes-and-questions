#include <iostream>

using namespace std;

class test
{
private:
    int a;

public:
    void put(int num) { a = num; }
    void display(void) { cout << a; }
};

int main()
{
    test *ptr, a;
    ptr = &a;
    ptr->put(3);
    ptr->display();
    return 0;
}