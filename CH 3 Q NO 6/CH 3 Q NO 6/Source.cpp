#include<iostream>
using namespace std;
int main()
{
	double n;
	
	do
	{
		cout << "Enter the number" << endl;
		cin >> n;
		int a = 1;
		
		for (int i = 1; i <= n; i++)
		{
			a = a * i;
		
		}
		if (a != 1)
		{
			cout << "Factorial of " << n<< " is " << a <<endl;
		}
	} while (n != 0);


}