#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct student
{
	string name;
	int age=0;
	string rog;
	string dept;

};
int main()
{
	student s1, s2, s3, s4, s5;
	
	
	cout << "Student No 1:" << endl;
	cout << "Enter the Name" << endl;
	getline(cin, s1.name);
	cout << "Enter the registration" << endl;
	getline(cin, s1.rog);
	cout << "Department" << endl;
	getline(cin, s1.dept);
	cin.ignore();
	cout << "Enter the age" << endl;
	cin >> s1.age;
	

	cout << "Name:      " << s1.name << endl;
	cout << "Age:      " << s1.age << endl;
	
	cout << "Registration No:    " << s1.rog << endl;
	cout << "Department       " << s1.dept << endl;
	system("pause");
	system("CLS");
	cout << "Student no 2" << endl;
	cin.ignore();
	cout << "Enter the Name" << endl;
	
	getline(cin, s2.name);
	
	cout << "Enter the registration" << endl;
	getline(cin, s2.rog);
	
	cout << "Department" << endl;
	getline(cin, s2.dept);
	cin.ignore();
	cout << "Enter the age" << endl;
	cin >> s2.age;
	cin.ignore();

	cout << "Name:      " << s2.name << endl;
	cout << "Age:      " << s2.age << endl;
	cout << "Registration No:    " << s2.rog << endl;
	cout << "Department       " << s2.dept << endl;

	system("pause");
	system("CLS");
	cout << "Student No 3:" << endl;
	cout << "Enter the Name" << endl;
	cin.ignore();
	getline(cin, s3.name);

	cout << "Enter the registration" << endl;
	getline(cin, s3.rog);

	cout << "Department" << endl;
	getline(cin, s3.dept);
	cout << "Enter the age" << endl;
	cin >> s3.age;


	cout << "Name:      " << s3.name << endl;
	cout << "Age:      " << s3.age << endl;
	cout << "Registration No:    " << s3.rog << endl;
	cout << "Department       " << s3.dept << endl;


	system("pause");
	system("CLS");
	cout << "Student No 4:" << endl;
	cout << "Enter the Name" << endl;
	cin.ignore();
	getline(cin, s4.name);

	cout << "Enter the registration" << endl;
	getline(cin, s4.rog);

	cout << "Department" << endl;
	getline(cin, s4.dept);
	cout << "Enter the age" << endl;
	cin >> s4.age;


	cout << "Name:      " << s4.name << endl;
	cout << "Age:      " << s4.age << endl;
	cout << "Registration No:    " << s4.rog << endl;
	cout << "Department       " << s4.dept << endl;


	system("pause");
	system("CLS");
	cout << "Student No 5:" << endl;
	cout << "Enter the Name" << endl;
	cin.ignore();
	getline(cin, s5.name);

	cout << "Enter the registration" << endl;
	getline(cin, s5.rog);

	cout << "Department" << endl;
	getline(cin, s5.dept);
	cout << "Enter the age" << endl;
	cin >> s5.age;


	cout << "Name:      " << s5.name << endl;
	cout << "Age:      " << s5.age << endl;
	cout << "Registration No:    " << s5.rog << endl;
	cout << "Department       " << s5.dept << endl;

	fstream file;
	file.open("student.txt", ios::out | ios::app);
	
	file.read((char*)(&s2), sizeof(s2));
	
	file.read((char*)(&s3), sizeof(s3));
	
	file.read((char*)(&s4), sizeof(s4));
	
	file.read((char*)(&s5), sizeof(s5));
	

	
	while (file.read((char*)(&s2), sizeof(s2)))
	{
		cout << s2.name << endl;
		cout << s2.age << endl;
		cout << s2.rog << endl;
		cout << s2.dept << endl;
	}
	while (file.read((char*)(&s3), sizeof(s3)))
	{
		cout << s3.name << endl;
		cout << s3.age << endl;
		cout << s3.rog << endl;
		cout << s3.dept << endl;
	}
	while (file.read((char*)(&s4), sizeof(s4)))
	{
		cout << s4.name << endl;
		cout << s4.age << endl;
		cout << s4.rog << endl;
		cout << s4.dept << endl;
	}
	while (file.read((char*)(&s5), sizeof(s5)))
	{
		cout << s5.name << endl;
		cout << s5.age << endl;
		cout << s5.rog << endl;
		cout << s5.dept << endl;
	}
	

file.close();




}