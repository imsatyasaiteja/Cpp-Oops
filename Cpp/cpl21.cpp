// Constructor functions

#include<iostream>
using namespace std;

class Phone
{   public:
    string brand;
    string model;
    int year;

    Phone()                                                         
    {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
    }

    Phone(string b, string m, int y)                             // You can use this constructor function when you
    {                                                            // are required to enter data of multiple objects
        brand = b;
        model = m;
        year = y;
    }
};

int main()
{
    Phone phone1("Samsung", "F41", 2020), phone2("Vivo", "V5", 2018);
    Phone phone3;

    cout << phone1.brand << endl;
    cout << phone2.model << endl;
    cout << phone3.year << endl;
}