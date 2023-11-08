// m = ++n + ++p Operators overloading
// ++n and ++p have right to left precedence

#include<iostream>
using namespace std;

class abc
{
	int x;
	
	public:
	void set(int a)
	{
		x = a;
	}
	
	abc& operator ++ ()
	{
		
		x++;
		return *this;
	}
	
	abc operator + (abc n)
	{	
		abc q;
		q.x  = n.x + x;
		
		return q;
	}
	
	abc operator = (abc q)
	{
		x = q.x;
		return q;
	}
	
	void print()
	{
		cout << x <<endl;
	}
};

int main()
{
	abc m, n, p;
	int x;
	
	cout << "Enter x, in object n : ";
	cin >> x;
	n.set(x);
	
	cout << "Enter x, in object p : ";
	cin >> x;	
	p.set(x);
	
	
	m = ++n + ++p;
	cout << "m = ++n + ++p Operation is performed" << endl;
	cout << "Value of x, in object m : ";
	m.print();
	
}
