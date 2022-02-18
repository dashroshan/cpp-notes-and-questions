#include <iostream>

using namespace std;

template <typename tVar>
class product
{
    tVar a;
    tVar b;

public:
    product(tVar x, tVar y)
    {
        a = x;
        b = y;
    }
    tVar getP(void);
    friend tVar getS(product &p);
};

template <typename tVar>
tVar product<tVar>::getP(void)
{
    return a * b;
}

template <typename tVar>
tVar getS(product<tVar> &p)
{
    return (p.a + p.b);
}

int main()
{
    product<int> p(2, 3);
    cout << p.getP() << endl
         << getS<int>(p);
    return 0;
}