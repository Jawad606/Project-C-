#include<iostream>
#include<fstream>
using namespace std;

struct employee
{
	char id[20];
	char dept[40];

};
struct task
{
	char id[20];
	char assigned[80];

};
void employwrite()
{
	employee e;
	cout << "Enter the emply data" << endl;
	cout << "Enter the id" << endl;
	cin.get(e.id, 40);
	cin.ignore();
	cout << "Enter the deptpartment" << endl;
	cin.get(e.dept, 50);
	fstream file;
	file.open("Employee.txt", ios::out | ios::app);
	file.write((char*)(&e), sizeof(e));
	file.close();
}
void tskwrite()
{
	task t;
	cout << "Enter the registor data" << endl;
	cout << "Enter the id" << endl;
	cin.get(t.id, 40);
	cin.ignore();
	cout << "Enter the assigned dept" << endl;
	cin.get(t.assigned,50);
	fstream file;
	file.open("task.txt", ios::out | ios::app);
	file.write((char*)(&t), sizeof(t));
	file.close();
}
void emplyread()
{
	employee r;
	fstream file;
	file.open("Employee.txt", ios::in);
	while (file.read((char*)(&r), sizeof(r)))
	{
		cout << " the id" <<r.id <<endl;
	
		cout << "the deptpartment" <<r.dept<< endl;
	
	}
}
void taskread()
{
	task k;
	fstream file;
	file.open("task.txt", ios::in);
	while (file.read((char*)(&k), sizeof(k)))
	{
		cout << " the id" << k.id << endl;

		cout << "the deptpartment" << k.assigned << endl;

	}
}
void empysearch()
{
	char a[50];
	cout << "Enter the id to be search " << endl;
	cin.get(a, 50);
	
		employee r;
		fstream file;
		file.open("Employee.txt", ios::in);
		while (file.read((char*)(&r), sizeof(r)))
		{
			if (strcmp(a, r.id) == 0)

			{
				cout << " the id" << r.id << endl;

				cout << "the deptpartment" << r.dept << endl;
			}

		}
		char d[50];
		cout << "Enter the dept to search" << endl;
		cin.get(d, 50);
		while (file.read((char*)(&r), sizeof(r)))
		{
			if (strcmp(d,r.dept)==0)
			{
				cout << " the id" << r.id << endl;

				cout << "the deptpartment" << r.dept << endl;
			}

		}

	
}
void tastserach()
{
	char a[60];
	cout << "Enter the id to be serch" << endl;
	cin.get(a, 60);
	task b;
	fstream file;
	file.open("task.txt", ios::in);
	while (file.read((char*)(&b), sizeof(b)))
	{
		if (strcmp(a, b.id) == 0)
		{
			cout << " the id" << b.id << endl;

			cout << "the deptpartment" << b.assigned << endl;
		}
		

	}
	char i[50];
	cout << "Enter the assigned deppt to search" << endl;
	cin.get(i, 50);
	while (file.read((char*)(&b), sizeof(b)))
	{
		if (strcmp(i, b.assigned) == 0)
		{
			cout << " the id" << b.id << endl;

			cout << "the deptpartment" << b.assigned << endl;
		}


	}
}

int main()
{
	int choise;
	cout << "Enter the 1 to write the emply\n Enter 2 to write the resiter task\n enter 3 to read the emplyee data \n Enter 4 to read resgistor task \n 5 to serch in empy \n 6 to serach in task " << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
		employwrite();
		break;
	case 2:
		tskwrite();
		break;
	case 3:
		emplyread();
		break;
	case 4:
		taskread();
		break;
	case 5:
		empysearch();
		break;
	case 6: 
		tastserach();
		break;
	}
}