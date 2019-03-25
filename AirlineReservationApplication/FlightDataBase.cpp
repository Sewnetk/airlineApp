#include"Flights.h"
#include"Passenger.h"
#include"pch.h"
#include"FlightDataBase.h"
#include <string>
#include <ctime>
#include<vector>
#include<stdexcept>
namespace AirlineReservationApplication {

	Flight& FlightDataBase::addFlight(const std::string& flightNumber, const std::string&DepartureDate,
		const std::time_t& Departuretime, const std::time_t&arrivaltime,
		const std::string&departureCity, const std::string&arrivalCity) {
		Flight bookFlight(flightNumber, DepartureDate,Departuretime,arrivaltime, departureCity, arrivalCity);
		mFlight.push_back(bookFlight);
		return mFlight[mFlight.size() - 1];
	}
		
	Flight& FlightDataBase::getFlight(const std::string& flightNumber) {
		
		for (auto&flight:mFlight)
		{
			if (flight.getFlightNumber()==flightNumber)
			{
			 return flight;
			}

		}
		
		//throw logic_error("no flight found");
	}


	void FlightDataBase::displayflightAll()const {
		for (const auto&flight:mFlight)
		{
			flight.displayFlightinformation();

		}
	}



}