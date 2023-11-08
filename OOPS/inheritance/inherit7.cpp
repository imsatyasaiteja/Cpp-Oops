#include<iostream>
using namespace std;

class abc
{
	public:
	abc()
	{
		cout<< "abc" <<endl;
	}
	
	~abc()
	{
		cout << "~abc" << endl;
	}
};

class def
{
	public:
	def()
	{
		cout<< "def" <<endl;
	}
	
	~def()
	{
		cout << "~def" << endl;
	}
};

class xyz: public abc, public def
{	
	def x;
	public:
	xyz()
	{
		cout<< "xyz" <<endl;
	}
	
	~xyz()
	{
		cout << "~xyz" << endl;
	}
};


int main()
{
	xyz m;
	
	return 0;
}


// Output :

/*

abc base class
def base class
def due to x
xyz derived class
~xyz
~def
~def
~abc

*/
