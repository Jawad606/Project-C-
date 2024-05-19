#include<iostream>
using namespace std;

void show(float a[4])
{
	double k;


	for (int i = 0; i < 1; i++)
		k = 3.14 * a[i] * a[i];
	cout << "Area of circle is  " << k<<endl;
}
int main()
{
	float c[2];
	
	cout << "Enter the radius" << endl;
	for (int i = 0; i < 1; i++)
	{

		cin >> c[i];
}

	show(c);
}