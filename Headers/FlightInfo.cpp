#include "Classes/FlightInfo.h"
/* Static variables */
long long FlightInfo::kLastFlightId_ = 0;


// Constructors
FlightInfo::FlightInfo(){
	this->id_ = ++FlightInfo::kLastFlightId_;
}
//Doubt the need of the constructor below but whatever, it will stay for now
FlightInfo::FlightInfo(const string& departure, const string& arrival,const string& departure_time, const string& arrival_time, const double& price){
	this-> id_ = ++kLastFlightId_;
	this-> route_.set_departure(departure);
	this-> route_.set_arrival(arrival);
	// Simplyfied till here
	
	// Cant do this shit below without making it complicated
	
//	this-> departure_time_	= departure_time;
//	this-> arrival_time_	= arrival_time;

	// -------------------------------------------------------------
	this-> price_			= price;
}


// Methods
void FlightInfo::Read(){
	cout << "Flying from:"<< TABS ;
	route_.read_departure();
	
	cout << "Flying to:"<< TABS ;
	route_.read_arrival();
	
	cout << "Departure at:"<< TABS ;
	departure_time_.read();
	
	cout << "Arrives at:"	<< TABS;
	arrival_time_.read();
	
	cout<< "Price:	"<< TABS;
	validate_cin(price_,0.0);
}

void FlightInfo::Display(){
	cout << "Flight id:" << TABS << id_ << '\n';  
	
	cout << "Flying from:"<< TABS ;
	route_.display_departure();
	
	cout << "Flying to:"<< TABS ;
	route_.display_arrival();
	
	cout << "Departure time:";
	departure_time_.display();
	
	cout << "Arrival time:";
	arrival_time_.display();
	
	cout << "Price:	"<< TABS << price_;
}
