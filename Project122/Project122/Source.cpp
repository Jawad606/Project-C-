#include<iostream>
using namespace std;
void area(float a)
{
	float k;
	k=0.5 * a;
	cout << "value of J is:" <<k << endl;
}
void area(int c, int b)
{
	int k;
	k = 0.5 * c * b;
	cout << "value od D is" << k << endl;
}
void main()
{
	int l, j;
	cout << "value of l " << endl;
	cin >> l;
	cout << "value of j" << endl;
	cin >> j;
	area(l);
	area(l, j);
	system("pause");

}