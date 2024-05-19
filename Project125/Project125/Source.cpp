#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct Account
{
	char user_id[10];
	char Password[20];
};

struct bill_info
{
	int bill_detail;
	char pay_bill[20];
};
struct user_info
{
	char address[50];
	int contact;
	char change_name[20];
};
struct connection_info
{
	char speed[20];
	char modifiy_connection[20];

};
struct complains
{
	char feedback[20];
	char bill_report[20];
	char inquirey[20];
};

void write_data()
{
	Account a;
	bill_info b;
	user_info u;
	connection_info c;
	complains Cc;
	int choise;
	char i[100] = { "RAO ABRAR""jawad mirza""usama hassan""danial jabbar" };
	char j[20] = { "raoabrar" };
	cout << "\n\n\n\t\tPRESS 1 TO ENTER THE ACCOUNT\n\n\n\t\tPRESS 2 TO CHEAK THE BILL INFO\n\n\n\t\tPRESS 3 TO CHEAK THE USER INFO\n\n\n\t\tPRESS 4 TO CHEAK CONNECTION INFO\n\n\n\t\tPRESS 5 TO CHEAK COMPLAINS INFO" << endl;
	cin >> choise;
	switch (choise)
	{
	case 1:
	{
		cin.ignore();
		cout << "ENTER THE ID OF USER" << endl;
		cin.get(a.user_id, 100);
		
		
			cin.ignore();
			cout << "ENTER THE PASSWARD " << endl;
			cin.get(a.Password, 20);
		
		
		
		break;


	}
	case 2:
	{
		cout << "BILL INFO IS: " << endl;
		cout << "\n\n\n\t\tPRESS 1 TO PAY THE BILL  \n\n\n\t\tPRESS 2 TO PAY PERVIOUS BILL INFO" << endl;
		int a;
		cin >> a;
		if (a == 1)
		{
			
			
			cout << "ENTER THE BILL PAYMENT :" << endl;
			cin >> b.pay_bill;
		}
		else if (a == 2)
		{
			cout << "ENTER PERVOIUS BILL IS:" <<endl;
			cin >> b.bill_detail;
		}
	}
	case 3:
	{
		int a;
		cout << "\n\n\n\t\tUSER INFO" << endl;
		cout << "\n\n\n\t\tPRESS 1 TO ENTER ADRESS\n\n\n\t\tPRESS 2 TO ENTER THE CONTACT NO:";
		cin >> a;
		if (a == 1)
		{
			cout << "\n\n\n\t\tENTER THE ADRESS" << endl;
			cin.get(u.address, 50);
		}
		else if (a == 2)
		{
			cout << "\n\n\n\t\tENTER THE CONTACT" << endl;
			cin>>u.contact;
		}
	}
	case 4:
	{
		cout << "\n\n\n\t\tCONNECTION INFO" << endl;
		
		cout << "\n\n\n\t\tNET SPEED IS " << endl;
		cin >> c.speed;

	}
	case 5:
	{
		cout << "\n\n\n\t\tFEEDBACK" << endl;
		cout << "ENTER THE FEEDBACK" << endl;
		cin.get(Cc.feedback,50);

	}
	}
	fstream file;
	file.open("file.txt", ios::out | ios::app);
	file.write((char*)(&a), sizeof(a));
	file.write((char*)(&b), sizeof(b));
	file.write((char*)(&u), sizeof(u));
	file.write((char*)(&c), sizeof(c));
	file.write((char*)(&Cc), sizeof(Cc));
	file.close();
	
}
void read_file()
{

	Account v;
	bill_info q;
	user_info i;
	connection_info j;
	complains d;
	fstream file;
	file.open("file.txt", ios::in);
	while(file.read((char*)(&v), sizeof(v)))
		while (file.read((char*)(&q), sizeof(q)))
			while (file.read((char*)(&i), sizeof(i)))
				while (file.read((char*)(&j), sizeof(j)))
					while (file.read((char*)(&d), sizeof(d)))
	
		{
			cout << "the user id:" << v.user_id << endl;

			cout << "the password:" << v.Password << endl;


			cout << "Pay bill" << q.pay_bill << endl;

			cout << "speed is" << j.speed << endl;

			
			cout << "user adress is" << i.address << endl;

			cout << "user contact no" << i.contact << endl;
			cout << " the feedback:" << d.feedback << endl;

		

			

		}

	file.close();
}
void search()
{
	char a[70];
	cout << "ENTER THE USER NAME" << endl;
	cin.get(a, 70);
	Account t;
	bill_info r;
	user_info b;
	connection_info c;
	complains q;
	fstream file;
	file.open("file.txt", ios::in);
	while (file.read((char*)(&t), sizeof(t)))
		while (file.read((char*)(&r), sizeof(r)))
			while (file.read((char*)(&b), sizeof(b)))
				while (file.read((char*)(&c), sizeof(c)))
					while (file.read((char*)(&q), sizeof(q)))
					{
						if ((a, t.user_id) == 0)
						{

							cout << "the user id:" << t.user_id << endl;

							cout << "the password:" << t.Password << endl;


							cout << "Pay bill" << r.pay_bill << endl;

							cout << "speed is" << c.speed << endl;


							cout << "user adress is" << b.address << endl;

							cout << "user contact no" << b.contact << endl;
							cout << " the feedback:" << q.feedback << endl;
						}
					}

}
void modify()
{
	char a[70];
	cout << "ENTER THE USER NAME" << endl;
	cin.get(a, 70);
	Account q,o;
	bill_info t,p;
	user_info r,k;
	connection_info n,l;
	complains h,m;
	fstream file,file1;
	file1.open("file1.txt", ios::in);
	file.open("file.txt", ios::out | ios::app);
	while (file.read((char*)(&q), sizeof(q)))
		while (file.read((char*)(&t), sizeof(t)))
			while (file.read((char*)(&r), sizeof(r)))
				while (file.read((char*)(&n), sizeof(n)))
					while (file.read((char*)(&h), sizeof(h)))
					{
						if ((a, q.user_id) == 0)
						{
							cin.ignore();
							cout << "ENTER THE ID OF USER" << endl;
							cin.get(o.user_id, 100);
							cin.ignore();
							cout << "ENTER THE PASSWARD " << endl;
							cin.get(o.Password, 20);
							cout << "ENTER THE BILL PAYMENT :" << endl;
							cin >> p.pay_bill;
							cout << "ENTER PERVOIUS BILL IS:" << endl;
							cin >> p.bill_detail;
							cout << "\n\n\n\t\tENTER THE ADRESS" << endl;
							cin.get(k.address, 50);
							cout << "\n\n\n\t\tENTER THE CONTACT" << endl;
							cin >> k.contact;
							cout << "\n\n\n\t\tNET SPEED IS " << endl;
							cin >> l.speed;
							cout << "ENTER THE FEEDBACK" << endl;
							cin.get(m.feedback, 50);
						}
					}
	file.close();
	file1.close();
	remove("file.txt");
	rename ("file1.txt", "file.txt");
	system("pause");
	system("CLS");
}
void del()
{
	char a[70];
	cout << "ENTER THE USER NAME" << endl;
	cin.get(a, 70);
	Account q, o;
	bill_info t, p;
	user_info r, k;
	connection_info n, l;
	complains h, m;
	fstream file, file1;
	file1.open("file1.txt", ios::in);
	file.open("file.txt", ios::out | ios::app);
	while (file.read((char*)(&q), sizeof(q)))
		while (file.read((char*)(&t), sizeof(t)))
			while (file.read((char*)(&r), sizeof(r)))
				while (file.read((char*)(&n), sizeof(n)))
					while (file.read((char*)(&h), sizeof(h)))
					{
						if ((a, q.user_id) != 0)
						{
							cout << "successfully deleted" << endl;
						}

					}
	file.close();
	file1.close();
	remove("file.txt");
	rename("file1.txt", "file.txt");
	system("pause");
	system("CLS");
}
int main()
{
	cout << "\n\n\n\n========================" <<endl;
	cout << "\n\n\nWelcome to Online PTCL" << endl;
	cout << "\n\n\n========================" << endl;
	int choice;
	while (true)
	{

		cout << "PRESS 1 TO ENTER THE USER DATA\n\n\t\tPRESS 2 TO READ THE DATA OF USER\n\n\t\tPRESS 3 TO SEARCH THE DATA\n\n\t\tPRESS 4 TO MODIFY THE DATA\n\n\t\tPRESS 5 TO DELETE THE DATA" << endl;
		cin >> choice;
		system("CLS");
		switch (choice)
		{
		case 1:
			write_data();
			break;
		case 2:
			read_file();
			break;
		case 3:

			search();
			break;
		case 4:
			modify();
			break;
		case 5:
			del();
			break;
		}



	}
	system("pause");
}