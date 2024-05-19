#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1, s2;
	cout << "Enter the line" << endl;
	getline(cin, s1);
	cout << "Enter the substring" << endl;
	getline(cin, s2);
	int l;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1.at(i) == s2.at(0))
		{
			int l = i;
			for (int j = 0; j < s2.length(); j++)

			{
				
				if (s1.at(l) == s2.at(j))
				{
					if (j == s2.length() - 1)
					{
						
							cout << "String found" << endl;
						
					}else
					{
						j = s2.length();
					}

				}l++;

				
				
				
			}

		}
	}
}