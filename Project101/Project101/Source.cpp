#include<iostream>
#include<cmath>
using namespace std;
void formula(int a, int b, int c, int d)
{
	int t, z;
	double sum, braces, mul, lhs, rhs;
	cout << "enter the value of T " << endl;
	cin >> t;
	cout << "enter the value of Z " << endl;
	cin >> z;
	int powa, powb, powc, powd;
	powa = pow(a, 4);
	powb = pow(b, 3);
	powc = pow(c, 2);
	powd = pow(d, 4);
	sum = powa + powb;
	braces = sum / powc;
	mul = z * braces;
	lhs = t + mul;
	rhs = powd;
	if (lhs == rhs)
	{
		cout << " function is satisfied :" << endl;
		cout << "the value =  -1  " << endl;
	}
	else
	{
		cout << "the function is not stisfied" << endl;
		cout << "the value is =  0" << endl;
	}
}

int main()
{
	int w, x, y, z;

	cout << "enter the value of W " << endl;
	cin >> w;
	cout << "enter the value of X " << endl;
	cin >> x;
	cout << "enter the value of Y " << endl;
	cin >> y;
	cout << "enter the value of Z " << endl;
	cin >> z;
	formula(w, x, y, z);
	cout << "the equation is" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << " ( t + ( z * ( a^5-1 + b^4-1 / c^3-1 ) ) ) = d^2-1*4 " << endl;


	return 0;
}