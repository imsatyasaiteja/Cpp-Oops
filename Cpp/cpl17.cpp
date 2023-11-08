// Power function 
#include<iostream>

using namespace std;

int power(int base, int pow)
{
    int r = 1;
    for (int i = 1; i <= pow; i++)
    {
        r *= base;
    }
    return r;
}

int main()
{
    int base, pow;
    cout << " Enter the base value : ";
    cin >> base;
    cout << " Enter the power value : ";
    cin >> pow;

    cout << " The result is : " << power(base, pow);
}