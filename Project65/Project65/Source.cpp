#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

struct student
{
	char name[20], address[30];
	int grade, roll, dob;
};

void main()
{
	struct student s[10];
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("\nEnter records for student[%d]\n", i + 1);
		printf("Enter name: ");
		getline(cin, s[i].name);
		printf("Enter address: ");
		gets(s[i].address);
		printf("Enter class, roll number and date of birth(year): ");
		scanf("%d%d%d", &s[i].grade, &s[i].roll, &s[i].dob);
	}
	printf("Records of the 10 students are here");
	for (i = 0; i < 10; i++)
	{
		printf("\nStudent %d", i + 1);
		printf("\nName: %s", s[i].name);
		printf("\nAddress: %s", s[i].address);
		printf("\nClass: %d", s[i].grade);
		printf("\nRoll No.: %d", s[i].roll);
		printf("\nDOB: %d", s[i].dob);
		printf("\n");
	}
	getch();
}