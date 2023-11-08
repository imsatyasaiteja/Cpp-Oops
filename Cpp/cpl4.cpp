#include<iostream>
using namespace std;

int main()
{
    string phrase = "Can you";
    // string.length() function :
    cout << phrase.length() << "\n";
    // printing a particular index of the string phrase :                     
    cout << phrase[0] << "\n";    
    // Assigning a new character to a particular index of the string phrase : 
    phrase[0] = 'M';
    cout << phrase << "\n";
    // string.find() function :
    cout << phrase.find("you", 0) << "\n";  // Here the number 0 is mentioned so that checking of the phrase starts from 0
    // string.substr() function :
    cout << phrase.substr(2, 6);

    return 0;
}