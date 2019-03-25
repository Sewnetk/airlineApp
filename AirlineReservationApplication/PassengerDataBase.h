#pragma once
#include"Flights.h"
#include"Passenger.h"
#include"pch.h"
#include"FlightDataBase.h"
#include <string>
#include <ctime>
#include<vector>
using namespace std;
namespace AirlineReservationApplication {

	class PassengerDataBase {
	public:
		Passenger& Add_passenger(const std::string& passportNumber, const std::string& firstName,
			const std::string& lastName, const std::string& flightNumber, const std::string&DepartureDate,
			const time_t& Departuretime, const time_t&arrivaltime,
			const std::string&departureCity, const std::string&arrivalCity, const std::string&seatnumber);
		Passenger& getPassenger(const std::string& passportNumber);
			
		void displayAllpassengerinfo() const;
	private:
		std::vector<Passenger> mPassenger;
		
	};
}