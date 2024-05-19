#include<iostream>
using namespace std;
void power(int a, int b)
{
	int c=1;
	for (int i = 1; i <= b; i++)
	{
		c *= a;
		cout << c << endl;
	}
	cout << "THe power is " << c << endl;

}
int main()
{
	int k;
	int y;
	cout << "Enter the number" << endl;
	cin >> k;
	cout << "Enter the power" << endl;
	cin >> y;
	power(k, y);
}
