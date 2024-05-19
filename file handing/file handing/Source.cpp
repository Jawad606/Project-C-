#include<iostream>
#include<fstream>
using namespace std;
struct student
{
	string name;
	
	int age=0;
string Class;
};
int main()
{
	student s1 = { "Ali",25,"abc@gmail.com" };
	student s2;
	fstream file;
	file.open("student.txt", ios::out | ios::app);
	file.write((char*)(&s1), sizeof(s1));
	file.read((char*)(&s1), sizeof(s1));
	while ( )
	{
		cout << s1.name << endl;
	}
}