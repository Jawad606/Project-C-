#include<iostream>
using namespace std;
void area(float r)
{
	float a;
	a = 3.14 * r * r;
	cout << "radis is :" << a << endl;
}
int main()
{
	float k;
	cout << "Enter the radius" << endl;
	cin >> k;

	area(k);
}