#include<iostream>
using namespace std;
int main()
{
	int a[1][2][1][2];
	cout << "Enter the number  " << endl;
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 1; k++)
			{
				for (int l = 0; l < 2; l++)
				{
					cin >> a[i][j][k][l];
				}
			}
		}
	}
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 1; k++)
			{
				for (int l = 0; l < 2; l++)
					cout << "Number is" << a[i][j][k][l] << endl;
			}
		}
	}
}
