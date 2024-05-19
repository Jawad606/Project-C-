#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		
		for (j = 1; j <= 5; j++)
		{
			
			if (i == 1 && j == 1 || i == 1 && j == 4)
			{
				cout << "*";
			}

			else if (i == 1 && j == 2)
			{
				cout << "1";
			}
			else if (i == 1 && j == 3)
				cout << "2";
			else if (i == 2 && j == 1 || i == 2 && j == 4)
				cout << "1";
			else if (i == 3 && j == 1 || i == 3 && j == 4)
				cout << "2";
			else if (i == 4 && j == 1 || i == 4 && j == 4)
				cout << "*";
			else if (i == 4 && j == 2)
			{
				cout << "1";
			}
			else if (i == 4 && j == 3)

				cout << "2";
			
			
			else
				cout << " ";
		}

		
		cout << endl;
	}

	return 0;
}