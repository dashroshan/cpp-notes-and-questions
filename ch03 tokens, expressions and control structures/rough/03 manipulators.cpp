#include <iostream>
#include <iomanip> // for setw()

using namespace std;

ostream &surName(ostream &output)
{
    return output << "Dash : ";
}

int main()
{
    cout << setw(10) << "Roshan : " << setw(10) << 12345 << endl
         << setw(10) << surName << setw(10) << 12 << endl;

    return 0;
}