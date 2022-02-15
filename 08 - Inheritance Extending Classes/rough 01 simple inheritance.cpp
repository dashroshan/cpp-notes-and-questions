#include <iostream>

using namespace std;

class c1
{
private:
    int a;

public:
    c1() { a = 1; }
    int c = 3;
    int getNum(void) { return a; }
};

class c2 : public c1
{
private:
    int b;

public:
    c2(int num) { b = num; }
    int c = 4;
    int aPlusB(void) { return getNum() + b; }
};

int main()
{
    c1 objC1;
    c2 objC2(2);
    // cout << objC2.aPlusB();
    cout << objC2.c;
    return 0;
}