#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout << "Enter the line" << endl;
	getline(cin, s1);
	cout << "Enter the word to find" << endl;
	getline(cin, s2);
	
	for (int i = 0; i < s1.length(); i++)
	{
		
		if (s2.at(0) == s1.at(i))
		{
			int ii = i;
			for (int j = 0; j < s2.length(); j++)
			{
				if (s1.at(ii) == s2.at(j))
				{
					if (j == s2.length() - 1)
					{
						cout << "String found " << endl;
					}
				}
				else
				{
					j = s2.length();
				}
				ii++;
			}
		}

	}

}