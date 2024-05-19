#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct student
{
	string name;
	int age = 0;
	string rog;
	string dept;

};
int main()
{
	student s3;





	student s2 = { "ali",34,"Fast" };

	fstream file;
	file.open("student.txt", ios::out | ios::app);


	file.write((char*)(&s2), sizeof(s2));
	file.close();
	file.open("student.txt", ios::in);
	while (file.read((char*)(&s3), sizeof(student)))
	{
		cout << s3.name << endl;
		cout << s3.age << endl;
		cout << s3.rog << endl;
		cout << s3.dept << endl;
	}

}