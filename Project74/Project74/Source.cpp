#include<iostream>
#include<string>
using namespace std;
void reversit(string s1)
{
	string s2;
	s2 = "";
	for (int i = s1.size() - 1; i >= 0; --i)
	{
		s2 = s2 + s1[i];
	}

	cout << s2 << endl;

}

int main()
{
	const int MAX = 6;
	string s[MAX];
	
	cout << "Enter the string " << endl;
	getline(cin,s[1]);
	reversit(s[1]);
}