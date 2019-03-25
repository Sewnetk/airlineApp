// AirlineReservationApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include <iostream>
#include "Passenger.h"
#include"Flights.h"
#include"FlightDataBase.h"
#include"PassengerDataBase.h"
#include <string>
#include <ctime>
#include<vector>
using namespace std;
using namespace AirlineReservationApplication;

int displayMenu();
void Addnewflight(FlightDataBase&db);
//void flightdisplay(FlightDataBase&db);
void flightscheduletime(FlightDataBase&db);
void displayFlightSchedule(FlightDataBase&db);
void reservseat(FlightDataBase&db,PassengerDataBase &pdb);
void displaypassengerinformation( PassengerDataBase&pdb);


int main()
{
	FlightDataBase Fdb;
	PassengerDataBase passengerdb;

	while (true) {
		int selection = displayMenu();
		switch (selection) {
		case 0:
			return 0;
		case 1:
			Addnewflight(Fdb);
			break;
		//case 2:
		//	flightdisplay(Fdb);		
		//	break;
		case 2:
			flightscheduletime(Fdb);
			break;
		case 3:
			displayFlightSchedule(Fdb);
			break;
		case 4:
			reservseat(Fdb, passengerdb);
			break;
		case 5:
			displaypassengerinformation(passengerdb);
			break;

		default:
			cerr << "Unknown command. Try again." << endl;
			break;
		}
	}
	return 0;
}

	
	int displayMenu() 
	{
		
		int selection;
		cout << endl;
		cout << " menu for Flight " << endl;
		cout << "-----------------" << endl;
		cout<<" 1:Add new flight" << endl;
		cout << " 2:  flights scheduletime  " << endl;
		cout << " 3:  display FlightSchedule  " << endl;
					
		cout << " 4: Reserve flight seat number: " << endl;
		cout << "5: display passenger ticker information:  " << endl;
		
		cout << "0. exit" << endl;
		cout << "------------------" << endl;

		cin >> selection;
		return selection;
	}
	void Addnewflight(FlightDataBase&db) {
		string flightNumber; string flightdate;
		time_t flightdeparturetime;
		time_t flightarrivaltime;
		string departurecity; string arrivalcity;
		cout << "flightnumber?";
		cin >> flightNumber;
		cout << "departuredate?";
		cin >> flightdate;
		cout << "departuretime?";
		cin >> flightdeparturetime;
		cout << "arrivaltime:";
		cin >> flightarrivaltime;
		cout << "departurecity?";
		cin >> departurecity;
		cout << "arrival city?";
		cin >> arrivalcity;
		db.addFlight(flightNumber, flightdate, flightdeparturetime,
			flightarrivaltime, departurecity, arrivalcity);
	}

	/*void flightdisplay(FlightDataBase&db) {
		string choice;
		cout << "would you like to see current flight schedule? Y?N?";
		cin >> choice;
		if (choice=="Yes")
		{
			db.displayflightAll();
		}
	}*/


	void reservseat(FlightDataBase&db, PassengerDataBase &pdb) {
		string choice;
		string passnum;
		string Fname; string Lname;
		string flightNumber; string flightdate;
		time_t flightdeparturetime;
		time_t flightarrivaltime;
		string departurecity; string arrivalcity; string seatnum;
		cout << "enter first name";
		cin >> Fname;
		cout << " last name";
		cin >> Lname;
		cout << " enter passport number";
		cin >>passnum;
		
		cout << "flightnumber?";
		cin >> flightNumber;
		cout << "departuredate?";
		cin >> flightdate;
		cout << "departuretime?";
		cin >> flightdeparturetime;
		cout << "arrivaltime:";
		cin >> flightarrivaltime;
		cout << "departurecity?";
		cin >> departurecity;
		cout << "arrival city?";
		cin >> arrivalcity;
		cout << "chose seat number"; cin >> seatnum;

		pdb.Add_passenger(passnum, Fname, Lname, flightNumber, flightdate,
			flightdeparturetime,flightarrivaltime,departurecity,arrivalcity,seatnum);
		cout << "THANK YOU for choosing our airlines, enter Yes to see your ticket or No to exit:";
			cin >> choice;
			if (choice == "Yes")
			{
				pdb.displayAllpassengerinfo();
			}
		
			}
	void displaypassengerinformation( PassengerDataBase & pdb)
	{
		Passenger passenger;
		string pnumber;
		cout << " please enter passport number";
		cin >> pnumber;

		if(!NULL(pdb.getPassenger(pnumber)))
		{
			pdb.displayAllpassengerinfo();
		}
		else
		{
			throw logic_error("passport number not found");

		}

		

	}
	void displayFlightSchedule(FlightDataBase&db) {

		string flightschedule;
		cout << "would you like to see current flight schedule? Y?N?"<<" ";
		cin >>flightschedule;
		if (flightschedule == "Yes")
		{
			db.displayflightAll();
		}
	}
	void flightscheduletime(FlightDataBase&db) {
		Flight flight;
		string number;
		cout << " please enter flight number"<<"  ";
		cin >> number;
		if(!NULL( db.getFlight(number)))
		{
			db.displayflightAll();
		}
		else
		{
			throw logic_error("flight number not found");

		}
		

	}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
