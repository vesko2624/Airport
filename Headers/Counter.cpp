#include "../Classes/Counter.h"
Counter::Counter(){
	
}
void Counter::add_flight(FlightInfo& flight){
	for(int i = 0; i < cities.size(); ++i){
		if(cities[i].city == flight.get_route().get_departure()){
			++cities[i].count;
			return;
		}
	}
	cities.push_back(container(flight.get_route().get_departure()));
}
void Counter::add_user(){
	
}
bool Counter::count_flight_departure(string& city, int& num_flights) const{
	num_flights = 0;
	for(int i = 0; i < cities.size(); ++i){
		if(cities[i].count > num_flights){
			city = cities[i].city;
			num_flights = cities[i].count;
		}
	}
	return cities.size();
}
bool Counter::count_flight_frequent_requests() const{
	
}
