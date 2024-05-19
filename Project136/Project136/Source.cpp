#include<iostream>
using namespace std;
float area(float *r)
{
	float k=0;
	k = 3.14 * *r * *r;
	return k;
	
}
int main()
{
	
	float a;
	cout << "ENTER THE RADIUS " << endl;
	cin >> a;
	area(&a);
	cout << "area of cirlce is " << area(&a) << endl;
}