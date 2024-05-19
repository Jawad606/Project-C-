#include<iostream>
using namespace std;
int main()
{
	int a[5] = { 31,54,77,52,93 };
	int* p[5];

	for (int j = 0; j < 5; j++)
	{
		cout << a[j] << endl;
		p[j] = &a[j];
	}
	for (int j = 0; j < 5; j++)
	{
		cout <<*p[j] << endl;
	}
}