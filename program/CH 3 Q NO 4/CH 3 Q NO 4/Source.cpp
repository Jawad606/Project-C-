#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char o, ch;
	do
	{
		cout << "Enter the first number ,operator,second number" << endl;
		cin >> a >> o >> b;
		switch (o)
		{
		case '+':
			cout << "\nAnswer = " << a + b;
			break;

		case '-':
			cout << "\nAnswer = " << a - b;
			break;

		case '*':
			cout << "\nAnswer = " << a * b;
			break;

		case '/':
			cout << "\nAnswer = " << a / b;
			break;

		default:
			cout << "\nInvalid Input! ";
		}
		cout << "\n\nDo You Want Another, Press(y/n): ";
		cin >> ch;
	} while (ch != 'n');
}