#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	struct student
	{
		string name;
		string roll_number;
		string email;
		string number;

	};

	student s1 = { "Ali","10","ali@gmail.com","013333" };
	student s2 = { "Faisal","16","faisal@gmail.com","0584" };
	student s3 = { "kamran","16","kamran@gmail.com","0584" };
	student s4 = { "zan","16","zan@gmail.com","0584" };
	student s5 = { "naeem","16","naeem@gmail.com","0584" };
	student s6;
	fstream file;
	file.open("student file.txt", ios::out | ios::app);
	file.write((char*)(&s1), sizeof(s1));
	file.open("student file.txt",ios::out|ios::app);
	file.write((char*)(&s2), sizeof(s2));
	file.open("student file.txt",ios::out|ios::app);
	file.write((char*)(&s3), sizeof(s3));
	file.open("student file.txt",ios::out|ios::app);
	file.write((char*)(&s4), sizeof(s4));
		file.open("student file.txt",ios::out|ios::app);
	file.write((char*)(&s5), sizeof(s5));
	file.close();
	file.open("student file.txt", ios::in);
	file.read((char*)(&s6),sizeof (s6));
	while (file.read((char*)(&s6), sizeof(student)))
	{
		cout << s6.name << endl;
		cout << s6.roll_number << endl;
		
		cout << s6.number << endl;
	}
	system("pause");
}
