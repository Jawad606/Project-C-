#include<iostream>
using namespace std;

int main()
{
	int x, y, z;
	cout << "Enter 3 values" << endl;
	cin >> x >> y >> z;
	if (x > y && x > z)
		cout << "Maximum value is " << endl << x;
	else if (y > x && y > z)
		cout << "Maximum value is " << endl << y;
	else
		cout<< "Maximum value is " << endl << z;

}