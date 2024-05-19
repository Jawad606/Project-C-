#include<iostream>
using namespace std;

int main()
{
	int a, b;

	cout << "Enter the Value" << endl;
	cin >> a;
	b = 2;
	a = 1;
	while (a <= 20)
		if (a % b == 0)
			break;
	b++;
	


}