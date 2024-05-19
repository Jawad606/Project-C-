#include<iostream>
using namespace std;
void show(int m, int v)
{
	float k;
	k = 0.5 * m * v * v;
	cout << k << endl;
}
void main()
{
	int a, b;
	cout << "Enter the value of mass" << endl;
	cin >> a;
	cout << "Enter thwe value of velocity" << endl;
	cin >> b;

	show(a, b);


}
