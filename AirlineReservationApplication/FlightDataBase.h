#pragma once
#include"Flights.h"
#include"Passenger.h"
#include"pch.h"
#include <string>
#include <ctime>
#include<vector>
namespace AirlineReservationApplication {
	//int ktotalseatperFlight = 200;
	class FlightDataBase {
	public:
		Flight& addFlight(const std::string& flightNumber, const std::string&DepartureDate, const std::time_t& Departuretime, const std::time_t&arrivaltime,
			const std::string&departureCity, const std::string&arrivalCity); 
		Flight&getFlight(const std::string& flightNumber);
		

		void displayflightAll()const;
	private:
		std::vector<Flight> mFlight;
		

	};
	


}
