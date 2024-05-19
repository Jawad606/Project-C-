#include<iostream>
using namespace std;
void centri(int m, int v, int r)
{
	float k;
	cout << "the value of centripetal force is" << endl;
	k = (m * v * v) / r;
	cout << k << endl;

}
void centri(int m, float n)
{
	float b;
	b = 0.5 * m * n * n;
	cout << b << endl;

}
void centri()
{

}
int main()
{
	int a,  c;
	float b;
	
	cout << "enter value of mass" << endl;
	cin >> a;
	cout << "enter value of velocity" << endl;
	cin >> b;
	cout << "enter value of radius" << endl;
	cin >> c;
	centri(a, b, c);
	centri(a, b);
	centri();
	
}