#include<iostream>
using namespace std;
int main()
{
	
	int a,b,c;
    char ch;
	
	do{

	cout<<"Enter the Month Number"<<endl;
	cin>>a;
	system ("CLS");
	switch(a)

	{
		
		case 1:
		{
			for(int i=1;i<=31;i++)
			{
			cout<<"January"<<"/"<<i<<"/"<<"2020" <<"\t\n"<<endl;
			}
			
			break;
			}
		case 2:
		{
		cout<<"IS the Year is Leap (Ans 1/0) "<<endl;
		cin>>c;		
		if(c==0)
		{
		for(int i=1;i<=28;i++)
		{
		cout<<"february"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
		}
			
			break;
		}
		else if(c==1)	
		{
		for(int i=1;i<=29;i++)
		{
			cout<<"february"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
		}
		
			break;
		}
	}
			case 3:
		{
			for(int i=1;i<=31;i++)
			{
			
			cout<<"March"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
		}
			break;
			}
				case 4:
		{
			for(int i=1;i<=30;i++)
			{
			
			cout<<"April"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
		}
			break;
			}
				case 5:
		{
			for(int i=1;i<=31;i++)
			cout<<"May"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			break;
			}
				case 6:
		{
			for(int i=1;i<=30;i++)
			{
			cout<<"june"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			}
			
			break;
			}
				case 7:
		{
			for(int i=1;i<=31;i++)
			{
			cout<<"july"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			}
			
			break;
			}
				case 8:
		{
			for(int i=1;i<=31;i++)
			{
			cout<<"August"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			}
			
			break;
			}
				case 9:
		{
			for(int i=1;i<=30;i++)
			{
			cout<<"September"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			}
			
			break;
			}	
				case 10:
		{
			for(int i=1;i<=31;i++)
			{
			cout<<"Octuber"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			}
			
			break;
			}
				case 11:
		{
			for(int i=1;i<=30;i++)
			{
			cout<<"November"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			}
			
			break;
			}
				case 12:
		{
			for(int i=1;i<=31;i++)
			{
			cout<<"Decmber"<<"/"<<i<<"/"<<"2020"<<"\t\n"<<endl;
			}
			
			break;
			}
			default :
				{
					cout<<"Enter the Number of month Only!"<<"\t\n"<<endl;
				}
	}
	system ("Pause");
	system("CLS");
cout<<"Do you want Again? Y / N"<<endl;
	cin>>ch;
		system("CLS");
}	while (ch =='y' || ch =='Y');
	
return 0;

}
	
	




