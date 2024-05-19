#include<iostream>
using namespace std;

int main()

{
	float c;
	cout << "Enter the radius " << endl;
	cin >> c;
	cirarea(c);
	return 0;
}
void cirarea(float k)
{
	float a;
	a = 3.14 * k * k;
	cout << "Area of circle is =" << a << endl;
}