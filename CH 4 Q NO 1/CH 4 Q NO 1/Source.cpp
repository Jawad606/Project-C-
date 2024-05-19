#include<iostream>
using namespace std;
struct phone
{
	int code;
	int exchange;
	int number;
};
int main()
{
	phone p;

	cout << "Enter the area code, exchange and the number " << endl;
	cin >> p.code;
	cout << endl;
	cin >> p.exchange;
	cout << endl;
	cin >> p.number;
	cout << "My number is (212) 767-8900" << endl;
	cout << "Your number is " << p.code << " " << p.exchange << "-" << p.number << endl;

}