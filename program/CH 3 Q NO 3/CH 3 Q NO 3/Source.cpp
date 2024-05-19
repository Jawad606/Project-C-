#include<iostream>
using namespace std;
int main()
{
	float a, b;
	int choise;
	cout << "Type 1 to convert Farhrenheit to Celsius\n2 to convert Celsius to Farhrenheit" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
	{
		cout << "Enter the temperature in Fahrenheit" << endl;
		cin >> a;
		cout <<"In Celsius that's"<< (a - 32) * 5 / 9;
		break;
	}
	case 2:
	{
		cout << "Enter the temperature in Celsius" << endl;
		cin >> b;
		cout << "In Fahrenheit that's " << (b*9/5)+32;
		break;
	}
	}
}