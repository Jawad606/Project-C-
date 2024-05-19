#include<iostream>
using namespace std;
struct employee
{
	int number;
	float dollar;
};
int main()
{
	employee ep1, ep2, ep3;
	cout << "Enter the first employee number";
	cin >> ep1.number;
	cout << "Enter the compensation $" << endl;
	cin >> ep1.dollar;
	cout << "Enter the Second employee number";
	cin >> ep2.number;
	cout << "Enter the compensation $" << endl;
	cin >> ep2.dollar;
	cout << "Enter the third employee number";
	cin >> ep3.number;
	cout << "Enter the compensation $" << endl;
	cin >> ep3.dollar;
	cout << "Emplyee No " << ep1.number << endl;
	cout << "Employee compensation $" <<ep1.dollar <<endl;
	cout << "Emplyee No " << ep2.number << endl;
	cout << "Employee compensation $" << ep2.dollar << endl;
	cout << "Emplyee No " << ep3.number << endl;
	cout << "Employee compensation $" << ep3.dollar << endl;
}