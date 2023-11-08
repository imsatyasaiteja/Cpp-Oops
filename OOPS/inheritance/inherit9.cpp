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

class def: public abc
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

class mno
{
	public:
	mno()
	{
		cout<< "mno" <<endl;
	}
	
	~mno()
	{
		cout << "~mno" << endl;
	}
};

class xyz: public def, public mno 
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

abc
def
mno
abc
def
xyz
~xyz
~def
~abc
~mno
~def
~abc

*/
