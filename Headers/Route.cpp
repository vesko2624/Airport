#include "Classes/Route.h"


/* Operators overloading */
void Route::operator=(string full_route){
	for(int i = 0; i < full_route.length(); ++i)
		if( !((full_route[i] >= 'a' && full_route[i] <= 'z') || 
			(full_route[i] >= 'A' && full_route[i] <= 'Z') || 
			full_route[i] == ' ') ){ // Remove all unnecessary symbols
			
			full_route.erase(i, 1);
			i--;
			
		}
	stringstream string_stream(full_route);
	string_stream >> this-> departure >> this-> arrival;
}

basic_ostream<char>& operator<<(basic_ostream<char>& output_stream, const Route& flight){
	string full_route = flight.departure + " - " + flight.arrival;
	return output_stream << full_route;
}


basic_istream<char>& operator>>(basic_istream<char>& input_stream, Route& flight_route){
	// cin getline the Route in a string and calls operator=
	string route_as_string;
	getline(input_stream, route_as_string);
	flight_route = route_as_string;
	return input_stream;
}

