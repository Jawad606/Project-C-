#include<iostream>

using namespace std;

int main()
{
	int m;
	cout << "Enter marks:" << endl;
	cin >> m;
	switch (m)
	{
	case 90:
		cout << "A grade" << endl;
		break;
	case 80:
		cout << "B grade" << endl;
		break;
	case 70:
		cout << "C grade" << endl;
		break;
	default:
		cout << "fail" << endl;


	}
	system("pause");
}