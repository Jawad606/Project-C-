#include <iostream>
using namespace std;
int main()
{
	int i, j, n, l,a;
	cout << "Enter the starting point: " << endl;
	cin >> a;
	cout << "Enter the Range : " << endl;
	cin >> n;
	
	if (a >= 2)
	{

		for (i = a; i <= n; i++)
		{
			l = 1;
			for (j = 2; j <= i / 2; j++)
			{
				if (i % j == 0)
				{
					l = 0;
					break;
				}
			}if (l == 1)
				cout << i << ",";
		}
	}
	else
		cout << "1 is not a Prim number so \n Please Start from 2" << endl;
}