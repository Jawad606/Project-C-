#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;
	char ch;
	int k, j = 0;
	k = 0;
	cout << "enter word and seprate them with ',' and comma must be at last" << endl;
	getline(cin, name);

	for (int i = 0; i < name.length(); i++)
	{
		if (name.at(i) != '/0')
		{

			ch = name.at(i);
			switch (ch)
			{
			case 'A':
			case 'a':
			{
				k = k + 1;
				cout << k << endl;
				break;
			}
			case 'E':
			case 'e':
			{
				k = k + 1;

				break;
			}
			case 'I':
			case 'i':
			{
				k = k + 1;
				break;
			}
			case 'O':
			case 'o':
			{
				k = k + 1;
				break;
			}
			case 'U':
			case 'u':
			{
				k = k + 1;
				break;
			}
			}
			cout << name.at(i);
			if (name.at(i) == ',')
				cout << k;
		}
		else
		{
			cout << " : " << k << endl;
			j = j + k;
			k = 0;

		}

	}

	cout << endl << "The word contain " << j << " Vowels" << endl;
	system("pause");
}



