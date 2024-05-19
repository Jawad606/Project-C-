#include<iostream>
#include<string>
using namespace std;
int main()
{
	string ms, ss;
	cout << "Enter the main string" << endl;
	getline(cin, ms);
	cout << "Enter the sub string" << endl;
	getline(cin, ss);
	int ii;
	for (int i = 0; i < ms.length(); i++)
	{
		if (ss.at(0) == ms.at(i))
			int ii = i;
		for (int j = 0; j < ss.length(); j++)
		{
			int ii = i;
			if (ms.at(ii) == ss.at(j))
			{
				if (j == ss.length() - 1)
				{
					cout << "String Found" << endl;
					
				}
			}
			
			ii++;
		}

	}


}