#include<iostream>
using namespace std;

struct point_to_model_a_point
{
	int x;
	int y;
};
int main()
{
	point_to_model_a_point p1, p2;

	cout << "Ente the X-coordinate" << endl;
	cin >> p1.x;
	cout << "Enter the Y-coordinate" << endl;
	cin >> p1.y;
	cout << "Ente the X-coordinate" << endl;
	cin >> p2.x;
	cout << "Enter the Y-coordinate" << endl;
	cin >> p2.y;

	cout << "Coordiante p1+p2=" << p1.x + p2.x << " " << p1.y + p2.y << endl;
	return 0;
}
