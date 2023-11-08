/*
Write a C++ program which implements all the rules 
of resolving function overloading viz., exact match, 
type promotion, and standard type conversion.
*/

#include <iostream>

using namespace std;

void fun(int a, int b)
{
    cout << "Exact Match" << endl;
}

void fun(double a, double b)
{
    cout << "Exact Match" << endl;
}

void fun(int a, float b)
{
    cout << "Type Promotion" << endl;
}

void fun(double a, int b)
{
    cout << "Standard Type Conversion" << endl;
}

int main()
{
    int x = 10, y = 20;
    float z = 2.5;
    double d = 5.8;
    fun(x, y);
    fun(d, d);
    fun(x, z);
    fun(d, x);

    return 0;
}