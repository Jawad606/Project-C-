#include<iostream>
using namespace std;
const int dis=5;
const int vis=5;

void display(int c[dis][vis])
{
	int a;
	for (a = 0; a < dis; a++)
	{
		for (int b = 0; b < vis; b++)
		{
			if (a == 1 && b == 3)
			{
				cout << "*";
			}
			else if (a == 2 && b == 2 || a == 2 && b == 4)
			{
				cout << "*";
			}
			else if (a == 3 && b == 1 || a == 3 && b == 5)
			{
				cout << "*";
			}
		
			else
				cout << " ";
		}
		cout << endl;
}


}
int main()
{
	int i[5][5];


	display(i);
}