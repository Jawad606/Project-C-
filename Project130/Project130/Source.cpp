#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>


using namespace std;
		struct employ_details
		{
			int id;
			int age;
			int salary;
			char email[40];
		};
		struct cow_details
		{
			int c_num;
			char generation[40] ;
			int k_num;
			int max;
			int mim;

		};
		struct bufflo_details
		{
			int c_num;
			char generation[40];
			int k_num;
			int max;
			int mim;


		};
		struct managment_details
		{
			float d_milk;
			float w_milk;
			float m_milk;
			float y_milk;
			int d_incom;
			int m_incom;
			int w_incom;
			int y_incom;
			int d_expensive;
			int w_expensive;
			int m_expensive;
			int y_expensive;
			float tax;
			char  f_name[40];
			char t_breeding[40];
			float profit;
			int m_cost = 95;
		};
		void write_data1()
		{
			employ_details ed1;

			system("cls");

			cout << "Enter the ID: ";
			cin >> ed1.id;

			cout << "Enter the Age: ";
			cin >> ed1.age;

			cout << "Enter the Salary: ";
			cin >> ed1.salary;

			cout << "Enter the Email: ";
			cin.ignore();
			cin.get(ed1.email, 40);

			cout << endl;

			fstream employee_Details;

			employee_Details.open("edetails.txt", ios::out | ios::app);
			employee_Details.write((char*)(&ed1), sizeof(ed1));
			employee_Details.close();

		}
		void write_data2()
		{
			cow_details cd1;

			system("cls");

			cout << "Number of cow you have" << endl;
			cin >> cd1.c_num;
			cout << "Name of generation you have" << endl;
			cin.ignore();
			cin.get(cd1.generation, 40);
			cout << "Number of kid you have" << endl;
			cin >> cd1.k_num;
			cout << "Higihest capactiy of giving milk" << endl;
			cin >> cd1.max;
			cout << "Minimum capactiy of giving milk" << endl;
			cin >> cd1.mim;

			fstream cow_details;

			cow_details.open("cdetails.txt", ios::out | ios::app);
			cow_details.write((char*)(&cd1), sizeof(cd1));
			cow_details.close();

		}
		void write_data3()
		{
			bufflo_details bd1;

			system("cls");

			cout << "Number of bufflo you have" << endl;
			cin >> bd1.c_num;
			cout << "Name of generation you have" << endl;
			cin.ignore();
			cin.get(bd1.generation, 40);
			cout << "Number of kid you have" << endl;
			cin >> bd1.k_num;
			cout << "Higihest capactiy of giving milk" << endl;
			cin >> bd1.max;
			cout << "Minimum capactiy of giving milk" << endl;
			cin >> bd1.mim;

			fstream bufflo_details;

			bufflo_details.open("bdetails.txt", ios::out | ios::app);
			bufflo_details.write((char*)(&bd1), sizeof(bd1));
			bufflo_details.close();
		}
				void write_data4()
								
				{
					managment_details md1;

					system("cls");
					
					cout << "Daily milk" << endl;
					cin >> md1.d_milk;
					md1.w_milk = md1.d_milk * 7;
					cout << "weekly milk" <<endl<<md1.w_milk << endl;
					md1.m_milk = md1.d_milk * 30;
					cout << "monthly milk" << endl << md1.m_milk << endl;
					md1.y_milk = md1.d_milk * 365;
					cout << "year milk" << endl << md1.y_milk << endl;
					
					cout << "cost of milk" << endl << md1.m_cost << endl;
					md1.d_incom = md1.d_milk * 95;
					cout << "Daily income" << endl;
					
					md1.w_incom = md1.d_incom * 7;
					cout << "weekly income" << endl << md1.w_incom << endl;
					md1.m_incom = md1.d_incom * 30;
					cout << "monthly income" << endl << md1.m_incom << endl;
					md1.y_incom = md1.d_incom * 365;
					cout << "year income" << endl << md1.y_incom << endl;

					cout << "Daily expensive" << endl;
					cin >> md1.d_expensive;
					md1.w_expensive = md1.d_expensive * 7;
					cout << "weekly expensive" << endl << md1.w_expensive << endl;
					md1.m_expensive = md1.d_expensive * 30;
					cout << "monthly expensive" << endl << md1.m_expensive << endl;
					md1.y_expensive = md1.d_expensive * 365;
					cout << "year expensive" << endl << md1.y_expensive << endl;

					cout << "tax payed" << endl;
					cin >> md1.tax;

					cout << "Feeding of Animals" << endl;
					cin.ignore();
					cin.get(md1.f_name, 40);
					cout << " Breeding seasons " << endl;
					cin.ignore();
					cin.get(md1.t_breeding, 40);

					md1.profit = md1.y_incom - md1.y_expensive;
					cout << "your year profit is" << endl;
					

					fstream managment_details;

					managment_details.open("mdetails.txt", ios::out | ios::app);
					managment_details.write((char*)(&md1), sizeof(md1));
					managment_details.close();

				}
		

				void read_data1()
				{
					system("cls");
					employ_details ed2;
					fstream employ_details;
					employ_details.open("edetails.txt", ios::in);
					while (employ_details.read((char*)(&ed2), sizeof(ed2)))
					{
						cout << endl;
						cout << ed2.id << endl;
						cout << ed2.age << endl;
						cout << ed2.salary << endl;
						cout << ed2.email << endl;
						cout << endl;
					}
					employ_details.close();
				}
		
			
				
			
			void read_data2()
			{
				system("cls");
				cow_details cd2;
				fstream cow_details;
				cow_details.open("cdetails.txt", ios::in);
				while (cow_details.read((char*)(&cd2), sizeof(cd2)));
				{
					cout << endl;
					cout << cd2.c_num << endl;
					cout << cd2.generation << endl;
					cout << cd2.k_num << endl;
					cout << cd2.max << endl;
					cout << cd2.mim << endl;
				}
					cow_details.close();
			}
			void read_data3()
			{
				bufflo_details bd2;
				fstream bufflo_details;
				bufflo_details.open("bdetails.txt", ios::in);
				while (bufflo_details.read((char*)(&bd2), sizeof(bd2)));
				{
					cout << endl;
					cout << bd2.c_num << endl;
					cout << bd2.generation << endl;
					cout << bd2.k_num << endl;
					cout << bd2.max << endl;
					cout << bd2.mim << endl;
				}
				bufflo_details.close();
			}
			void read_data4()
			{
				managment_details md2;
				fstream managment_details;
				managment_details.open("mdetails.txt", ios::in);
				while (managment_details.read((char*)(&md2), sizeof(md2)));
				{
					cout << endl;
					cout << md2.d_expensive<<endl;
					cout << md2.d_incom << endl;
					cout << md2.d_milk << endl;
					cout << md2.f_name << endl;
					cout << md2.m_expensive << endl;
					cout << md2.m_incom << endl;
					cout << md2.m_milk << endl;
					cout << md2.profit << endl;
				}
				managment_details.close();
			}

			void filter_mail()
			{
				system("cls");

				employ_details ed3;

				char mail[40];
				cout << "Enter the email_id: ";
				cin.ignore();
				cin.get(mail, 40);

				fstream employee_Details;
				employee_Details.open("edetails.txt", ios::in);
				while (employee_Details.read((char*)(&ed3), sizeof(ed3)))
				{
					if (strcmp(ed3.email, mail) == 0)
					{
						cout << endl;
						cout << ed3.id << endl;
						cout << ed3.age << endl;
						cout << ed3.salary << endl;
						cout << ed3.email << endl;
						cout << endl;
					}
				}
				employee_Details.close();
			}
			void filter_money()
			{
				system("cls");

				cow_details cd3;

				char cast[40];
				cout << "Name of Generation: " <<endl;
				cin.ignore();
				cin.get(cast, 40);

				fstream cow_Details;
				cow_Details.open("cdetails.txt", ios::in);
				while (cow_Details.read((char*)(&cd3), sizeof(cd3)))
				{
					if (strcmp(cd3.generation, cast) == 0)
					{
						cout << cd3.c_num << endl;
						cout << cd3.k_num << endl;
					}
				}
				cow_Details.close();
			}
			void filter_milk()
			{
				system("cls");

				bufflo_details bd3;

				int milk;
				cout << "Higihest capactiy of giving milk " << endl;
				cin.ignore();
				cin>>milk;

				fstream bufflo_Details;
				bufflo_Details.open("bdetails.txt", ios::in);
				while (bufflo_Details.read((char*)(&bd3), sizeof(bd3)))
				{
					if ( milk == bd3.max)
					{
						cout << bd3.c_num << endl;
						cout << bd3.generation << endl;
						cout << bd3.k_num << endl;
						cout << bd3.max << endl;
						cout << endl;
					}
				}
				bufflo_Details.close();
			}
			void filter_income()
			{
				system("cls");
				managment_details md3;
				int income;
				cout << "daily income" << endl;
				cin >> income;
				fstream managment_details;
				managment_details.open("mdetails.txt", ios::in);
				while (managment_details.read((char*)(&md3), sizeof(md3)))
				{
					if (income == md3.d_incom)
						cout << md3.m_incom << endl;
					cout << md3.y_incom << endl;
					cout << endl;
				}
			}

			
			void main()
		{
			system("cls");

			int choice;
			while (true)
			{
				cout << "1) Write the Record" << endl;
				cout << "2) Read the Record" << endl;
				cout << "3) search the record" << endl;
				cout << "\nEnter the value: ";
				cin >> choice;

				switch (choice)
				{
				case 1:
					int a;
					cout << "enter(1)for write data of employ" << endl;
					cout << "enter(2)for write data of cow " << endl;
					cout << "enter(3)for write data of buffalo" << endl;
					cout << "enter(4)for write data of managment" << endl;
					cin >> a;
					if (a == 1)
						write_data1();
					else if (a == 2)
					{
						write_data2();
					}
					else if (a == 3)
					{
						write_data3();
					}
					else if (a == 4)
					{
						write_data4();
					}
					break;
				case 2:
					int b;
					cout << "enter(1)for read data of employ" << endl;
					cout << "enter(2)for read data of cow " << endl;
					cout << "enter(3)for read data of buffalo" << endl;
					cout << "enter(4)for read data of managment" << endl;
					cin >> b;

					if (b == 1)
						read_data1();
					else if (b == 2)
					{
						read_data2();
					}
					else if (b == 3)
					{
						read_data3();
					}
					else if (b == 4)
					{
						read_data4();
					}
					break;

				case 3:
					filter_mail();

					break;

				case 4:
					filter_money();

					break;
				case 5:
					filter_milk();
					break;
				case 6:
					filter_income();
				default:
					cout << "opps! invaild input" << endl;

				}
				
			}
			system("pause");
		}



