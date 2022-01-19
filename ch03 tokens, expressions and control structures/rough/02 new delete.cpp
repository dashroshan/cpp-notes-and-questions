#include <iostream>

using namespace std;

int main()
{
    int *numPtr = new int(3);
    /*
    int *numPtr;
    numPtr=new int;
    *numPtr=3;
    */
    cout << *numPtr;
    delete numPtr;
    cout << "\nAfter delete : " << *numPtr;
    return 0;
}