#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout << "Enter the value" << endl;
	cin >> a>>b>>c>>d;
	if (a > b)
		cout  <<a<< endl;
	else if (a>c)
		cout << "better";
	else if (a>d)
		cout << "best" << endl;
	else
		cout << "not good" << endl;

	system("pause");

}