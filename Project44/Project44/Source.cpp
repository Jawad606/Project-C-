#include<iostream>
using namespace std;
int main()
{
	int guests, chairs, temp = 1;
	int i = 1, f ;
	cout << "\nEnter the number of guests: ";
	cin >> guests;
	cout << "\nEnter the number of chairs: ";
	cin >> chairs;
	do
	
	{
		do 
		{
			temp *= guests;
			--guests;
			cout << "\nNumber of possible arrangements are: " << temp;
			i++;
		} while (guests > chairs);
		
	}
	while (i <= chairs);
	if (guests / chairs == 0)
		cout << endl;
	else
		guests= guests - chairs;
	cout << "Remaing stand=" << guests << endl;
	return 0;
}