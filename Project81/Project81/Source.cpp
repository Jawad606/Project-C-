#include<iostream >
using namespace std;;
int main()
{
	int i, j;
	int n[2][3];
	int s = 0;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << "Enter the value of each element" << endl;
			cin >> n [i][j];
			
		}
	}
	cout << "Elemensts are" << endl;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << n[i][j] ;
			
			s =s+ n[i][j];
		}
		
		
		cout  << endl;;
	}
	
		
}