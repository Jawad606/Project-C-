#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	

	int grade;

	cout << "Enter Marks" << endl;

	cin >> grade;

	switch (grade )
	{
	case 90:
		if (grade >= 90)
			printf("A+");
		else
			printf("Invalid");
		break;
	case 2:
		if (grade >= 85)
			printf("A");
		else
			printf("Invalid");
		break;
	default:
		printf("Invalid");
	}
	 
}