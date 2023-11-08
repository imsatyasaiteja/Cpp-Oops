#include<iostream>
#include<string>
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

    void operator += (abc &obj)
    {
        name += obj.name;
        age += obj.age;
    }

    void print()
    {
        cout << this->name << endl
             << this->age << endl;
    }
};

int main()
{
    abc objOne("One ", 1);
    abc objTwo("Two ", 2);
    abc objThree("Three", 3);

    objOne += objTwo;
    objOne.print();
    objOne += objThree;
    objOne.print();
}