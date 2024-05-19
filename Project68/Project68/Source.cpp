#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct student
{
	string name;
	int age = 0;
	string rog;

};
int main()
{
	student s1;
	s1.name = "Ali";
	s1.age = 25;
	s1.rog = "asdfdf";
	student s2;

	fstream file;
	file.open("student.txt", ios::out | ios::app|ios::in);

	file.write((char*)(&s1), sizeof(s1));
	file.read((char*)(&s2), sizeof(s2));

	while (file.read((char*)(&s2), sizeof(s2)))
	{
		cout << s2.name;
	}
	file.close();
	system("pause");
}