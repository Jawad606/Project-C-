#include<iostream>

using namespace std;
int main()
{

	float m;
	cout << "\n\tEnter number" << endl;
	cin >> m;
	if (m >= 91 && m <= 100)
		cout << "\n\tYour grade is A+\n\t keep it up" << endl;
	else if (m >= 81 && m <= 90)
		cout << "\n\tYour grade is B\n\t keep it up" << endl;
	else if (m >= 71 && m <= 80)
		cout << "\n\tYour grade is C\n\t Do more hard work" << endl;
	else if (m >= 61 && m <= 70)
		cout << "\n\tYour grade is D\n\t Do more hard work" << endl;
	else if (m >= 51 && m <= 60)
		cout << "\n\tYour grade is E\n\t ani diya mazk ae" << endl;
	else if (m <= 50 && m>=1)
		cout << "\n\tYour grade is F\n\t tum to bhai lg gae" << endl;
	else
		cout << "\n\tinvalid\n\t chaval sai number dus " << endl;




	system("pause");
}