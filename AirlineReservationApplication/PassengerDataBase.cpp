#include"Flights.h"
#include"Passenger.h"
#include"pch.h"
#include"FlightDataBase.h"
#include"PassengerDataBase.h"
#include <string>
#include <ctime>
#include<vector>

namespace AirlineReservationApplication {

	
		Passenger& PassengerDataBase::Add_passenger(const std::string& passportNumber, const std::string& firstName,
			const std::string& lastName, const std::string& flightNumber,const std::string&DepartureDate, const time_t& Departuretime, const time_t&arrivaltime,
			const std::string&departureCity, const std::string&arrivalCity, const std::string&seatnumber) {
			Passenger thepassenger(passportNumber, firstName, lastName, flightNumber,DepartureDate, Departuretime,arrivaltime,
				departureCity,arrivalCity,seatnumber);
			mPassenger.push_back(thepassenger);
			return mPassenger[mPassenger.size() - 1];
		}
		Passenger&PassengerDataBase::getPassenger(const std::string& passportNumber) {

			for (auto&passenger : mPassenger)
			{
				if (passenger.getPassportNumber() == passportNumber)
				{
					return passenger;
				}
			}


		}


		void PassengerDataBase::displayAllpassengerinfo()const {
			for (const auto&passenger : mPassenger)
			{
				passenger.displaypassenger();

			}
		}
	
		std::vector<Passenger> mPassenger;


	
}