#pragma once
# include<string>

namespace AirlineReservationApplication {
	class Passenger {
	public:
		Passenger() = default;
		Passenger(const std::string& passportNumber, const std::string& firstName, const std::string& lastName,
			const std::string& flightNumber, const std::string&DepartureDate, const time_t& Departuretime, const time_t&arrivaltime,
			const std::string&departureCity, const std::string&arrivalCity,const std::string&seatnumber);

		const std::string &getPassportNumber()const;
		void setPassportNumber(const std::string&passportNumber);
		const std::string &getFirstName()const;
		void setFirstName(const std::string&firstName);
		const std::string & getLastName()const;
		void setLastName(const std::string&lastName);



		const std::string& getflight_seatnum()const;
		void setflight_seatnum(const std::string&flightseatnumber);
		const time_t & getdeparturetime()const;
		void setdeparturetime(const time_t&departuretime);
		const time_t & getarrivaltime()const;
		void setarrivaltime(const time_t&arrivaltime);
		const std::string & getFlightNumber() const;
		void setflightNumber(const std::string&flightNumber);

		const std::string& getflightDepartureDate() const;
		void setflightDepartureDate(const std::string&DepartureDate);

		const std::string&getdepartureCity() const;
		void getdepartureCity(const std::string&departureCity);

		const std::string &getArrivalCity()const;
		void getArrivalCity(const std::string&arrivalCity);

		void displaypassenger()const;
	private:
		std::string mFirstName;
		std::string mLastName;
		std::string mPassportNumber;


	
		std::string mFlightNumber;
		std::string mDepartureCity;
		std::string mArrivalCity;
		std::string mDepartureDate;
		time_t mdepartureTime;
		time_t marrivalTime;
		std::string mflightseatnumber;


	};


}