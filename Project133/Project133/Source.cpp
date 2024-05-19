#include<iostream>
using namespace std;
class Int
{
private:
	int value1,value2;
public:
	void in()
	{
		cout << "Enter the value :" << endl;
		cin >> value1>>value2;
	}
	int out()
	{
		int c = value1 + value2;
		return c;
	}
};
int main()
{
	int b;
	Int i1;
	i1.in();
	i1.out();
	b = i1.out();
	cout << b << endl;
}