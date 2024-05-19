#include <iostream>
using namespace std;
int main()
{
	for (int a = 1; a < 6;a++)
		
	{
		for (int b = 1; b < 6; b++)
		{
			switch (a,b)
			{
			case 1:
				if (a == 1 && b == 3)
				{
					cout << "*";
				}
			case 2:
				if (a == 2 && b == 2 || a == 2 && b == 4)
				{
					cout << "*";

				}
			case 3:
				if (a==3 && b==1 || a==3 && b==5)
					cout << "*";
			case 4:
				if (a==4 && b==2 || a==4 && b==4)
					cout << "*";
			case 5:
				if (a == 5 && b == 4)
					cout << "*";
			default:
				cout << " ";

			}
		

		}
		cout << endl;
		
	}

}
