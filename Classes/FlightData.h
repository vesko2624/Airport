#include <iostream>
#include <vector>
#include "FlightInfo.h"
using std::vector;
using std::cout;
using std::cin;

#ifndef FLIGHT_DATA_H
#define FLIGHT_DATA_H

class FlightData{
	public:
		FlightData();
		void display();

		void add_flight();
		void add_flight(FlightInfo flight, bool auto_adjust_id = 0);
		const int get_last_id();
		bool get_flight_by_id(FlightInfo* flight, const int& id);	
		vector<FlightInfo> get_flights_by_departure_city(string city);
		vector<FlightInfo> get_flights_by_arrival_city(string city);
	private:
		vector<FlightInfo> flights_;
};

#endif
