#include<iostream>
using namespace std;
int main()
{
	int a, b;
	b = 4;
	for (a = 1; a <= 5; a++)
		if (a == b)
			cout <<"b"<< endl;
		else
			cout <<"a"<< endl;
	a++;
}