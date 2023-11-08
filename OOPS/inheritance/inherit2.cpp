// Overriding

#include<iostream>
using namespace std;

class abc
{
	int a;
	public:
	void fun1()
	{
		cout << "Hello abc here" << endl;
	}
};

class xyz: public abc
{
	public:
	void fun1()
	{
		cout << "Hello xyz here" << endl;
	}
};

int main()
{
	xyz e;
	e.fun1();
	
	// To call fun1() of abc, you have to mention explicitly
	e.abc::fun1();
	
	return 0;
}
