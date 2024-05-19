#include<iostream>
using namespace std;
int main()
{
	int a[4];

	for (int i = 0; i < 4; i++)
	{
		cout << "Enter the number" << endl;
		cin >> a[i];

	}
	float b;
	b = 0;
	for (int i = 0; i < 4; i++)
	{
		
		b += a[i];
		cout << "Total Sum: " << b << endl;

	}
	float c = b / 4;
	cout << "Average is  " <<c<< endl;
}