#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char a;
	int b;
	cout << "Enter a Word" << endl;
	cin >> a;
	b = islower(a);
	cout << b << endl;
	
}