// Inheritance
#include<iostream>
using namespace std;

class Chef
{
    public :
    void makeChicken()
    {
        cout << "The chef makes chicken" << endl;
    }

    void makePizza()
    {
        cout << "The chef makes pizza" << endl;
    }

    void makeSpecialDish()
    {
        cout << "The chef makes Barbeque ribs" << endl;
    }

};

class ItalianChef : public Chef                          // We are inheriting few constructors from class Chef
{
    public :
    void makePasta()
    {
        cout << "The chef makes pasta" << endl;
    }

    void makeSpecialDish()                               // We can also overwrite the inherited constructor
    {
        cout << "The chef makes Chicken parm" << endl;
    }
};

int main()
{
    Chef chef1;
    ItalianChef chef2;

    chef1.makeChicken();
    chef1.makeSpecialDish();
    chef2.makeChicken();
    chef2.makeSpecialDish();
}