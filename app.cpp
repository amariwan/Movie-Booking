/* 
   Programming Classe project
   Author: Aland Mariwan
   Project: This program is for movie booking.
*/

#include<iostream>
#include<unistd.h>
#include <windows.h>
#include <dos.h>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void qformatup();
void qformatdown();
void listofmovies();
void printline();
int mvi_id;
int choice;
int ret;
int i = 5;
char movie_name[10][50];
int timing[10];
int bill_id = 1;
int bill_movie[3];
char bill_timing[10][6];
int seat_num[10][10];
char date[10][15];
char seat[10][6];
class enrtypoint
{
public:
	int user_menu();
	int payment_details();
	int booking();
	void showmovielist();
	int cancellation();
	string username, password, check;
	void usermenu();
	void mainmenu();
	void welcome();
	void login()
	{
		qformatup();
		cout << "WELCOME TO LOGIN PAGE";
		qformatdown();
		sleep(1);
		cout << "\n\t USERNAME: ";
		cin >> username;
		cout << "\n\tPASSWORD:";
		cin >> password;
		system("CLS");
		cout << "\tPls WAIT while CHECKING";
		sleep(4);
		cout << "\r\r\t------------------Login successfull-----------------------";
		{
			sleep(5);
			user_menu();
		}
		
	}
	void regis()
	{
		string admin, temp;
		system("CLS");
		qformatup();
		cout << "Registration from";
		qformatdown();
		cout << "\n\nFUll NAME: ";
		cin >> temp;
		cout << "\nCONTACT NUMBER: ";
		cin >> temp;
		cout << "\nEMAIL ADDRESS: ";
		cin >> temp;
		cout << "\nUSERNAME: ";
		cin >> username;
		cout << "\nPASSWORD: ";
		cin >> password;
	xy:
		cout << "\nCONFROM PASSWORD: ";
		cin >> temp;
		if (temp != password)
		{
			cout << "\tPASSWORD MISSMATCHED ";
			sleep(1);
			goto xy;
		}
	yz:
		cout << "\nPayment details ";
         payment_details();
		/*if (ch == 'y' || ch == 'Y')
		{
			cout << "Admin code: ";
			cin >> admin;
			if (admin != "5050")
			{
				cout << "!!!!!!!!!!!!!Wrong code!!!!!!!!!!!!!";
				goto yz;
			}
		}
		ofstream fill("login.txt", ios::app);
		if (admin == "5050")
			fill << "\n" << username << ' ' << password << ' ' << "admin";
		else
			fill << "\n" << username << ' ' << password << ' ' << "user";
	    admin_menu();*/
	}
	void payregis()
	{
		string admin, temp;
		system("CLS");
		qformatup();
		cout << "Credit card";
		qformatdown();
		cout << "\n\n Credit card number: ";
		cin >> temp;
		cout << "\nDate of Expiry: ";
		cin >> temp;
		cout << "\nMonth: ";
		cin >> temp;
		cout << "\nYear: ";
		cin >> temp;
		user_menu();
	}

};

void printline()
{
	cout << "\n________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n";

}
main()
{
	enrtypoint e;
	e.welcome();
	system("color b9");

}
//welcome page:
void enrtypoint::welcome()
{

	cout << "\n________________________________________________________________________________________________________________________________________________________________________________________________________________________________________________\n\n\n   ----    ---     ---  ----------  ---       	-------       -----        ------     ------   ---------";
	cout << "\n    ---   -----   ---   ---         ---         ---   ---    ---   ---     --- ---   -------   ---";
	cout << "\n     --- ------- ---    -------|    ---        ---          ---     ---    ---   -----   ---   ------|";
	cout << "\n      -------------     ---         ---------  ---   ---    ---   ---      ---           ---   ---";
	cout << "\n       -----------      ----------  ---------  -------       -----         ---           ---   ---------\n\n\n";
	qformatup();
	cout << "\t Movie ticket Management System";
	qformatdown();
	cout << "\n\n--------------------------------------------- DEVELOPED BY Aland Mariwan ----------------------------------------------";
	sleep(2);
	cout << "\n\n\t\t\t\t\t     Please wait while loading\n\n";
	char a = 177, b = 219;
	cout << "\t\t\t\t\t\t";
	for (int i = 0;i <= 15;i++)
		cout << a;
	cout << "\r";
	cout << "\t\t\t\t\t\t";
	for (int i = 0;i <= 15;i++)
	{
		cout << b;
		for (int j = 0;j <= 1e8;j++);
	}

	mainmenu();
}
void qformatup()
{
	cout << "\n\t                  ::::::::::::::::::::::::::::::::::::::::::::::::::::::";
	cout << "\n\t::::::::::::::::::                                                      :::::::::::::::::::::::::::::::";
	cout << "\n\t  			";

}
void qformatdown()
{
	cout << "\n\t::::::::::::::::::                                                      :::::::::::::::::::::::::::::::";
	cout << "\n\t                 ::::::::::::::::::::::::::::::::::::::::::::::::::::::::";

}
void enrtypoint::mainmenu()
{
	system("CLS");
	qformatup();
	cout << "        Pls login/sigup to proceede";
	qformatdown();
	int chi;
	cout << "\n[1]. Login";
	cout << "\n[2]. SIGN UP";
	cout << "\n[3]. Continue as guest";
	cout << "\n Enter ur choice: ";
	cin >> chi;
	switch (chi)
	{
	case 1:
		login();
		break;
	case 2:
		regis();
	case 3:
		user_menu();
		break;
	default:
		mainmenu();
		break;
	}
}

int enrtypoint::user_menu()
{
	system("CLS");
	qformatup();
	cout << "MENU";
	qformatdown();
	cout << "\n\n\t\t\t 1.booking" << endl;
	cout << "\t\t\t 2.cacellation" << endl;
	cout << "\t\t\t 3.Return to main menu" << endl;
	cout << "\t\t\t Enter your choice" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		booking();
		break;
	case 2:
		cancellation();
		break;
	default:
		mainmenu();
		break;

	}
	return 0;
}
int enrtypoint::payment_details()
{
	system("CLS");
	qformatup();
	cout << "Payment details";
	qformatup();
	cout << "\n\n\t\t\t How would you like to pay?" << endl;
	cout << "\t\t\t 1.VISA " << endl;
	cout << "\t\t\t 2.MasterCard " << endl;
	cout << "\n\n\tEnter your choice:   ";
	cin >> choice;
	switch (choice)
	{
	case 1:
        payregis();
		break;
	case 2:
		payregis();
		break;
	}
	return 0;
}
int enrtypoint::booking()
{
	system("CLS");
	qformatup();
	cout << "BOOK YOUR TICKET";
	qformatdown();
	showmovielist();
	cout << "\nPlease select your favorite film: [1/2/3]: ";
    cin >> bill_movie[bill_id];
	cout << "\nPlease select your 3D / 2D:[1/2]: ";
	cin >> timing[bill_id];
	for (int j = 1;j <= 5;j++)
	{
		cout << endl;
		for (int k = 1;k <= 6;k++)
		{
			cout << "\t|[" << j << "," << k << "]";

		}
	}
	cout << "\nPlease SELECT your SEAT: ";
	cin >> seat[bill_id];
	cout << "\n\n\t\t\t PLEASE WAIT..";
	for (i = 0;i < 3;i++)
	{
		cout << ".. ";
		sleep(1);
	}
	cout << "\n\n\n You have successfully booked your ticket(s)! ";
	sleep(3);
	user_menu();
}
void enrtypoint::showmovielist()
{
	cout<<"                                                                               "<<endl;
	cout<<"                                 Today's Shows                                 "<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"| Movie id  | Movie Name         |  Date             |  Time       |  Price   |"<<endl;
    cout<<"|-----------|--------------------|-------------------|-------------|----------|"<<endl;
    cout<<"| 1         | Joker              |  02-12-19         | 06-09 PM    |   $25    |"<<endl;
    cout<<"|-----------|--------------------|-------------------|-------------|----------|"<<endl;
    cout<<"| 2         | Jumanji            |  03-12-19         | 09:00 PM    |   $50    |"<<endl;
    cout<<"|-----------|--------------------|-------------------|-------------|----------|"<<endl;
	cout<<"| 3         | ZombieLand         |  04-12-19         | 08-10 PM    |   $30    |"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;

}
int enrtypoint::cancellation()
{
	system("CLS");
	qformatup();
	cout << "CANCEL MENU";
	qformatdown();
	cout << "Enter ur bill id= : ";
	int k;
	cin >> k;
	cout << "\nMOVIE: " << movie_name[bill_movie[bill_id]];
	cout << "\n\n\t\t\tPLEASE WAIT..";
	for (i = 0;i < 3;i++)
	{
		cout << ".. ";
		sleep(1);
	}
	cout << "\n\n\t\tTICKET CANCELLED";
	sleep(1);
	user_menu();

}


