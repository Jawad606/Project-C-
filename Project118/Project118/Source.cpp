#include <iostream>
#include<fstream>
#include <string.h>
using namespace std;
struct tax
{
    char owner[30];
    char reg[40];
    char cname[40];
    int pay;
    char data[10];
	double sum;
};
void write()
{
	int i = 1;
	cin.ignore();
	tax t;
	cout << "\n\n\t\tRECORD NO:" << i++ << endl;
	cout << "\t\tENTER THE OWNER: ";
	cin.get(t.owner, 40);
	cin.ignore();
	cout << "\t\tENTER THE COMPANY NAME: ";
	cin.get(t.cname, 40);
	cin.ignore();
	cout << "\t\tENTER THE COMPANY REGISTRATION NO: ";
	cin.get(t.reg, 40);
	cin.ignore();
	cout << "\t\tENTER THE INCOME: ";
	cin >> t.pay;
	cin.ignore();
	cout << "\t\tENTER THE DATE: ";
	cin.get(t.data, 10);

	cin.ignore();
	system("CLS");
	int e;
	if ( t.pay <= 600000)
	{
		t.sum = 0;
	}

	else if (t.pay > 600000 && t.pay < 1200000)
	{
		e = t.pay - 600000;
		t.sum = 0.05 * e;
	}
	else if (t.pay >= 1200000 && t.pay < 1800000)
	{
		e = t.pay - 1200000;
		t.sum = 30000 + 0.1 * e;
		
	}
	else if (t.pay >= 1800000 && t.pay <= 2500000)
	{
		e = t.pay - 1800000;
		t.sum = 90000 + 0.15 * e;
	}
	else if (t.pay > 2500000 && t.pay <= 3500000)
	{
		e = t.pay - 2500000;
		t.sum = 195000 + 0.175 * e;
	}
	else if (t.pay > 3500000 && t.pay <= 5000000)
	{
		e = t.pay - 3500000;
		t.sum = 370000 + 0.2 * e;
	}
	else if (t.pay > 5000000 && t.pay <= 8000000)
	{
		e = t.pay - 5000000;
		t.sum = 670000 + 0.225 * e;
	}
	else if (t.pay > 8000000 && t.pay <= 12000000)
	{
		e = t.pay - 8000000;
		t.sum = 1345000 + 0.25 * e;
	}
	else if (t.pay > 12000000 && t.pay <= 30000000)
	{
		e = t.pay - 12000000;
		t.sum = 2345000 + 0.275 * e;
	}
	else if (t.pay > 30000000 && t.pay <= 50000000)
	{
		e = t.pay - 30000000;
		t.sum = 7295000 + 0.3 * e;
	}
	else if (t.pay > 50000000 && t.pay <= 75000000)
	{
		e = t.pay - 50000000;
		t.sum = 13295000 + 0.325 * e;
	}
	else  if(t.pay > 75000000)
	{
		e = t.pay - 75000000;
		t.sum = 21420000 + 0.35 * e;
	}
	

	fstream file;
	file.open("Tax file .txt", ios::out | ios::app);
	file.write((char*)(&t), sizeof(t));
	file.close();
}
void read()
{
	int i = 1;
	tax t;
	fstream file;
	file.open("Tax file .txt", ios::in);
	while (file.read((char*)(&t), sizeof(tax)))
	{
		cout << "\n\n\t\tRECORD NO:" << i++ << endl;
		cout << "\t\tOWNER NAME: " << t.owner << endl;
		cout << "\t\tCOMPANY NAME: " << t.cname << endl;
		cout << "\t\tREGISTRATION NO: " << t.reg << endl;
		cout << "\t\tMONTHLY INCOME: " << t.pay << endl;
		cout << "\t\tDATE OF PAYING TAX: " << t.data << endl;
		cout << "\t\tTHE TAX AMOUNT: " << t.sum << endl;
	}

	file.close();
	system("pause");
	system("CLS");
}
void filter()
{
	int c;
	cout << "\n\t1.SEARCH BY INCOME\n\t2.SEARCH BY DATE\n\t3.SEARCH BY COMPANY NAME" << endl;
	cin >> c;

	system("CLS");
	switch (c)
	{
	case 1:
	{
		int i;
		int j = 1;
		cout << "\n\n\n\t\tENTER THE MONTHLY INCOME: ";
		cin >> i;
		fstream file;
		tax b;
		file.open("Tax file .txt", ios::in);
		if (!(file.is_open()))
		{
			cout << "File nOt open" << endl;
		}
		bool flag = false;
		while (file.read((char*)(&b), sizeof(b)))
		{
			if (b.pay == i)
			{
				cout << "\n\n\t\tRECORD NO:" << j++ << endl;
				cout << "OWNER NAME: " << b.owner << endl;
				cout << "COMPANY NAME: " << b.cname << endl;
				cout << "REGISTRATION NO: " << b.reg << endl;
				cout << "MONTHLY INCOME: " << b.pay << endl;
				cout << "DATE OF PAYING TAX: " << b.data << endl;
				cout << "THE TAX AMOUNT: " << b.sum << endl;
			}
		}
		file.close();
		break;
		system("pause");
		system("CLS");
	}
	case 2:
	{
		int i = 1;
		char date[14];
		cin.ignore();
		cout << "ENTER THE DATE: ";
		cin.get(date, 14);
		fstream file;
		tax b;
		file.open("Tax file .txt", ios::in);
		if (!(file.is_open()))
		{
			cout << "File nOt open" << endl;
		}
		bool flag = false;
		while (file.read((char*)(&b), sizeof(b)))
		{
			if (strcmp(b.data, date) == 0)
			{
				cout << "\n\n\t\tRECORD NO:" << i++ << endl;
				cout << "\t\tOWNER NAME: " << b.owner << endl;
				cout << "\t\tCOMPANY NAME: " << b.cname << endl;
				cout << "\t\tREGISTRATION NO: " << b.reg << endl;
				cout << "\t\tMONTHLY INCOME: " << b.pay << endl;
				cout << "\t\tDATE OF PAYING TAX: " << b.data << endl;
				cout << "\t\tTHE TAX AMOUNT: " << b.sum << endl;
			}
		}
		file.close();
		break;
		system("pause");
		system("CLS");
	}

	case 3:
	{
		int i = 1;
		char date[14];
		cin.ignore();
		cout << "ENTER THE COMPANY NAME: ";
		cin.get(date, 8);
		fstream file;
		tax b;
		file.open("Tax file .txt", ios::in);
		if (!(file.is_open()))
		{
			cout << "File nOt open" << endl;
		}
		bool flag = false;
		while (file.read((char*)(&b), sizeof(b)))
		{
			if (strcmp(b.cname, date) == 0)
			{
				cout << "\n\n\t\tRECORD NO:" << i++ << endl;
				cout << "\t\tOWNER NAME: " << b.owner << endl;
				cout << "\t\tCOMPANY NAME: " << b.cname << endl;
				cout << "\t\tREGISTRATION NO: " << b.reg << endl;
				cout << "\t\tMONTHLY INCOME: " << b.pay << endl;
				cout << "\t\tDATE OF PAYING TAX: " << b.data << endl;
				cout << "\t\tTHE TAX AMOUNT: " << b.sum << endl;
			}
		}
		file.close();
		break;
		system("pause");
		system("CLS");
	}
	}
	system("pause");
	system("CLS");
}
void modify()
{
	int i = 1;
	char reg[40];
	cin.ignore();
	cout << "ENTER THE REGISTRATION NO: YOU WANT TO DELETE: ";
	cin.get(reg, 40);
	cin.ignore();
	fstream file, file1;
	tax ss,t1;
	file.open("Tax file .txt", ios::in);
	file1.open("Tax .txt", ios::out | ios::app);
	while (file.read((char*)(&ss), sizeof(ss)))
	{
		if (strcmp(reg ,ss.reg )== 0)
		{
			cout << "ENTER THE OWNER: ";
			cin.get(t1.owner, 40);
			cin.ignore();
			cout << "ENTER THE COMPANY NAME: ";
			cin.get(t1.cname, 40);
			cin.ignore();
			cout << "ENTER THE COMPANY REGISTRATION NO: ";
			cin.get(t1.reg, 40);
			cin.ignore();
			cout << "ENTER THE INCOME: ";
			cin >> t1.pay;
			cin.ignore();
			cout << "ENTER THE DATE";
			cin.get(t1.data, 10);
			file1.write((char*)(&t1), sizeof(t1));
		}
		else
		{
			file1.write((char*)(&t1), sizeof(t1));
		}
	}
	file.close();
	file1.close();
	remove("Tax file .txt");
	rename("Tax .txt", "Tax file .txt");
	system("pause");
	system("CLS");

}
void del()
{
	
	cin.ignore();
	char c[40];
	cout << "ENTER THE COMPANY NAME YOU WANT TO DELETE ";
	cin.get(c, 40);
	tax tt;
	fstream file, file1;
	file.open("Tax file .txt", ios::in);
	file1.open("Tax .txt", ios::out | ios:: app);
	while (file.read((char*)(&tt), sizeof(tt)))
	{

		if (strcmp (c ,tt.cname) != 0)
		{
			file1.write((char*)(&tt), sizeof(tt));
			cout << "successfully deleted"<<endl;
		}
	}
	file.close();
	file1.close();
	remove("Tax file .txt");
	rename ("Tax .txt","Tax file .txt");
	system("pause");
	system("CLS");
}
int main()
{
	cout << "\n\n\n\n\t\t\tWELCOME TO FBR" << endl;
	int choise;
	while (true)
	{
	
				cout << "\n\n\n\t\t1.ENTERING THE DATA OF COMPANY \n\n\t\t2.SHOWING THE SAVE DATA OF COMAPNY WITH TAX \n\n\t\t3.FILTER FOR DATA SEARCH\n\n\t\t4.MODIFY THE DATA\n\n\t\t5.DELECT THE RECORD OF COMPANY" << endl;
				cin >> choise;
				system("CLS");
				switch (choise)
				{
				case 1:
					write();
					break;

				case 2:
					read();
					break;
				case 3:
					filter();
					break;
				case 4:
					modify();
					break;
				case 5:
				{
					del();
					break;
				}
				}
	}
}
