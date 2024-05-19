#include<iostream>
using namespace std;
int main()
{
	int a, b, c, mid;
	cout << "Enter the lines" << endl;
	cin >> a;
	if (a % 2 == 1)
		a ++ ;
	mid = (a / 2);
	for (b = 1; b <= mid; b++)
	{
		for (c = 1; c < mid - 1; c++)
			cout << " ";
		if (b == 1)
			cout << "*";
		else
		{
			cout << "*";
			for (b = 1; b <= 2 * a - 1; b++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}



}