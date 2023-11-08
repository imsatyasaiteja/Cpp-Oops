// Object functions in C++
#include<iostream>

using namespace std;

class Student
{   public :
    string name;
    string major;
    double gpa;

    Student(string n, string m, double g)
    {
        name = n;
        major = m;
        gpa = g;
    }

    string hasHonors()                                       // An object function 
    {
        if(gpa >= 3.5)
        {
            return "yes";
        }
        return "no";
    }

};

int main()
{
    Student student1("Jim", "Science", 3.5), student2("Harry", "Art", 2.7);

    cout << student2.hasHonors() << endl;
    cout << student1.hasHonors() << endl;
}