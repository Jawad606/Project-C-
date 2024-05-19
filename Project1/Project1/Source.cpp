#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	cout << "Enter the name" << endl;
	getline(cin, n);
	if (n >= "a" && n <= "d")
		cout << "\n\tALI" << endl;
	else if (n >= "e" && n <= "h")
		cout << " \n\tmatched" << endl;
	else if (n >= "i" && n <= "l")
		cout << "\n\tGood" << endl;
	else if (n >= "m" && n <= "p")
		cout << "\n\tbetter" << endl;
	else if (n >= "q" && n <= "t")
		cout << "\n\tbest" << endl;
	else if (n >= "w" && n <= "z")
		cout << "\n\tExcellent" << endl;
	else
		cout << "\n\tInvalid Charater" << endl;
	
	system("pause");
}