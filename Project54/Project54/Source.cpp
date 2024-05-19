
#include <iostream>
using namespace std;
void zeroSmaller(int& first, int& second) 
{ if( first > second )
	first = 0;
else 
second = 0;
}
int main() 
{
	
	int a = 4, b = 7, c = 11, d = 9;
	zeroSmaller(a, b); 
	zeroSmaller(c, d);
	
	
	cout << "\na = " << a << " b = " << b;
		cout	<< "c = " << c << " d = " << d;
		return 0;
}
