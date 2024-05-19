#include<iostream>
using namespace std;

void show(int a, int& b, int c)
{
	a += 35;
	b += 45;
	c += 56;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

}
void main()
{
	int j, k, l;
	j = 3;
	k = 9;
	l = 8;

	show(j, k, l);
	cout << j << " " << k << " " << l << endl;
}
