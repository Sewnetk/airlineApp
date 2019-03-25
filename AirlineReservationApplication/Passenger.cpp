#include "pch.h"
#include"Passenger.h"
#include <iostream>
#include<time.h>
#include"Flights.h"
using namespace std;
namespace AirlineReservationApplication {
	Passenger:: Passenger(const std::string& passportNumber,const std::string&firstName,
		const std::string& lastName, const std::string& flightNumber, const std::string&DepartureDate, const time_t& Departuretime, const time_t&arrivaltime,
		const std::string&departureCity, const std::string&arrivalCity, const std::string&seatnumber) :
		mPassportNumber(passportNumber), mFirstName(firstName), mLastName(lastName), mFlightNumber(flightNumber), mDepartureDate(DepartureDate), mdepartureTime(Departuretime), marrivalTime(arrivaltime), mDepartureCity(departureCity),
		mArrivalCity(arrivalCity), mflightseatnumber(seatnumber)
	{

	}
	void Passenger::setPassportNumber(const std::string& passportNumber) {
		mPassportNumber = passportNumber;
	}
	
	
	const std::string&Passenger::getPassportNumber()const {
		return mPassportNumber;
	}
	void Passenger::setFirstName(const std::string& firstName) {
		mFirstName = firstName;
	}
	const std::string&Passenger::getFirstName()const {
		return mFirstName;
	}

	void Passenger::setLastName(const std::string& lastName) {
		mLastName = lastName;
	}
	
	const std::string&Passenger::getLastName()const {
		return mLastName;
	}





	const std::string&Passenger::getflight_seatnum()const {
		return mflightseatnumber;

	}
	void Passenger::setflight_seatnum(const std::string&flightseatnumber) {
		mflightseatnumber = flightseatnumber;
	}
	const time_t &Passenger::getdeparturetime()const {
		return mdepartureTime;

	}
	void Passenger::setdeparturetime(const time_t&departuretime) {
		mdepartureTime = departuretime;
	}
	const time_t &Passenger::getarrivaltime()const {
		return marrivalTime;
	}
	void Passenger::setarrivaltime(const time_t&arrivaltime) {
		marrivalTime = arrivaltime;
	}
	const std::string&Passenger::getFlightNumber() const {
		return mFlightNumber;
	}
	void Passenger::setflightNumber(const std::string&flightNumber) {

		mFlightNumber = flightNumber;
	}

	const std::string& Passenger::getflightDepartureDate() const {
		return mDepartureDate;
	}
	void Passenger::setflightDepartureDate(const std::string&DepartureDate) {
		mDepartureDate = DepartureDate;
	}

	const std::string& Passenger::getdepartureCity() const {
		return mDepartureCity;
	}

	void Passenger::getdepartureCity(const std::string&departureCity) {
		mDepartureCity = departureCity;
	}

	const std::string & Passenger::getArrivalCity()const {
		return mArrivalCity;
	}
	void Passenger::getArrivalCity(const std::string&arrivalCity) {
		mArrivalCity = arrivalCity;
	}
		   	   	  
	void Passenger::displaypassenger() const {
		cout << "Passport number:" << "firstName:" << "lastname:" << "seatNumber:" << "departureDate:" << "departuretime:" << "departurecity" << "arrivalcity" << "Arrivaltime"; 
		cout << endl;
		cout<<"----------------------------------------------------------------------------------------------------------------" <<endl;
		cout<< getPassportNumber()<<", " <<getFirstName() << "," << getLastName()<<"<" << getflight_seatnum()
			<< getflightDepartureDate() << "," << getdeparturetime() << ","<< getdepartureCity() << "," << getArrivalCity() << "," << getarrivaltime();
		cout << endl;
	}
	
}