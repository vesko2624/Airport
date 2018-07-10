#include "Classes/FlightInfo.h"
/* Static variables */
long long FlightInfo::kLastFlightId_ = 0;


// Constructors
FlightInfo::FlightInfo(): id_(++FlightInfo::kLastFlightId_){
}


// Methods
bool FlightInfo::read(){
	bool valid = true;
	cout << "Flying from:"<< TABS ;
	route_.read_departure();
	
	cout << "Flying to:"<< TABS ;
	route_.read_arrival();
	
	cout << "Departure at:"<< TABS ;
	if(!departure_time_.read()) valid = false;
	
	cout << "Arrives at:"	<< TABS;
	if(!arrival_time_.read()) valid = false;;
	
	cout<< "Price:	"<< TABS;
	if(!validate_cin(price_,0.0)) valid = false;
	if(!valid) cout << "You've entered invalid information, it cannot be saved\n";
	return valid;
}

void FlightInfo::display(){
	cout << "Flight id:" << TABS << id_ << '\n';  
	
	cout << "Flying from:"<< TABS ;
	route_.display_departure();
	
	cout << "Flying to:"<< TABS ;
	route_.display_arrival();
	
	cout << "Departure time:";
	departure_time_.display();
	
	cout << "Arrival time:";
	arrival_time_.display();
	
	cout << "Price:	"<< TABS << price_ << '\n';
}
