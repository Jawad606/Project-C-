#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int* p[5];
	int avg = 0;
	int sum=0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
		sum += a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		p[i] = &a[i];
		avg = sum / 5;
		cout << *p[i] << endl;
	}
	cout << "Average is " << avg << endl;
}