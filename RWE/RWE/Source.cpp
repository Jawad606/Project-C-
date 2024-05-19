#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
using namespace std;
struct car
{
	char model[30];
	char color[20];

};
struct teacher
{
	char name[20];
	char depart[30];
	
};
struct book
{
	char bname[10];
	char price[20];
};
void write()
{
	
	int choice;
	cout << "1. Car\n2. Teacher\n3. book" << endl;
	cin >> choice;
	
	switch (choice)
	{
	case 1:
	{
		cin.ignore();
		car c1;
		cout << "Enter the Car Model " << endl;
		cin.get(c1.model, 30);
		cin.ignore();
		cout << "Enter the car Color " << endl;
		cin.get(c1.color, 10);
		fstream file;
		file.open("Car file .xls", ios::out | ios::app);
		file.write((char*)(&c1), sizeof(c1));
		file.close();
		break;

	}
	case 2:
	{
		cin.ignore();

		teacher t1;
		cout << "Teacher Name " << endl;
		cin.get(t1.name, 20);
		cin.ignore();
		cout << "Enter the department " << endl;
		cin.get (t1.depart, 30);
		
		fstream file;
		file.open("Teacher file .xls", ios::out | ios::app);
		file.write((char*)(&t1), sizeof(t1));
		file.close();

		break;
	
	}
	case 3:
	{
		cin.ignore();
		book b1;
		cout << "Enter the Book Name " << endl;
		cin. get(b1.bname, 20);
		cin.ignore();
		cout << "Enter the price " << endl;
		cin.get(b1.price, 20);
		fstream file;
		file.open("Book file .xls", ios::out | ios::app);
		file.write((char*)(&b1), sizeof(b1));
		file.close();
		break;
	
	}
	}

}
void read()
{
	int choice;
	cout << "1. Car\n2. Teacher\n3. book" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cin.ignore();
		car c;
		fstream file;
		file.open("Car file .xls", ios::in);
		if (!(file.is_open()))

		{
			cout << "File not open" << endl;
		}
		while (file.read((char*)(&c), sizeof(car)))
		{
			cout << "Car model is: " << c.model << endl;
			cout << "Car color is :" << c.color << endl;
		}
		file.close();
		file.close();
		break;
	
	}
	case 2:
	{
		cin.ignore();
		teacher t;
		
		fstream file;
		file.open("Teacher file .xls", ios::in);
		if (!(file.is_open()))

		{
			cout << "File not open" << endl;
		}
		while (file.read((char*)(&t), sizeof(teacher)))
		{
			cout << "Teacher Name is: " << t.name << endl;
			cout << "Department is: " << t.depart << endl;
		
		}
		file.close();
		break;
		
	}
	case 3:
	{
		cin.ignore();
		book b;
		fstream file;
		file.open("Book file .xls", ios::in);
		if (!(file.is_open()))

		{
			cout << "File not open" << endl;
		}
		while (file.read((char*)(&b), sizeof(book)))
		{
			cout << "Bppk Name is: " << b.bname << endl;
			cout << "Price is: " << b.price << endl;
			
		}
		file.close();
		break;
	
	}
	}
}
void search()
{
	char m[30];
	char d[30];
	char p[20];
	int choise;
	cout << "1.Search in Car\n2. Search in teacher \n3. Search in Book" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
	{
		cin.ignore();

		cout << "Enter the model to search " << endl;
		cin.get(m, 30);
		fstream file;
		car c;
		file.open("Car file .xls", ios::in);
		if (!(file.is_open()))
		{
			cout << "File nOt open" << endl;
		}
		bool flag = false;
		while (file.read((char*)(&c), sizeof(c)))
		{

			if (strcmp(c.model, m) == 0)
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
		break;
	
	}
	case 2:
	{
		cin.ignore();

		cout << "Enter the department to search " << endl;
		cin.get(d, 30);
		fstream file;
		teacher t;
		file.open("teacher file .xls", ios::in);
		if (!(file.is_open()))
		{
			cout << "File nOt open" << endl;
		}
		bool flag = false;
		while (file.read((char*)(&t), sizeof(t)))
		{

			if (strcmp(t.depart, d) == 0)
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
		break;
	
	}
	case 3:
	{
		cin.ignore();

		
	}
	break;


	}
}
int main()
{
	int choise;
	while (true)
	{
		
		cout << " 1.Write data \n 2.Raed data \n 3.Search data" << endl;
		
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
			search();
			break;
		}
	}
}