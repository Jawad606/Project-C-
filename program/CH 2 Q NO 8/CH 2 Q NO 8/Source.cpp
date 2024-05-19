#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	int e,f;
	cout << "Enter the first fraction " << endl;
	cin >> a >> b;
	cout << "Enter the second fraction " << endl;
	cin >> c >> d;
	e  = (a * d) + (b * c);
	f = b * d;
	cout << "Sum= " << e << "/" << f << endl;
}