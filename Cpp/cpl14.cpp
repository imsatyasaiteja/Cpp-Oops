#include<iostream>
using namespace std;
int num1, num2;

int getMax(int num1, int num2)
{
    if(num1 > num2)
    {
        cout << " "<< num1 << " is greater than " << num2;
    }
    else if(num1 == num2)
    {
        cout << " "<<num1 << " is equal to " << num2;
    }
    else
    {
        cout<< " "<< num1 << " is less than " << num2;
    }

    return 0;
}
int main()
{
    cout<< " Enter the value in num1 : ";
    cin >> num1;
    cout << " Enter the value in num2 : ";
    cin >> num2;

    getMax(num1, num2);
    return 0;
}

