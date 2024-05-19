#include<iostream>
using namespace std;
int main()
{
	int a = 90;
	int b = 6;
	int c;
	int *p;
	int *v;
	p = &a;
	v = &b;
	cout << *p << endl;
	cout << *v << endl;
	c = *p * *v;
	cout << c << endl;
}