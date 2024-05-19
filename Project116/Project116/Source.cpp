#include<iostream>
using namespace std;
int main()
{
	int a[50];
	for (int i = 0; i < 50; i++)
	{
		cin >> a[i];
	}
	
	int b = 25;
	int p;
	int c = 50;
	cout << "The square is " << endl;
	for (int i = 0; i < 50; i++)
	{
		if (i < 25)
		{
			p=a[i] * a[i];
			cout << p << endl;
		}
	}
	cout << "The Cube  is " << endl;
	for (int i = 0; i < 50; i++)
	{
		if (25<=i && i<50)
		{
			p = a[i] * a[i] * a[i];
			cout << p << endl;
		}
	}
}