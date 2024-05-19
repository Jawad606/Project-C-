#include<iostream>
002
#include<iomanip>
003
#include<windows.h>
004
#include<string>
005

006
using namespace std;
007

008

009
class Flight
	010
{
	011
public:
	012
		void getInfo()
		013
	{
		014
			cout << setw(40) << "\n\nPASSENGER INFORMATION";
		015
			cout << "\n\n\nEnter FIRST NAME: ";
		016
			cin.getline(firstname, 60);
		017
			cout << "\nEnter LAST NAME: ";
		018

			019
			cin.getline(lastname, 60);
		020
			cout << endl;
		021

			022
			cout << "Enter CONTACT NUMBER: ";
		023
			cin >> contact;
		024
			cout << endl << endl;
		025
			system("CLS");
		026

			027
	};
	028

		029
		int num;
	030
		char firstname[60];
	031
		char lastname[60];
	032
		int contact;
	033

		034
};
035

036

037
class booking : public Flight
	038
{
	039
public:
	040
		void chooseAirlineInternational()
		041
	{
		042
			cout << "\nIn which AIRLINE you want to travel" << endl << endl;
		043
			cout << "(1) - Philippine Airlines" << endl;
		044
			cout << "(2) - Cebu Pacific" << endl;
		045

			046
			cout << "\nEnter your choice: ";
		047
			cin >> airline;
		048

			049
			system("cls");
		050

			051
			switch (airline)
				052
			{
				053
			case 1:
				054

					055
					cout << "\n\n" << setw(55) << "WELCOME TO PHILIPPINE AIRLINES" << endl;
				056
					chooseInternationalDestination();
				057
					break;
				058
			case 2:
				059
					if (airline == 2)
						060
						cout << "\n\n" << setw(55) << "WELCOME TO CEBU PACIFIC AIR" << endl;
				061
					chooseInternationalDestination();
				062
					break;
				063
			default:
				064
					cout << "\n\nInvalid Choice! Try Again.";
				065
			}
		066
	};
	067

		068
		void chooseAirlineLocal()
		069
	{
		070
			cout << "\nIn which AIRLINE you want to travel" << endl << endl;
		071
			cout << "(1) - Philippine Airlines" << endl;
		072
			cout << "(2) - Cebu Pacific" << endl;
		073

			074

			075
			cout << "\nEnter your choice: ";
		076
			cin >> airline;
		077

			078
			system("cls");
		079

			080
			switch (airline)
				081
			{
				082
			case 1:
				083

					084
					cout << "\n\n" << setw(55) << "WELCOME TO PHILIPPINE AIRLINES" << endl;
				085
					chooseLocalDestination();
				086
					break;
				087
			case 2:
				088
					if (airline == 2)
						089
						cout << "\n\n" << setw(55) << "WELCOME TO CEBU PACIFIC AIR" << endl;
				090
					chooseLocalDestination();
				091

					092
					break;
				093
			default:
				094
					cout << "\n\nInvalid Choice! Try Again.";
				095
			}
		096
	};
	097

		098
		void chooseLocalDestination()
		099
	{
		100
			cout << "Here are the available LOCAL flights:" << endl << endl;
		101
			cout << "---------------" << endl;
		102
			cout << "(1) - CATICLAN" << endl;
		103
			cout << "(2) - CEBU" << endl;
		104
			cout << "(3) - CLARK" << endl;
		105
			cout << "(4) - DAVAO" << endl;
		106
			cout << "(5) - LAOAG" << endl;
		107
			cout << "(6) - LEGAZPI" << endl;
		108
			cout << "(7) - PUERTO PRINCESA" << endl;
		109
			cout << "\n(0) - Go Back" << endl;
		110
			cout << "---------------" << endl;
		111
			cout << "\nEnter your choice: ";
		112
			cin >> destinationChoice;
		113
			cout << endl << endl;
		114

			115
			switch (destinationChoice)
				116
			{
				117
			case 1:
				118
					destination = "CATICLAN";
				119
					price = 3000;
				120
					break;
				121
			case 2:
				122
					destination = "CEBU";
				123
					price = 2500;
				124
					break;
				125
			case 3:
				126
					destination = "CLARK";
				127
					price = 1500;
				128
					break;
				129
			case 4:
				130
					destination = "DAVAO";
				131
					price = 3000;
				132
					break;
				133
			case 5:
				134
					destination = "LAOAG";
				135
					price = 2500;
				136
					break;
				137
			case 6:
				138
					destination = "LEGAZPI";
				139
					price = 2000;
				140
					break;
				141
			case 7:
				142
					destination = "PUERTO PRINCESA";
				143
					price = 3500;
				144
					break;
				145
			case 0:
				146
					system("cls");
				147
					chooseAirlineLocal();
				148
					break;
				149
			default:
				150
					cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
				151
					system("cls");
				152
					exit(0);
				153

					154
			}
		155

			156
			chooseTrip();
		157
	};
	158

		159
		void chooseInternationalDestination()
		160
	{
		161
			booking b;
		162

			163
			cout << "Here are the available INTERNATIONAL flights:" << endl << endl;
		164
			cout << "---------------" << endl;
		165
			cout << "(1) - BANGKOK" << endl;
		166
			cout << "(2) - BEIJING" << endl;
		167
			cout << "(3) - DUBAI" << endl;
		168
			cout << "(4) - HONGKONG" << endl;
		169
			cout << "(5) - SEOUL" << endl;
		170
			cout << "(6) - MACAU" << endl;
		171
			cout << "(7) - OSAKA" << endl;
		172

			173
			cout << "\n(0) - Go Back" << endl;
		174
			cout << "---------------" << endl;
		175
			cout << "\nEnter your choice: ";
		176
			cin >> destinationChoice;
		177

			178
			switch (destinationChoice)
				179
			{
				180
			case 1:
				181
					destination = "BANGKOK";
				182
					price = 6500;
				183
					break;
				184
			case 2:
				185
					destination = "BEIJING";
				186
					price = 10000;
				187
					break;
				188
			case 3:
				189
					destination = "DUBAI";
				190
					price = 8500;
				191
					break;
				192
			case 4:
				193
					destination = "HONGKONG";
				194
					price = 4500;
				195
					break;
				196
			case 5:
				197
					destination = "SEOUL";
				198
					price = 12000;
				199
					break;
				200
			case 6:
				201
					destination = "MACAU";
				202
					price = 3800;
				203
					break;
				204
			case 7:
				205
					destination = "OSAKA";
				206
					price = 9500;
				207
					break;
				208
			case 0:
				209
					system("cls");
				210
					chooseAirlineInternational();
				211
					break;
				212
			default:
				213
					cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
				214
					system("cls");
				215
					exit(0);
				216

					217

					218
			}
		219

			220
			chooseTrip();
		221

			222

			223
	};
	224

		225
		void chooseTrip()
		226
	{
		227
			cout << "\nOne-way or Round Trip?" << endl;
		228
			cout << "----------------------" << endl;
		229
			cout << "(1) - One-way Trip" << endl;
		230
			cout << "(2) - Round Trip" << endl;
		231
			cout << "----------------------" << endl;
		232
			cout << "\nEnter your choice: ";
		233
			cin >> tripChoice;
		234

			235
			switch (tripChoice)
				236
			{
				237
			case 1:
				238
					trip = "ONE WAY";
				239
					break;
				240
			case 2:
				241
					trip = "ROUND TRIP";
				242
					price = price * 2;
				243
					break;
				244
			case 0:
				245

					246
					system("cls");
				247
					break;
				248
			default:
				249
					cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
				250
					system("cls");
				251
					exit(0);
				252

					253
			}
		254
			chooseDate();
		255
	};
	256

		257

		258
		void chooseDate()
		259
	{
		260
			cout << "\nCHOOSE THE DATE OF YOUR DEPARTURE" << endl;
		261
			cout << "----------------------" << endl;
		262
			cout << "(1) - September 23" << endl;
		263
			cout << "(2) - September 24" << endl;
		264
			cout << "(3) - September 25" << endl;
		265

			266
			cout << "\n(0) - Go Back" << endl;
		267
			cout << "----------------------" << endl;
		268
			cout << "\nEnter your choice: ";
		269
			cin >> dateChoice;
		270

			271
			switch (dateChoice)
				272
			{
				273
			case 1:
				274
					date = "23/Sept/2013";
				275
					system("cls");
				276
					cout << "\nFlight available!\n";
				277
					break;
				278
			case 2:
				279
					date = "24/Sept/2013";
				280
					system("cls");
				281
					cout << "\nSorry, Flight not available! Please choose another date.\n";
				282
					chooseDate();
				283
					break;
				284
			case 3:
				285
					date = "25/Sept/2013";
				286
					system("cls");
				287
					cout << "\nFlight available!\n";
				288
					break;
				289
			default:
				290
					cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
				291
					system("cls");
				292
					exit(0);
				293

					294

					295
			}
		296

			297
			chooseTime();
		298
	};
	299

		300
		void chooseTime()
		301
	{
		302
			cout << "\nAVAILABLE TIMES FOR DEPARTURE" << endl;
		303
			cout << "----------------------" << endl;
		304
			cout << "(1) - 5:00 AM" << endl;
		305
			cout << "(2) - 8:45 AM" << endl;
		306
			cout << "(3) - 3:00 PM" << endl;
		307
			cout << "(4) - 9:45 PM" << endl;
		308

			309
			cout << "\n(0) - Go Back" << endl;
		310
			cout << "----------------------" << endl;
		311
			cout << "\nEnter your choice: ";
		312
			cin >> timeChoice;
		313

			314
			switch (timeChoice)
				315
			{
				316
			case 1:
				317
					time = "5:00 AM";
				318
					break;
				319
			case 2:
				320
					time = "8:45 AM";
				321
					break;
				322
			case 3:
				323
					time = "3:00 PM";
				324
					break;
				325
			case 4:
				326
					time = "9:45 PM";
				327
					break;
				328
			case 0:
				329
					system("cls");
				330
					chooseDate();
				331
					break;
				332
			default:
				333
					cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
				334
					system("cls");
				335
					exit(0);
				336

					337
			}
		338
			chooseClass();
		339
	};
	340

		341
		void chooseClass()
		342
	{
		343

			344
			cout << "\nIn which class you want to travel?" << endl;
		345
			cout << "\n---------------" << endl;
		346
			cout << "(1) - BUSINESS CLASS" << endl;
		347
			cout << "(2) - ECONOMY CLASS" << endl;
		348
			cout << "\n(0) - Go Back" << endl;
		349
			cout << "---------------" << endl;
		350
			cout << "\nEnter your choice: ";
		351
			cin >> classChoice;
		352

			353
			switch (classChoice)
				354
			{
				355
			case 1:
				356
					classType = "BUSINESS CLASS";
				357
					price = price * 3;
				358
					break;
				359
			case 2:
				360
					classType = "ECONOMY CLASS";
				361
					break;
				362
			case 0:
				363
					system("cls");
				364
					chooseTime();
				365
					break;
				366
			default:
				367
					cout << "\nInvalid Choice! Sorry, the program will exit now.\n\n";
				368
					system("cls");
				369
					exit(0);
				370

					371
			}
		372

			373
			enterSeats();
		374
	};
	375

		376
		void enterSeats()
		377
	{
		378
			cout << "\nEnter number of seats to be booked: " << endl;
		379
			cin >> seats;
		380
			price = price * seats;
		381

			382
			getInfo();
		383

			384
	};
	385

		386

		387

		388

		389
		void show()
		390
	{
		391
			int t = 1;
		392
			int r = 1;
		393

			394
			cout << setw(50) << "NAIA 123 TICKETING" << endl;
		395
			cout << setw(45) << "AIRLINE TICKET DETAILS" << endl << endl;
		396
			cout << "|Ticket No: " << t << "\t\t\tReference No: " << r
			397
			<< endl << "|_________________________________________________________________________"
			398
			<< endl << " PASSENGER INFORMATION"
			399
			<< endl << " Name: " << lastname << "/" << firstname
			400
			<< endl << " Contact Number: " << contact
			401

			402
			<< endl << "|_________________________________________________________________________"
			403
			<< endl << " FLIGHT INFORMATION"
			404
			<< endl << " Origin: MANILA"
			405
			<< endl << " Destination: " << destination
			406
			<< endl << " BOEING 747"
			407
			<< endl << " Date: " << date
			408
			<< endl << " Time: " << time
			409

			410
			<< endl << endl << " " << trip
			411
			<< endl << " " << classType
			412
			<< endl << " Number of seat/s: " << seats
			413

			414
			<< endl << "_________________________________________________________________________"
			415
			<< endl << " PRICE: " << price;
		416

			417

			418
			cout << "\n\nPLEASE DOUBLE CHECK";
		419
			cout << "\n(1) - Confirm";
		420
			cout << "\n(2) - Go Back";
		421
			cout << "\n\nEnter choice: ";
		422
	};
	423

		424

		425

		426
protected:
	427
		int airline;
	428
		int destinationChoice;
	429
		string destination;
	430

		431
		int tripChoice;
	432
		string trip;
	433

		434
		int dateChoice;
	435
		string date;
	436

		437
		int timeChoice;
	438
		string time;
	439

		440
		int classChoice;
	441
		string classType;
	442

		443
		double price;
	444

		445
		int seats;
	446

		447

		448
};
449

450

451
int main()
452
{
	453
		booking b;
	454
		int menu_choice;
	455

		456
		SetConsoleTitle("NAIA 123 TICKETING");
	457
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t           WELCOME TO NAIA 123 TICKETING";
	458
		Sleep(1500);
	459
		system("cls");
	460

		461
		cout << "\n\n\n\n\n\n";
	462
		cout << setw(60) << "*************************************" << endl;
	463
		cout << setw(60) << "*        NAIA 123 TICKETING         *" << endl;
	464
		cout << setw(60) << "*             MAIN MENU             *" << endl;
	465
		cout << setw(60) << "*        ENTER YOUR CHOICE          *" << endl;
	466
		cout << setw(60) << "*   PRESS 1 FOR LOCAL BOOKING       *" << endl;
	467
		cout << setw(60) << "* PRESS 2 FOR INTERNATIONAL BOOKING *" << endl;
	468
		cout << setw(60) << "*   PRESS 3 FOR SEARCH OF FLIGHTS   *" << endl;
	469
		cout << setw(60) << "*************************************" << endl << endl << endl;
	470
		cout << setw(60) << "    ENTER YOUR CHOICE: ";
	471
		cin >> menu_choice;
	472

		473

		474

		475
		system("cls");
	476

		477
		switch (menu_choice)
			478
		{
			479
		case 1:
			480
				b.chooseAirlineLocal();
			481

				482

				483
				break;
			484

				485

				486
		case 2:
			487
				b.chooseAirlineInternational();
			488
				break;
			489

				490
		}
	491

		492
		/* int t = 1;
		493
		int r = 1;
		494
		r=t+12365;
		495
		cout<<setw(60)<<"NAIA 123 TICKETING"<<endl;
		496
		cout<<setw(60)<<"AIRLINE TICKET DETAILS"<<endl<<endl;
		497
		cout<<"|Ticket No: "<<t<<"\t\t\tReference No: "<<r
		498
			<<endl<<"_________________________________________________________________________"
		499
			<<endl<<"PASSENGER INFORMATION"
		500
			<<endl<<"Name: "<<a.lastname<<"/"<<a.firstname;*/
		501

		502

		503
		b.show();
	504
		system("pause");
	505

		506

		507
		return 0;
	508

		509
}
