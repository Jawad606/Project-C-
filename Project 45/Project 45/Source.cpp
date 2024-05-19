#include <iostream> 

using namespace std;

int main() 
{
	int m;
	cout << "Enter the Marks" << endl;
	cin >> m;
	
	switch (m)
	{
	case 1:
	{
		if ((m >= 80) && (m <= 100))
		{
			cout << " Your Average is: " << m << endl;
			cout << "You Grade is A+ " << endl;

			break;
		}
	case 2:
	{
		if ((m >= 70) && (m <= 79))
		{
			cout << " Your Average is: " << m << endl;
			cout << " Your grade is A " << endl;
		}
		break;       }
	case 3: {
		if ((m >= 60) && (m <= 69))
		{
			cout << " Your Average is: " << m << endl;
			cout << " Your Grade is B+  " << endl;
		}
		break;

	}       case 4: {
		if ((m >= 50) && (m <= 59))
		{
			cout << " Your Average is: " << m << endl;
			cout << " Your Grade is C+ " << endl;
		}
		break;       }
	case 5: {
		if ((m >= 40) && (m <= 49))
		{
			cout << " Your Average is: " << m << endl;
			cout << " Your Grade is  C- ! " << endl;
		}
		break;           }
	case 6: {
		if ((m >= 30) && (m <= 39))
		{
			cout << " Your Average is: " << m << endl;
			cout << " Your Grade is  D ! " << endl;
		}
		break;        }

	default: {
		if ((m >= 100) && (m <= 29))
		{
			cout << " Your Average is: " << m << endl;
			cout << " Your Grade is  F, So you are Fail in the class ! " << endl;
			break;
		}
	}
	}
	}
	system("pause");
}