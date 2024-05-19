#include<iostream>
using namespace std;
void distance(int a, int b)
{
	if (a > b)
		cout << "A is lager" << a << endl;
	else if (a < b)
		cout << "B is lager" << b << endl;
}
int main()
{
	int c, d;
	cout << "Enter two number" << endl;
	cin >> c >> d;
	
	distance(c, d);
}