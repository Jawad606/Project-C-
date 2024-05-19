#include<iostream>

using namespace std;
int main()
{
	float m;
	cout << "Enter number" << endl;
	cin >> m;
	if (m >= 91 && m <= 100)
		cout << "A" << endl;
	else if (m >= 81 && m <= 90)
		cout << "B" << endl;
	else if (m >= 71 && m <= 80)
		cout << "C" << endl;
	else if (m >= 61 && m <= 70)
		cout << "D" << endl;
	else if (m >= 51 && m <= 60)
		cout << "E" << endl;
	else if (m <= 50)
		cout << "You ae fail" << endl;
	else
		cout << "invalid number" << endl;





	system("pause");
}