#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1[2][2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 2; k++)
			{
				cout << "Enter the stirng  " << endl;;
				getline(cin, s1[i][j][k]);
			}
		}
	}
	cout << "Rever string is  " << endl;;
	for (int i = 1; i >= 0; --i)
	{
		for (int j = 1; j >= 0; --j)
		{
			for (int k = 1; k >= 0; --k)
			{
				cout << s1[i][j][k] ;;
			}
		}
	}
}