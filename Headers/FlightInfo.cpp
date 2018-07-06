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


void FlightInfo::Read(){
	cout << "Flight route:"<< TABS ;
	flight.route_.read();
	cout << "Departure at:"<< TABS ;
	departure_time_.read();
	cout << "Arrives at:"	<< TABS;
	arrival_time_.read();
	cout<< "Price:	"<< TABS;
	cin >> price_;
}
void FlightInfo::Display(){
	cout << "Flight id:" << TABS << id_<<endl;  
	cout << "Flight route:"<< TABS;
	route_.display();
	cout << "Departure at:"<< TABS;
	departure_time_.display();
	cout << "Arrives at:" << TABS;
	 arrival_time_.display;
	cout << "Price:	"<< TABS << flight.price_;
}
