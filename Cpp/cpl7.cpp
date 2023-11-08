// user input program for intgers and characters
#include <iostream>
using namespace std;

int main()
{  
    // for integer inputs :
    int age;
    cout << " Enter your age : ";
    cin >> age;
    cout << " You are " << age << " years old\n";

    // for character inputs :
    char grade;
    cout << " Enter your grade : ";
    cin >> grade;
    cout << " Your grade is " << grade ;

    return 0;
}