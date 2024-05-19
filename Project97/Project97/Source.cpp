#include<iostream>
using namespace std;
int main()
{
	int a[2][2][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				cin >> a[i][j][k];
			}
		}
	}
	cout << "You enter" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << a[i][j][k] <<"\t";
			}
			cout << endl;
		}
		cout << endl;
	}
	int s;
	int b = 0;
	cout << "Enter the value to be search" << endl;
	cin >> s;

	for (int i = 0; i < 2; i++)
	{
		for (int j= 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				if (a[i][j][k] == s)
				{
					cout <<"["<< i << "]" << "[" << j << "]" << "[" << k<<"]"<<endl;
				}
				else
				{
					cout << "not found" << endl;
				}
			}
		}
	}	
}