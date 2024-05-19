#include<iostream>
using namespace std;
void mdy(int k, int l, int m)
{
	cout << "Time is: " << k << ":" << l << ":" << m << endl;
}
int main()
{
	int d, s, f;
	cout << "Enter the time In format\nhh/dd/ss" << endl;
	cout << "Enter the Hour" << endl;
	cin >> d;
	cout << "Enter the Mint" << endl;
	cin >> s;
	cout << "Enter the second" << endl;
	cin >> f;
	if (d >= 1 && d <= 12)
	{
		if (s >= 1 && s <= 60)
		{
			if (f >= 1 && f <= 60)
			{
				mdy(d, s, f);
			}
			else
				cout << "Invalid entry" << endl;

		}
		else
			cout << "Invalid entry" << endl;

	}
	else
		cout << "Invalid entry" << endl;
			

		
	
}