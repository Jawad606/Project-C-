#include<iostream>
using namespace std;
class student
{
private:
	int a, b;
public:
	void in()
	{
		cout << "Enter the two number" << endl;
		cin >> a >> b;
	}
	void add()
	{
		int c = a + b;
		cout << c;
	}
	float area(float r)
	{
		float a = 3.14 * r * r;
		return a;
	}
};
int main()
{
	student s;
	float x, k;
	cout << "Enter the radius" << endl;
	cin >> k;
	s.in();
	s.add();
	x = s.area(k);
	cout << "Area if circle is " << x << endl;
}