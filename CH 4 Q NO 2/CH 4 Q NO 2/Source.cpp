#include<iostream>
using namespace std;
struct point
{
	int x;
	int y;
};
int main()
{
	point p1, p2, p3;
	cout << "Enter the first points" << endl;
	cin >> p1.x >> p2.x;
	cout << "Enter the second points " << endl;
	cin >> p1.y >> p2.y;
	
	p3.x = p1.x + p2.y;
	p3.y = p1.y + p2.y;
	cout << "THe sum of X coordinate" << p3.x << endl;
	cout << "THe sum of y coordinate" << p3.y << endl;
}