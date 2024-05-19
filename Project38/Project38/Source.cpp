#include<iostream>
using namespace std;
int main()
{
	for (int a = 1; a < 6; a++)
	{
		for (int b = 1; b < 6; b++)
		{
			if (a == 1 && b == 3)
			{
				cout << "*";
			}
			else if (a == 2 && b == 2 || a == 2 && b == 4)
			{
				cout << "*";
			}
			

			else if (a==3 && b==1 || a==3 && b==5)
			{
				cout << "*";
			}
			
			else if (a == 4 && b == 2 || a == 4 && b == 4)
			{
				cout << "*";
			}
			
			 else if (a == 5 && b == 3)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
			
		}
		cout << endl;
	}

}