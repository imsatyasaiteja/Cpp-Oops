// Postfix decrement operator overloading

#include<iostream>
using namespace std;

class abc
{
	private:
	int x;
	
	public:
	abc(int a)
	{
		x = a;
	}
	
	void operator -- ()
	{
		x--;
	}
	
	void print()
	{
		cout << x << endl;
	}
};

int main()
{
	abc f(27);
	--f;
	
	f.print();
	
	return 0;
}
