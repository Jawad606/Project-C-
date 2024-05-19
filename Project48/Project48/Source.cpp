#include <iostream>
#include<string>
using namespace std;
int main()
{
	string line;
	int vowelsA, vowelsE, vowelsI, vowelsO, vowelsU,w;
	vowelsA = vowelsE = vowelsI = vowelsO = vowelsU=w=0;
	cout << "Enter a line of string: ";
	getline(cin,line);
	for (int i = 0; i<=line.length(); ++i)
	{
		if (line[i] == 'a' || line[i] == 'A')
		{
			++vowelsA;
		}
		else if (line[i] == 'e' || line[i] == 'E')
		{
			vowelsE++;
		}
		else if (line[i] == 'i' || line[i] == 'I')
		{
			++vowelsI;
		}
		else if (line[i] == 'o' || line[i] == 'O')
		{
			++vowelsO;
		}
		else if (line[i] == 'u' || line[i] == 'U')
		{
			++vowelsU;
		}
		


	}
	cout << "VowelsA: " << vowelsA << endl;
	cout << "vowelsE: " << vowelsE<< endl;
	cout << "vowelsI:" << vowelsI<< endl;
	cout << "vowelsO:" << vowelsO << endl;
	cout << "vowelsU:" << vowelsU<< endl;
	
	
	return 0;
}