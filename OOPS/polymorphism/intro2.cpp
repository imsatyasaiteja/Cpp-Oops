#include<iostream>

using namespace std;

class abc
{
	public:
	int i;
};

class def
{
	public:
	short int j;
};

int main()
{
	abc x, *m;
	x.i = 131076;
	
	def y, *n;
	y.j = 20;
	
	m = (abc*)&y;
	n = (def*)&x;
	
	cout << m->i << endl << n->j << endl;
	
	return 0;
}
