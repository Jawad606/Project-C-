#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct student
{
	string name;
	string Class;
	int age;
	
};
int main()
{
	
	student s1 = { "Ali","1st year" };
	student s3 = { "jawad","2nd year" };
	student s2;

	fstream file;
	file.open("student file.txt", ios::out | ios::app);
	file.write((char*)(&s1), sizeof(student));
	file.write((char*)(&s3), sizeof(student));

	file.close();
	file.open("student file.txt", ios::in);
	while (file.read((char*)(&s2), sizeof(student)))
	{
		cout << s2.name << endl;
		cout << s2.Class << endl;
	cout << s2.age << endl;
	}
		file.close();
}