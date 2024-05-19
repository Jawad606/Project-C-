#include<iostream>
#include<string>
using namespace std;
int main()
{
string line;


	int b, c, d,v;
	b = 0;
	cout << "Enter the LIne" << line<<endl;
	getline(cin, line);
	int h = 0; 
	if(h <= line.length())
		switch (h)
		{
		case 'a':
			b++;
		case'eE':
			b++;
		case'iI':
			b++;
		case'oO':
			b++;
		case'Uu':
			b++;
		default:
			if (line[h] >= 0 && line[h] <= 9)
				h *= 10;
			cout << endl;
			h++;

		}


	

}