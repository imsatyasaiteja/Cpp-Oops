#include<iostream>
using namespace std;

class abc
{};

class def: public abc
{};

int main()
{
	abc x, m, *pa, *pb;
	pa = &x;
	pb = &m;
	
	def y, n, *pc, *pd;
	pc = &y;
	pd = &n;
	
	pa = pc // upcast pa = &y
	// pd = pb; // downcast pd = &m, it will give error
	
	return 0;
}
