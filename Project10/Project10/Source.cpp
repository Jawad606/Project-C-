#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter three number" << endl;
	cin >> a >> b >> c;
	if (a == b)
	{

		if (a == c)
			cout << "wao" << endl;
		else
			cout << "good" << endl;
	}

	else
		cout << "Great" << endl;
	system("pause");
}