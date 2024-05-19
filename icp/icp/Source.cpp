#include<iostream>

using namespace std;
void formula(int a, int b, int c, int d)
{
	int t, z;
	int  lhs=0, rhs=0;
	cout << "enter the value of T " << endl;
	cin >> t;
	cout << "enter the value of Z " << endl;
	cin >> z;
	 lhs= t + z *( a * a * a * a + b * b * b )/ (c * c);

	 rhs= d*d*d*d;
	 cout <<"Left hand side: "<<lhs << endl;
	 cout <<"Right hand side: " <<rhs << endl;
	 if (lhs == rhs)
	 {
		 cout << "Equation is satisfy" << endl;
		 cout << "-1" << endl;
	 }
	 else
	 {
		 cout << "Equation is not satisfy" << endl;
		 cout << "0" << endl;
	 }
}

int main()
{
	int i, j, k, l;

	cout << "enter the value of W " << endl;
	cin >> i;
	cout << "enter the value of X " << endl;
	cin >> j;
	cout << "enter the value of Y " << endl;
	cin >> k;
	cout << "enter the value of Z " << endl;
	cin >> l;
	formula(i, j, k, l);
	cout << "the equation is" << endl;
	cout << "*******************************************************" << endl;
	cout << " ( t + ( z * ( a^5-1 + b^4-1 / c^3-1 ) ) ) = d^2-1*4 " << endl;
	cout << "*******************************************************" << endl;
	return 0;
}