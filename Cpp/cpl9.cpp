// Building a mad libs game
#include <iostream>
using namespace std;

int main()
{
    string color, pluralNoun, celebrity;
    cout << " Enter your favourite color : ";
    getline(cin, color);
    cout << " Enter a plural noun : ";
    getline(cin, pluralNoun);
    cout << " Enter your favourite celebrity : ";
    getline(cin, celebrity);
     
    cout << "\n Roses are " << color << "\n";
    cout << " " << pluralNoun << " are blue \n";
    cout << " I love " << celebrity <<endl;

    return 0;
}