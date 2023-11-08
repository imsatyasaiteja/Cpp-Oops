#include<iostream>
using namespace std;

class abc
{
	private:
	int x;
	int y;
	
	public:
	abc()
	{
		x = 10;
		y = 20;	
	}
	
	void setvalue()
	{
		cout << "\nenter the value of x : ";
		cin >> x;
		
		cout << "\nenter the value of y : ";
		cin >> y;
	}
	
	
	friend abc operator-(abc &s, abc &r);
	
	void print()
	{
		cout << x << " " << y << endl;
	}
};

abc operator-(abc &s, abc &r)
{
	abc k;
	k.x = s.x - r.x;
	k.y = s.y - r.y;
	
	return k;
}

int main()
{
	abc m, n;
	abc p;
	
	cout << "In case of m : " << endl;
	m.setvalue();
	cout << "\nIn case of n : " << endl;
	n.setvalue();
	
	p = m - n;
	p.print();
	
	return 0;
}
