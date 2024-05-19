#include<iostream>
using namespace std;
int main()
{
	int o;
	int a[4][2];
	
	cout << " Enter these value: " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> a [i][j];
		}
	}
	cout << "You enter these value: " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << a [i][j]<<"\t";
			
			
		}
		cout << endl;
	}
	int s;
	cout << "Enter the value to ne search" << endl;
	cin >> s;
	int b = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			if (a[i][j] == s)
			{
				cout << "found" << s << " at " << i << " " << j << endl;
			}
		}
		
	}

}