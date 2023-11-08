// Increment operator overloading as Member function
// Decrement operator overlaoding as Friend function

#include<iostream>
using namespace std;

class abc
{
	private:
	int x;
	
	public:
	void setvalue()
	{
		cout << "In object t, set the value of x : ";
		cin >> x;
	}
	
	void operator ++ ()
	{
		x++;
	}
	
	friend void operator -- (abc &s);
	
	void print()
	{
		cout << x << endl;
	}

};

void operator -- (abc &s)
{
	s.x--;	

}

int main()
{
	abc t;
	t.setvalue();
	
	cout << "On incrementing x = ";
	++t;
	t.print();
	
	cout << "On decrementin x = ";
	--(t);
	t.print();
	
}
