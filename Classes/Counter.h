#include <vector>
#include "FlightInfo.h"
// Here will be #include "UserData.h"
using std::vector;

#ifndef COUNTER_H
#define COUNTER_H

struct container{
	container(): count(0){}
	container(string city): city(city), count(1){}
	int count;
	string city;
};
class Counter{
	public:
		Counter();
		void add_flight(FlightInfo& flight);
		void add_user();
		bool count_flight_departure(string& city, int& num_flight) const;
		bool count_flight_frequent_requests() const;
	private:
		vector<container> cities;
};
#endif
