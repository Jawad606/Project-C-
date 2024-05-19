#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
using namespace std;

struct student
{
	char name [20];
	char Class [10];
	int age;
};
void write()
{
	cin.ignore();
	student s1;

	cout << "Enter the Name " << endl;
	cin.get(s1.name, 20);

	cin.ignore();
	cout << "Enter the age " << endl;
	cin >> s1.age;
	cin.ignore();
	cout << "Enter the Class " << endl;
	cin.get(s1.Class, 10);
	
	fstream file;

	file.open("Student file .txt",ios::out | ios::app);
	file.write((char*)(&s1), sizeof(s1));
	file.close();

}
void read()
{
	cin.ignore();
	student s;
	fstream file;
	file.open("Student file .txt", ios::in);
	if (!(file.is_open()))

	{
		cout << "File not open" << endl;
	}
	while (file.read((char*)(&s), sizeof(student  )))
	{
		cout << "Student Name " << s.name << endl;
		cout << "Student Age:" << s.age << endl;
		cout << "Student Class :" << s.Class << endl;
	}
	file.close();


}
void  copy()
{
	student s ;
	
	fstream file,file2;
	file.open("Student file .txt", ios::in);
	file2.open("Student .txt", ios::out | ios::app);
	while (file.read((char*)(&s), sizeof(s)))
	{
		file2.write((char*)(&s), sizeof(s));
		cout << "Student Name " << s.name << endl;
		cout << "Student Age:" << s.age << endl;
		cout << "Student Class :" << s.Class << endl;
}
		}

int main()
{
	int choise;
	while (true)
	{
		cout << "Enter 1 for write data \n Enter 2 for raed data \n 3 for Copy data" << endl;
		cin >> choise;
		switch (choise)
		{
		case 1:

			write();
			break;

		case 2:
			read();
			break;
		case 3:

			copy();
			break;
		}
	}
}
