#include<iostream>
using namespace std;
struct person
{
	int age;
	float weight;
};
int main()
{
	person p1, p2;
	int* p3;
	cout << "Enter the age" << endl;
	cin >> p1.age;
	cout << "Enter the weight" << endl;
	cin >> p1.weight;
	p3 = &p1.age;
	cout << p3 << endl;
	cout << *p3 << endl;
}