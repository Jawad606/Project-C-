#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1[3][5];
	int i,j;
	cout << "Enter the String " << endl;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			getline(cin, s1[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "Strings are " << s1[i][j] << endl;
			
		}
	}
}