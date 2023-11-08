#include <iostream>
#include <string>
using namespace std;

class abc 
{
    string name;
    int age;

    public:
    abc(string n, int a)
    {
        name = n;
        age = a;
    }

    friend ostream &operator<<(ostream &cout, abc &object);
};

ostream &operator<<(ostream &cout, abc &object)
{
    cout << object.name << endl << object.age << endl;
    return cout;
}

int main()
{
    abc obj("Teja", 20);
    cout << obj;

    return 0;
}