/*
Improve the system design in Exercise 6.3 to incorporate the following features:

(a) The price of the books should be updated as and when required. Use a private
member function to implement this.

(b) The stock value of each book should be automatically updated as soon as a
transaction is completed.

(c) The number of successful and unsuccessful transactions should be recorded
for the purpose of statistical analysis. Use static data members to keep count
of transactions.
*/

#include <iostream>
#include <cstring>

using namespace std;

class Books
{
private:
    int total;
    char **title;
    char **author;
    char **publisher;
    int *stock;
    double *price;
    void updatePrice(char *titleIn, char *authorIn, double newPrice);

public:
    Books(void);
    void search(char *titleIn, char *authorIn);
};

Books::Books(void)
{
    total = 2;
    title = new char *[total];
    author = new char *[total];
    publisher = new char *[total];
    stock = new int[total];
    price = new double[total];

    title[0] = new char[3];
    title[1] = new char[3];
    strcpy(title[0], "t1");
    strcpy(title[1], "t2");

    author[0] = new char[3];
    author[1] = new char[3];
    strcpy(author[0], "a1");
    strcpy(author[1], "a2");

    publisher[0] = new char[3];
    publisher[1] = new char[3];
    strcpy(publisher[0], "p1");
    strcpy(publisher[1], "p2");

    stock[0] = 10;
    stock[1] = 20;

    price[0] = 100;
    price[1] = 200;
}

void Books::search(char *titleIn, char *authorIn)
{
    int copiesReqired;
    for (int i = 0; i < total; i += 1)
    {
        if (strcmp(title[i], titleIn) == 0 && strcmp(author[i], authorIn) == 0)
        {
            cout << endl
                 << "Book      : " << title[i] << endl
                 << "Author    : " << author[i] << endl
                 << "Publisher : " << publisher[i] << endl
                 << "Price     : " << price[i] << endl
                 << "Stock     : " << stock[i] << endl
                 << endl
                 << "Enter the number of copies required : ";
            cin >> copiesReqired;
            if (stock[i] >= copiesReqired)
            {
                cout << "Total cost : " << copiesReqired * price[i] << endl;
                stock[i] -= copiesReqired;
            }
            else
            {
                cout << "Required copies not in stock!" << endl;
            }
            return;
        }
    }
    cout << titleIn << " by " << authorIn << " book is not available!" << endl;
}

void Books::updatePrice(char *titleIn, char *authorIn, double newPrice)
{
    for (int i = 0; i < total; i += 1)
    {
        if (strcmp(title[i], titleIn) == 0 && strcmp(author[i], authorIn) == 0)
        {
            price[i] = newPrice;
            cout << "Price updated!" << endl;
            return;
        }
    }
    cout << titleIn << " by " << authorIn << " book is not available!" << endl;
}

int main()
{
    Books b;
    char title[50], author[50];
    cout << "Enter the title and author : ";
    cin >> title >> author;
    b.search(title, author);
    return 0;
}