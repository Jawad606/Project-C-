#include<iostream>
using namespace std;
int x(int a, int b);
int main()
{

	int m, n;
	cout << "Enter the number " << endl;
	cin >> m >> n;
    
	cout << "by Addition"  << x(m, n)<< endl;
	for (m = n; m < 6; m++)
		cout << "j";
	
	return 0;
}
int x(int a, int b)
{
	int c;
	return a + b;
	

}