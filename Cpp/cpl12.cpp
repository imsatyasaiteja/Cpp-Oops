#include<iostream>
#include<cmath>
double num;

using namespace std;

double cube(double num)
{
    double result = pow(num, 3);
    return result;
}

int main()
{
    cout << " Enter the number you want to get cube of : ";
    cin >> num;

    cout << " The cube of " << num << " is : " << cube(num);
}