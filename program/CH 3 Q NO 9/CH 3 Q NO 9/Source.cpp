#include<iostream>
using namespace std;
int main()
{
	int c, g, temp = 1;
	cout << "Enter the guest " << endl;
	cin >> g;
	cout << "Enter the chair " << endl;
	cin >> c;
	if (g > c)
	{
		for (int i = 1; i <= c; i++)
		{
			temp *= g;
			--g;
		}
	}
	cout << "Number of possible arrangements are: " << temp;
}