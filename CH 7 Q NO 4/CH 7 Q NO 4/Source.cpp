#include<iostream>
using namespace std;
void maxint(int a[10])
{
	int max;
	int b;
	max = a[0];
	for (int i = 0; i < 10; i++)
	{
		if (max < a[i])
		{
			b = a[i];
		}
	}
	cout << "Largerst number is " << b << endl;
}

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	maxint(a);
}