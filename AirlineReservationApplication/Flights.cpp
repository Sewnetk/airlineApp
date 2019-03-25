#include "pch.h"
#include"Passenger.h"
#include <iostream>
#include"Flights.h"
using namespace std;
namespace AirlineReservationApplication {
	Flight::Flight(const std::string& flightNumber, const std::string&DepartureDate, const std::time_t& Departuretime, const std::time_t&arrivaltime,
		const std::string&departureCity, const std::string&arrivalCity):
		mFlightNumber(flightNumber),mDepartureDate(DepartureDate),mdepartureTime(Departuretime),marrivalTime(arrivaltime), mDepartureCity(departureCity),
		mArrivalCity(arrivalCity)
	{

	}
	void Flight::IsFullBooked() {
		mFull = true;
	}
	const std::string&Flight::getflight_seatnum()const {
		return mflightseatnumber;

	}
	void Flight::setflight_seatnum(const std::string&flightseatnumber) {
		mflightseatnumber = flightseatnumber;
	}
	const std::time_t &Flight:: getdeparturetime()const {
		return mdepartureTime;
				
	}
	void Flight::setdeparturetime(const std::time_t&departuretime) {
		mdepartureTime = departuretime;
	}
	const std::time_t &Flight:: getarrivaltime()const {
		return marrivalTime;
	}
	void Flight::setarrivaltime(const std::time_t&arrivaltime) {
		marrivalTime = arrivaltime;
	}
	const std::string&Flight::getFlightNumber() const {
		return mFlightNumber;
	}
	void Flight:: setflightNumber(const std::string&flightNumber) {

		mFlightNumber = flightNumber;
	}

	const std::string& Flight::getflightDepartureDate() const {
		return mDepartureDate;
	}
	void Flight:: setflightDepartureDate(const std::string&DepartureDate) {
		mDepartureDate= DepartureDate;
	}

	const std::string& Flight::getdepartureCity() const {
		return mDepartureCity;
	}

	void Flight:: getdepartureCity(const std::string&departureCity) {
		mDepartureCity = departureCity;
	}

	const std::string & Flight::getArrivalCity()const {
		return mArrivalCity;
	}
	void Flight:: getArrivalCity(const std::string&arrivalCity) {
		mArrivalCity = arrivalCity;
	}

	//void Flight::flightcapacity(int n) {

	//}
	void Flight::displayFlightinformation() const {
		cout << "flightnumber:"  << "departureDate:" << "arrivalCIty: " << "arrivalTime: " << "departureCity: " << "departuretime:" << endl;
		cout << "***********************************************************" << endl;
		cout << getFlightNumber()<<" ,  " << getflightDepartureDate()<<",   " << getArrivalCity()<<",    " << getarrivaltime()<<",  "<< getdepartureCity()<<",    " << getdeparturetime();
		

	}
}