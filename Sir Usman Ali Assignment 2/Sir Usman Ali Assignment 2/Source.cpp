#include<iostream>
using namespace std;

int main()
{
	int operation, num1, num2,result;
	cout << "Enter First number" << endl;
	cin >> num1 >> num2;
	cout << "*,+,-,/" << endl;
	cin >> operation;
	switch (operation)
	{
	case '+':
		result = num1 + num2;
		cout << result << endl;
		break;

	case '-':
		result = num1 - num2; cout << result << endl; break;

	case '*':
		result = num1 * num2;
		cout << result << endl;
		break;

	case '/':

		if (num2 == 0)
		{
			cout << "num2 cannot be zero - division with zero is not possible!\n";
		}
		else {
			result = num1 / num2;
		}
		cout << result << endl;

		break;




	default:
		cout << "message!" << endl;
		break;
	}

}