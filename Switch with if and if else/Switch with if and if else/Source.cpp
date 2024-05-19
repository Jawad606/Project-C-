#include<iostream>

using namespace std;

int main()
{
	int m;
	cout << "Enter marks:" << endl;

	cin >> m;
	
	switch (m)
	{
	case 90:
	
		if (m < 80)
		{
			cout << "m" << endl;
		}
		else
		{
			cout << "n" << endl;
		}
	
	break;
	case 80:
		if (m < 70)
		{
			cout << "Y" << endl;
		}
		else
		{
			cout << "t" << endl;
		}

		break;

	default:
		cout << "your number is wrong" << endl;

	}
	system("pause");

	}