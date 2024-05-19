#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
using namespace std;
struct car
{
	char model[30];
	int no;
};
void write_data()
{
	
	car s1;
	cout << "ENter the model"  <<endl;
	cin.ignore();
	cin.get(s1.model,30);
	cout << "Enter the Car no" << endl;
	cin >> s1.no;
	cin.ignore();
	fstream file;
	file.open("Car file .txt", ios::out | ios::app);
	file.write((char*)(&s1), sizeof(s1));
	file.close();

}
void read_data()
{
	car s;
	fstream file;
	file.open("Car file .txt", ios::in);
	if (!(file.is_open()))

	{
		cout << "File not open" << endl;
	}
	while (file.read((char*)(&s), sizeof(car)))
	{
		cout << "Car model is: " << s.model << endl;
		cout << "Car no " << s.no << endl;
	}
}
void search_data()
{
	char name[20];
	cout << "Enter the model to search" << endl;
	cin.ignore();
	cin.get(name,20);
	fstream file;
	car s;
	file.open("Car file .txt", ios::in);
	if (!(file.is_open()))
	{
		cout << "File nOt open" << endl;
	}
	bool flag = false;
	while (file.read((char*)(&s), sizeof(s)))
	{	
		if (strcmp(s.model, name) == 0 )
		{	
			cout << "found" << endl;
			flag = true;
		}
	}
	file.close();

	if (flag == true)
	{
		cout << "found" << endl;
	}
	else
	{
		cout << "not found" << endl;
	}
}
void delete_data()
{
	int n;
	cout << "Enter the the car number to be del" << endl;
	cin >> n;
	car c;
	fstream file, file2;
	file.open("Car file .txt", ios::in);
	file2.open("Car.txt", ios::out | ios::app);
	while (file.read((char*)(&c), sizeof(c)))
	{
		if (c.no != n)
		{
			cout << "File is success" << endl;
			file2.write((char*)(&c), sizeof(c));
		}
	}
	file.close();
	file2.close();
	if (remove("Car file .txt"))
	{
		cout << "File is removed" << endl;
	}
	if (rename("Car.txt", "Car file .txt"))
	{
		cout << "File is renamed" << endl;
	}

}


int main()
{
	int choise;
	while (true)
	{
		
		cout << "Enter 1 for write data \n Enter 2 for raed data \n 3 for search data" << endl;
		cin >> choise;
		system("CLS");
		switch (choise)
		{
		case 1:

			write_data();
			break;

		case 2:
			read_data();
			break;
		case 3:

			search_data();
			break;

		case 4:
		{
			delete_data();
			break;
		}
		}
	}
	system("pause");
	system("CLS");
}