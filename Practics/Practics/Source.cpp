#include<iostream>

using namespace std;
int main()
{
	float m;
	cout << "Enter number" << endl;
	cin >> m;
	if (m>=90 && m<=100)
		cout << "A+" << endl;
	else if(m>=80 && m<=90)
		cout << "B+" << endl;
	else if (m>=70 && m<=80)
		cout << "C+" << endl;
	else if (m>=60 && m<=70)
		cout << "D+" << endl;
	else if (m>=50 && m<=60)
		cout << "E+" << endl;
	else
		cout << "F" << endl;


	
	
	
	
	system("pause");
}