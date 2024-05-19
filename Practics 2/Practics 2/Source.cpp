#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	a = 1;
	cout << " enter the nuber" << endl;
	cin >> b;
	if (!(a <= 1))
		cout << " not a Prime number" << endl;
	while (a % b == 0)
		if (b / 2 == 0)
			cout << " not a Prime number" << endl;
		else
			cout << " a Prime number" << endl;
	b++;





}