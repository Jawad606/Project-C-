#include<iostream>
using namespace std;

double power(double, int p= 2);
char power(char, int p= 2);
int power(int, int p= 2);
long power(long, int p= 2);
float power(float, int p= 2);

int main() {
	double num1;
	char num2;
	int num3;
	long num4;
	float num5;

	cout << "\nEnter a double vale for power calculation: ";
	cin >> num1;
	cout << "Power of " << num1 << " is: " << power(num1);

	cout << "\n\nnEnter a char value for power calculation: ";
	cin >> num2;
	cout << "Power of " << num2 << " is: " << power(num2);

	cout << "\n\nEnter a int value for power calculation: ";
	cin >> num3;
	cout << "Power of " << num3 << " is: " << power(num3);

	cout << "\n\nEnter a long value for power calculation: ";
	cin >> num4;
	cout << "Power of " << num4 << " is: " << power(num4);

	cout << "\n\nEnter a float value for power calculation: ";
	cin >> num5;
	cout << "Power of " << num5 << " is: " << power(num5);

	cout << endl;

	return 0;
}

double power(double dd, int p)
	{
	double power = 1;
	for (int i = 1; i <= p; i++)
		power *= dd;
	return power;
	}


char power(char ch, int p) 
{
	char power = 1;
	for (int i = 1; i <= p; i++)
		power *= ch;
	return power;
}


int power(int no1, int p)
	{
	int power = 1;
	for (int i = 1; i <= p; i++)
		power *= no1;
	return power;
}


long power(long numb, int p) 
{
	long power = 1;
	for (int i = 1; i <= p; i++)
		power *= numb;
	return power;
}


float power(float number, int p) {
	float power = 1.0;
	for (int i = 1; i <= p; i++)
		power *= number;
	return power;
}