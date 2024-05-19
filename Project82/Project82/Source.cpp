#include<iostream>
using namespace std;
void v(int c[3][3])
{
	int k;
	int b, a;
	for (b = 0; b < 3; b++)
	{
		for (a = 0; a < 3; a++)
		{
			cout << c[b][a];
		}
		cout << endl;
	}
}
int main()
{
	int n[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int i, j;
	
	v(n);
}