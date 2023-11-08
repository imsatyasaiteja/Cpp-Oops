#include <iostream>
using namespace std;

class MyClass
{
    int x; // private by default
public:
    int y; // can be accessed from outside the class
};

struct MyStruct
{
    int x; // public by default
private:
    int y; // can't be accessed from outside the struct
};

int main()
{
    MyClass obj1;
    obj1.y = 10; // valid
    // obj1.x = 15;  // invalid, x is private
    cout << obj1.y << endl;

    MyStruct obj2;
    obj2.x = 20; // valid
    // obj2.y = 25;  // invalid, y is private
    cout << obj2.x << endl;

    return 0;
}
