#include<iostream>
using namespace std;
struct liner
{
	int a[2][2];
};
int main()
{
	liner a;
	cout << "Enter the numbers" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> a.a[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << a.a[i][j]<<"\t";
		}
		cout  <<endl;
	}
	int c;
	cout << "Enter the number to be search" << endl;
	cin >> c;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (a.a[i][j] == c)
			{
				cout << "in the row" << i << "\n in the colume" << j << endl;
			}
		}
	}
}