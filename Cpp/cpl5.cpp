#include <iostream>
using namespace std;

int main()
{
    cout << 5 * 7 << "\n";
    cout << 5 + 2 << "\n";
    cout << 9 - 4 << "\n";
    cout << 8 / 3 << "\n";  // Gives an integer value
    cout << 8.0 / 3.0 << "\n"; //Gives the exact value
    cout << 9 % 5 << "\n";
    cout << 4 + 5 * 10 << "\n"; // follows basic math rules
    cout << (4 + 5) * 10 << "\n";

    int num = 5;
    num++;
    cout << num << "\n";
    num *= 4;
    cout << num << "\n";
    int dnum = 5.5;
    cout << 5.5 + num << "\n";   // Gives the exact value
    cout << dnum + 24 << "\n";   // Gives an integer value

    return 0;
}