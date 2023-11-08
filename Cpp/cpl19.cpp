// Pointers in C++
#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    int *pAge = &age;                               // *pAge is a pointer, a pointer always stores address
    cout << pAge;                                   // &pAge is same as pAge because address of a pointer has no sense
}