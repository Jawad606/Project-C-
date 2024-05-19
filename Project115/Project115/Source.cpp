#include<iostream>
using namespace std;

struct max
{
	int a[5];
};
struct mini
{
	int c;
};
int main()
{
	max ma;
	mini a;
	for (int i = 0; i < 5; i++)
	{
		cin >> ma.a[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout<< ma.a[i];
	}
}