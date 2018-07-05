#include "Classes/FlightInfo.h"
/* Static variables */
long long FlightInfo::kLastFlightId_ = 0;


/* Methods */
FlightInfo::FlightInfo(){
	this->id_ = ++FlightInfo::kLastFlightId_;
}
FlightInfo::FlightInfo(const string& route,const string& departure_time, const string& arrival_time, const double& price){
	this-> id_				= ++kLastFlightId_;
	this-> route_			= route;
	this-> departure_time_	= departure_time;
	this-> arrival_time_	= arrival_time;
	this-> price_			= price;
}


/* Operators overloading */
ostream& operator<<(ostream& output_stream, const FlightInfo& flight){
 	output_stream << "Flight id:" 	<< TABS << flight.id_ 			<< '\n'
		<< "Flight route:"	<< TABS << flight.route_				<< '\n'
		<< "Departure at:"	<< TABS << (Date&)flight.departure_time_<< '\n'
		<< "Arrives at:"	<< TABS << (Date&)flight.arrival_time_ 	<< '\n'
		<< "Price:	"		<< TABS << flight.price_ << '\n';
	return output_stream;
}
istream& operator>>(istream& input_stream, FlightInfo& flight){
	cout << "Flight route:"		<< TABS; input_stream >> flight.route_;
	cout << "Departure at:"		<< TABS; input_stream >> flight.departure_time_;
	cout << "Arrives at:"		<< TABS; input_stream >> flight.arrival_time_;
	cout << "Price:	"			<< TABS; input_stream >> flight.price_;
	return input_stream;
}
