#include<iostream>
using namespace std;
struct a
{
	int a;
	int b;
	int* c;
};
int main()
{
	a t;
	int a;
	cout << "Enter the numbers" << endl;
	cin >> t.a >> t.b;
	a = t.a + t.b;
	t.c = &a;
	cout << t.c << endl;
	cout << *t.c << endl;

}