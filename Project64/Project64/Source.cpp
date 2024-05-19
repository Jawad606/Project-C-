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
		if (s1.at(i) == 'a' || s1.at(i) == 'A')
		{
			n++;
		}
		else if (s1.at(i) == 'e' || s1.at(i) == 'E')
		{
			m++;
		}
		else if (s1.at(i) == 'i' || s1.at(i) == 'I')
		{
			s++;
		}
		else if (s1.at(i) == 'u' || s1.at(i) == 'i')
		{
			g++;
		}
	}
	cout << n << endl;
	cout << m << endl;
	cout << s << endl;

}
