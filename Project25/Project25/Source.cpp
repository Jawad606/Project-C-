#include<iostream>

using namespace std;

int main()
{
	int i, j;
   
	i = 1;


	while (  i <= 6)
	{ 
		 j= 1;
		while ( j <= 6 )
		{
			if (i == 1 && j == 3)
			{
				cout << "*";	
			}
			else if (i == 2 && j == 2 || i == 2 && j == 4)
			{
				cout << "*";
				
			}
			else if (i == 2 && j == 4)
			{
				cout << "*";
				
			}
			else if (i == 3 && j == 1 || i == 3 && j == 5)
			{
				cout << "*";
				
			}
			else if (i == 4 && j == 2 || i == 4 && j == 4)
			{
				cout << "*";
				
			}
			else if (i == 5 && j == 3)
			{
				cout << "*";
				
			}
			else
			{
				cout << " ";
				
			}
			j++;
		}
		i++;
      cout << endl;
		
	
	}
	
		
	return 0;
}
