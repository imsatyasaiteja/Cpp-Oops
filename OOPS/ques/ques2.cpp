#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BankAccount
{
    string name;
    int accNum;
    string type;
    int balance;

    public:
    BankAccount(string n = "Bank", string t = "savings", int money = 500)
    {
        name = n;
        accNum = 1234;
        type = t;
        balance = money;
    }

    void deposit(int money)
    {
        balance += money;
    }

    void withdraw(int money)
    {
        if(balance > money)
        {
            balance -= money;
        }
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
        cout << endl;
    }

    friend void print(BankAccount B[], int size);
};

void print(BankAccount B[], int size)
{
    string names[size];

    for (int i = 0; i < size; i++)
    {
        names[i] = B[i].name;
    }

    sort(names, names + size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (names[i] == B[j].name && B[j].name != "Bank")
            {
                B[j].display();
            }
        }
    }

    
}

int main()
{
    BankAccount B[50] = {
        BankAccount("Teja", "savings", 2500),
        BankAccount("Vinay", "salary", 5500),
        BankAccount("Arun", "savings", 3500),
    };

    print(B, 50);

    return 0;
}