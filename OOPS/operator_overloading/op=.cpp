// = Operator overloading

#include<iostream>
using namespace std;

class abc
{
	private:
	int x;
	
	public:
	void operator = (int a)
	{
		x = a;
	}
	
	void print()
	{
		cout << "In object u, value of x = " << x << endl;
	}
};

int main()
{
	abc u;
	int a;
	
	cout << "Give a value of a : ";
	cin >> a;
	
	u = a;
	
	u.print();
	
	return 0;
}


