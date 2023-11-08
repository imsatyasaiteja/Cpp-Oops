// Classes and objects in C++
#include<iostream>
using namespace std;

class Book{
public:
    string title;
    string author;
    int pages;
};

// a class is a template of a specification and an object is an actual instance of that class

int main()
{
    Book book1, book2;                                      // Here book1, book2 are objects of the class Book

    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 356;

    book2.title = "Lord of the Rings";
    book2.author = "Tolkein";
    book2.pages = 410;

    cout << book1.title << endl;
    cout << book2.author;
}
