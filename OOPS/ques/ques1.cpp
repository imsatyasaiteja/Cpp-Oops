// Write a function that accepts two arguments: name of a student and name 
// of the department. Provide a default value for the department so that 
// if you call the function by passing a single argument, the department 
// default value should be CSE. Write a main() function that proves you 
// can call the function with a single argument alone as well as with two 
// arguments.

#include<iostream>
using namespace std;

void fun(string student, string department = "CSE")
{
    cout << student << " " << department << endl;
}

int main()
{
    fun("Teja");
    fun("Vishwa", " ECE");

    return 0;
}