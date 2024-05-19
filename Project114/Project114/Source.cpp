#include<iostream>
using namespace std;
struct a
{
	int a[1][2][3];
};
int main()
{
	a b;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cin >> b.a[i][j][k];
			}

		}
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				cout << b.a[i][j][k];
			}
			cout << endl;
		}
	}cout << endl;
}