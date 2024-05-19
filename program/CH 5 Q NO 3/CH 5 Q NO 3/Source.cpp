#include<iostream>
using namespace std;
void zero(int &a,int &c)
{
	if (a > c)
	{
		c = 0;
		cout << "Second number is " << c << endl;
	}
	else
	{
		a = 0;
		cout << "First number is " << a << endl;
	}
}
int main()
{
	int a, b;
	cout << "Enter first number" << endl;
	cin >> a;
	cout << "Enter the second number" << endl;
	cin >> b;
	zero(a, b);
	cout << "First number is: " << a << endl;
	cout << "Second number is: " << b << endl;
}