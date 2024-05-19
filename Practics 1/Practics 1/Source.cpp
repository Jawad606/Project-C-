#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter the number ";
	cin >> a >> b >> c;
	if (a < 0)
		cout << "A=";
	else if (b < 4)
		cout << "b";
	else if (c < 5)
		cout << "c";
	else
		cout << "Fail";

}