// Go to derived class constructor but do not enter
// Visit the constructor of all base classes and set the base class data member
// Initialize the data member of derived class

#include<iostream>
using namespace std;

class abc
{
	protected:
	int a;
	public:
	abc():a(1)
	{
		cout << a << "Default constructor of abc" << endl;
	}
	
	abc(int y):a(y)
	{
		cout << a << "Parametrized constructor of abc" << endl;
	}
	
	~abc()
	{
		cout << "Default destructor of abc" << endl;	
	}
};

class xyz: public abc
{
	int b;
	public:
	xyz():b(2)
	{
		cout << a << b << "Default xyz" << endl;
	}
	
	xyz(int m, int n): b(n), abc(m)
	{
		cout << a << b << "Para xyz" << endl;
	}
	
	~xyz()
	{
		cout << a << b << "Default destructor xyz" << endl;
	}
};


int main()
{
	xyz k;
	xyz(8, 9);
	
	return 0;
}
