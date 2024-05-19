#include<iostream>
using namespace std;

int main()
{
	const int a = 10;
	int b[a];
	int max=0, min=0;
	for (int i = 0; i < a; i++)
	{
		cout << "Enter the Number to be compare" << endl;
		cin >> b[i];
	}
	for (int i = 0; i < a; i++)
	{
		if (max< b[i])
		{
			max = b[i];
		}
	}

	cout << "Maximum is: " << max << endl;
}
