#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "../Airport.h"
#include "FlightData.h"
using std::string;
using std::cout; using std::cin;
using std::vector; using std::pair;

#ifndef _PathFinder_
#define _PathFinder_

struct a_flight{
	a_flight(const int& id, const int& city, const Date& time, const double& price): id(id), city(city), arrival_time(time), price(price){}
	int id, city;
	Date arrival_time;
	double price;
};

struct complexRoute{
	int tracker, price;
	vector<a_flight> passed_cities;
	complexRoute(): tracker(-2){}
	complexRoute(vector<a_flight> cities): tracker(cities.size() - 2), passed_cities(cities){
		for(a_flight flight : cities)
			price += flight.price;
	}
};

struct BestFlight{
	complexRoute byFlights;
	complexRoute byPrice;
};

bool get_to_city(vector<complexRoute>&, vector<a_flight>, vector<a_flight>*, const int&, const int&, const int&);
vector<complexRoute> getRoute(vector<a_flight>*, const int&, const int&, const int&);

class PathFinder{
	public:
		PathFinder(FlightData&);
		FlightData get_best_flight(const string&, const string&);
		FlightData get_best_price(const string&, const string&);
		vector<FlightData> get_all_flights(const string&, const string&);
	private:
		FlightData data_;
		vector<FlightInfo> flights_;
};

#endif