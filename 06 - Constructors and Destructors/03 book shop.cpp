/*
A book shop maintains the inventory of books that are being sold at the
shop. The list includes details such as author, title, price, publisher and
stock position. Whenever a customer wants a book, the sales person inputs the
title and author and the system searches the list and displays whether it is
available or not. If it is not, an appropriate message is displayed. If it is,
then the system displays the book details and requests for the number of copies
required. If the requested copies are available, the total cost of the requested
copies is displayed; otherwise the message "Required copies not in stock" is
displayed.

Design a system using a class called books with suitable member functions and
constructors. Use new operator in constructors to allocate memory space
required.
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

int main()
{
    Books b;
    char title[50], author[50];
    cout << "Enter the title and author : ";
    cin >> title >> author;
    b.search(title, author);
    return 0;
}

/*
OUTPUT

Enter the title and author : t2 a2

Book      : t2
Author    : a2
Publisher : p2
Price     : 200
Stock     : 20

Enter the number of copies required : 15
Total cost : 3000
*/