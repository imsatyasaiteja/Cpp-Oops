#include<iostream>
using namespace std;

int main()
{
	int z = 131076, *u;
	short int x = 20, *y;
	
	u = (int *)&x;
	cout << *u << endl;
	
	y = (short int*)&z;
	cout << *y << endl;
	
	return 0;
}
