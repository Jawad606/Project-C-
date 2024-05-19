#include<iostream>
using namespace std;
void cirarea(float r)
{
	float k;
	k = 3.14 * r * r;
	cout << "The area of circle is " << k<<endl;
}
int main()
{
	int b;
	cout << "Enter the radius " << endl;
	cin >> b;
	cirarea(b);
}