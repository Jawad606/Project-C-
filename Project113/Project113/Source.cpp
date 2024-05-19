#include<iostream>
using namespace std;
struct a
{
	int a[2][5];
};
int main()
{
	a b;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> b.a[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout<< b.a[i][j];
		}
		cout << endl;
	}
}