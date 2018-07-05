#include "Classes/FlightInfo.h"
/* Static variables */
long long FlightInfo::lastFlightId = 0;


/* Methods */
FlightInfo::FlightInfo(){
	
}
FlightInfo::FlightInfo(string Route, string DepartureTime, string ArrivalTime, double Price){
	// This constructor shall be used only when reading from files
	this-> id				= ++lastFlightId;
	this-> route			= Route;
	this-> departureTime	= DepartureTime;
	this-> arrivalTime		= ArrivalTime;
	this-> price			= Price;
}


/* Operators overloading */
ostream& operator<<(ostream& Stream, const FlightInfo& Flight){
	Date	departure = Flight.departureTime,
			arrival = Flight.arrivalTime;
 	Stream 	<< "Flight id:" 	<< tabs << Flight.id 	<< '\n'
			<< "Flight route:"	<< tabs << Flight.route	<< '\n'
			<< "Departure at:"	<< tabs << departure 	<< '\n'
			<< "Arrives at:"	<< tabs << arrival 		<< '\n'
			<< "Price:"	<< tabs << Flight.price << '\n';
	return Stream;
}
istream& operator>>(istream& Stream, FlightInfo& Flight){
	Flight.id = ++FlightInfo::lastFlightId;
	cout << "Flight route:"		<< tabs; Stream >> Flight.route;
	cout << "Departure at:"		<< tabs; Stream >> Flight.departureTime;
	cout << "Arrives at:"		<< tabs; Stream >> Flight.arrivalTime;
	cout << "Price:"			<< tabs; Stream >> Flight.price;
	return Stream;
}
