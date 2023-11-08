#include <iostream>
using namespace std;


class abc
{
	int a;
	public:
	void fun1()
	{
		cout << "Hello I'm function 1\n";
	}
};

class pqr:public abc
{
	int b;
	public:
	void fun2()
	{
		cout << "Hello I'm function 2\n";
	}
};

int main()
{
	pqr t;
	t.fun1();
	
	return 0;
}
