#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a, i, f;
	
	a = 1;
	f = 0;
	i = 2;
	while (i <= a / 2)
		while(f<100)
		
	{
		if (a % i == 0)
		{
			f = 1;
			break;
		}
		i++;
	}
	{
		if (f == 0)
			printf("Prime Number");
	}
	
	return 0;
}
