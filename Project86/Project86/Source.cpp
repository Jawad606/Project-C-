#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int six = 4;
	string m[six];
	int i;
	for (i = 0; i < six; i++)
	{
		cout << "Enter the name:  " << endl;
		getline(cin, m [i]);
	}
	for (i = 0; i < six; i++)
	{
		cout << "Name:  " << m [i]<<endl;
		
	}
}