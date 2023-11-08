// User defined functions
#include <iostream>
using namespace std;

void hi(string name, int age)
{
    cout << " Hello " << name << " you are " << age <<endl;
    return;
}

int main()
{   
    // Here hi() is a user defined function
    hi("Mike", 30);
    hi("Tom", 19);
    hi("Jack", 22);

    return 0;
}