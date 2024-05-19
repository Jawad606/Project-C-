#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a;
	int b = 1;
	int c;
	cout << "Enter the number:" << endl;
	cin >> a;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			c=a*b++;
			cout<<setw(6) << c<<" ";
		}
		cout << endl;
	}
}