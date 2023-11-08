/*
Let there is a class ‘abc’ which has two integers as 
data members. Define the class with default constructor, 
parameterised constructor, copy constructor, and 
destructor. Write a member function to print the data 
members. Also, write the member function to overload 
the assignment operator. Write the main program which 
calls all the member functions of the class.
*/

#include <iostream>
using namespace std;

class abc
{
    int a, b;

public:
    abc()
    {
        a = 0;
        b = 0;
    }

    abc(int x, int y)
    {
        a = x;
        b = y;
    }

    abc(const abc &obj)
    {
        a = obj.a;
        b = obj.b;
    }

    ~abc()
    {
        cout << "Object destroyed" << endl;
    }

    void print()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }

    abc &operator=(const abc &obj)
    {
        a = obj.a;
        b = obj.b;
        return *this;
    }
};

int main()
{
    abc obj1;
    obj1.print();

    abc obj2(10, 20);
    obj2.print();

    abc obj3(obj2);
    obj3.print();

    obj1 = obj2;
    obj1.print();

    return 0;
}
