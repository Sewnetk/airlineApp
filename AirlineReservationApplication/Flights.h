#pragma once
#include "pch.h"
#include "Passenger.h"
#include <string>
#include <ctime>
#include<vector>
namespace AirlineReservationApplication {

	class Flight {
	public:
		Flight() = default;
		Flight(const std::string& flightNumber, const std::string&DepartureDate, const std::time_t& Departuretime, const std::time_t&arrivaltime,
			const std::string&departureCity,const std::string&arrivalCity);
		
		const std::string& getflight_seatnum()const;
		void setflight_seatnum(const std::string&flightseatnumber);
		const std :: time_t & getdeparturetime()const;
		void setdeparturetime(const std::time_t&departuretime);
		const std::time_t & getarrivaltime()const;
		void setarrivaltime(const std::time_t&arrivaltime);
		const std::string & getFlightNumber() const;
		void setflightNumber(const std::string&flightNumber);
		
		const std::string& getflightDepartureDate() const;
		void setflightDepartureDate(const std::string&DepartureDate);
		
		const std::string&getdepartureCity() const;
		void getdepartureCity(const std::string&departureCity);

		const std::string &getArrivalCity()const;
		void getArrivalCity(const std::string&arrivalCity);

		void IsFullBooked();
	
		//void flightcapacity(int amount = 300);
		void displayFlightinformation() const;
	private:
		std::string mFlightNumber;
		std::string mDepartureCity;
		std::string mArrivalCity;
		std::string mDepartureDate;
		std::time_t mdepartureTime;
		std::time_t marrivalTime;
		std::string mflightseatnumber;
		
		bool mFull = false;

		

	};

}
