#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1;
	cout << "Ente the line" << endl;
	getline(cin, s1);
	int n, m, s, g, h;
	n = m = s = g = h = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == 'a' || s1[i] == 'A')
		{
			n++;
		}
	}
	cout << n << endl;
}
