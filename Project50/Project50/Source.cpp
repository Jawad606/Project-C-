#include<iostream>
using namespace std;
double power(double n, int p)
{
	double result = 1.0;
	for (int j = 0; j < p; j++)
		result = result * n;
	return result;
}
int main()
{
	double number, answer;
	int pow;

	cout << "Enter the number " << endl;
	cin >> number;
	cout << "enter the power" << endl;
	cin >> pow;
	answer = power(number,pow);
	cout << "Answer is " << answer<<endl;
	return 0;
}