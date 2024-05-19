#include<iostream>
using namespace std;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (i == 0 && j == 3)
			{
				cout << "*";
			}
			else if(i==1 && j==2 || i==1 && j==3 || i==1 && j==4 )
			{
				cout << "*";
			}
			else if (i == 1 && j == 2 || i == 1 && j == 3 || i == 1 && j == 4)
			{
				cout << "*";
			}
			else if (i == 2 && j == 1 || i == 2 && j == 2 || i == 2 && j == 3 || i == 2 && j == 4 || i == 2 && j == 5)
			{
				cout << "*";
			}
			else if (i == 3 && j == 0 || i==3 && j==1 || i == 3 && j == 2 || i == 3 && j == 3 || i == 3 && j == 4 || i == 3 && j == 5 || i == 3 && j == 6 )
			{ 
					cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}
}
