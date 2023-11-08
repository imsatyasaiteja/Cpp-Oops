#include <iostream>
using namespace std;

class abc
{
    public:
    char a;
    int b;
    char c;
    double d;
};

class def
{
    public:
    char a;
    char b;
    int c;
    double d;
};

int main()
{
    abc m;
    def n;

    cout << "Size of m.a : " << sizeof(m.a) << endl;
    cout << "Size of m.b : " << sizeof(m.b) << endl;
    cout << "Size of m.c : " << sizeof(m.c) << endl;
    cout << "Size of m.d : " << sizeof(m.d) << endl;
    cout << "Size of m : " << sizeof(m) << endl;
    cout << endl;
    cout << "Size of n.a : " << sizeof(n.a) << endl;
    cout << "Size of n.b : " << sizeof(n.b) << endl;
    cout << "Size of n.c : " << sizeof(n.c) << endl;
    cout << "Size of n.d : " << sizeof(n.d) << endl;
    cout << "Size of n : " << sizeof(n) << endl;

    return 0;
}