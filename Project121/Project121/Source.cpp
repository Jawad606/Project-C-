#include<iostream>
using namespace std;
void area(float m)
{
	float k;
	k = 3.14 * m* m;
	cout << "AREA OF CIRCLE:" <<k<< endl;
}
void area(float m, float v)
{
	float k;
	k = 0.5 * m * v;
	cout << "AREA OF TIRNAGLE IS " << k;
}

void main()
{
	float a,b ;
	cout << "enter the mass" << endl;
	cin >> a;
	cout << "enter the velociy" << endl;
	cin >> b;
	area(a);
	area(a, b);
		system("pause");
}