#include<iostream>

using namespace std;

int main()
{
	int colour, c, j;

	cout << "THE CAR COMPANY" << endl;
	cout << "\n\tTypes of car colour:" << endl;
	cout << "\n\t1.Grey\n\t2.Black\n\t3.Blue\n\t4.White\n\t5.Brown" << endl;
	cout << "\n\tEnter Choice of colour:" << endl;
	cin >> colour;
	switch (colour)
	{
	case 1:
		cout << "\n\t1.Couple\n\t" << endl;
		cout << "Enter your choice:" << endl;
		cin >> c;

		cout << "\n\t1.Four Cylinder\n\t2.Six Cylinder" << endl;
		cout << "Enter the type of engine" << endl;
		cin >> j;
		if (j == 1)
			cout << "\n\tModel is:\n\t2018 Ford Mustang" << endl;
		if(j==2)
			cout << "\n\tModel is:\n\tFarri 4x" << endl;
		break;
	case 2:
		cout << "\n\t1.Car \n\t2.Van" << endl;
		cout << "\n\tEnter your choice:" << endl;
		cin >> c;
		if (c == 1)
		{
			cout << "\n\tModel is:\n\tToyota RAV4 Hybrid" << endl;
		}
		if (c == 2)
		{
			cout << "\n\tModel is:\n\tHonda Pilot 6x" << endl;
		}
		
		break;

	case 3:
		cout << "\n\t1.Truck\n\t2.Sports Car\n\t3.Hybrid\n\t4.Luxury Car" << endl;
		cout << "\n\tEnter your choice" << endl;
		cin >> c;
		if (c == 1)
			cout << "\n\tModel is:\n\tToyota Tundra 2WD Truck" << endl;
		else if (c == 2)
			cout << "\n\tModel is:\n\t2016 Dodge Challenger" << endl;
		else if (c == 3)
			cout << "\n\tModel is:\n\t Lexus ES 300h" << endl;
		else if (c == 4)
			cout << "\n\t2018 BMW X1" << endl;
		else
			cout << "Invalid Entry" << endl;
		break;

	case 4:
		cout << "\n\t1.Suv\n\t2.Seden" << endl;
		cout << "\n\tEnter your choice" << endl;

		cin >> c;


		if (c == 1)
		{
			cout << "\n\tType of door" << endl;
			cout << "\n\t 1.Two Door\n\t 2.Four Door" << endl;
			cout << "Enter your Choice:" << endl;
			cin >> j;
			if (j == 1)
				cout << "\n\tModel is :\n\t2018 Buick Envision With two doors" << endl;
			
		}

		if (c == 2)
			cout << "\n\tModel is :\n\t2018 Kia Sorento" << endl;
		else
			cout << "Invalid Entry" << endl;


		break;
	case 5:
		
		cout << "\n\tType of Roof" << endl;
		cout << "\n\t1.Convertable" << endl;
		cin >> c;
		if (c == 1)
			cout << "\n\tModel is : BMW 4 Series" << endl;
		break;


	default:
		cout << "\n\tYou pick wrong colour:\n\tBye!" << endl;
	}
	system("pause");
}

