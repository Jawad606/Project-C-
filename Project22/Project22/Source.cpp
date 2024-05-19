#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a=1;
	
	while (a < 9)
	{
		cout <<   a << "      " << endl;
		cout << setw(3) << a + a ;
		
		a++;
	}
	system("pause");
	
}
