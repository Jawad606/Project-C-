#include<iostream>
using namespace std;
void  cirarea(float k)
{
	float a;
	a = 3.14 * k * k;
	cout << "Area of radius is " << a << endl;

}
int main()
{
	float r;
	cout << "Enter the valus of Radius: " << endl;
	cin >> r;
	cirarea(r);
	return 0;
		


}