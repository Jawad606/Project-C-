#include<iostream>
using namespace std;
sruct
void max(int a)
{
	int h;
	int c[5];
	for (int i = 0; i < a;i++)
	{
		cout << "ENTER THE ELEMENT";
		cin >> c[i];
	}
	cout << endl;
	h =c[0];
	for (int i = 0; i <a;i++)
	{
		if (h< c[i])
		{
			h= c[i];
		}
	}
	cout << h<< endl;

}
int main()
{
	int c;
	cout << "ENYER" << endl;
	cin >> c;
	max(c);

}