// user input program for strings
#include<iostream>
using namespace std;

int main()
{
    // for string inputs :
    string name;
    cout << " Enter your name : ";
    getline(cin, name);
    cout << " Hello! " << name << ", nice to meet you";
    return 0;
}