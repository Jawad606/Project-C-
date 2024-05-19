#include<iostream>
#include<string>
using namespace std;
int main()
{

	char a[20];
	cout << "Enter the string" << endl;
	cin.get(a, 20);
	_strlwr_s(a);
	cout << a << endl;
	_strupr_s(a);
	cout << a << endl;
	_strrev(a);
	cout << a << endl;
}