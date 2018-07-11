#include "../Airport.h"
#include "../Classes/FlightData.h"
#include "../Classes/Menu_func.h"
#include "../Classes/Recorder.h"
using std::cout; using std::cin;


void make_choice(FlightData& flights){
	int choice = 0 ;
	cout << " 1. New flight  record.  \n" ;
	cout << " 2. New User Request. \n";
	cout << " 3. Change Flight by id \n";
	cout << " 4. Get all Flights \n";
	cout << " 5. All user requests \n";
	cout << " 6. Find Flight by request \n";
	cout << " 7. Find Flights from a city after a certain hour \n";
	cout << " 8. Find city with most flights \n";
	cout << " 9. find city with most users \n";
	cout << " 10. record in file \n";
	if(!validate_cin(choice,1,10)) return;
	
	switch (choice){
		case 1 :  Make_flight_record(flights); break;
//		case 2:   Make_user_record(); break;
		case 3:   Change_flight_id(flights); break;
//		case 4:   Display_all_flights(); break;
//		case 5:   Display_all_users(); break;
//		case 6:   Find_flight_by_request(); break;
//		case 7:   Find_flights_city_hour(); break;
//		case 8:   Find_city_with_most_flights(); break;
//		case 9:   Find_city_with_most_users(); break;
//		case 10:   Record_in_file(); break; 
	}
}

void Make_flight_record(FlightData& flights){
	FlightInfo flight;
	Recorder Rec;
	if(flight.read()){
		Rec.Record_Flight(flight);
		flights.add_flight(flight, 1);
	}	
}
void Change_flight_id(FlightData& flights){
	FlightInfo* flight;
	int id;
	cout << "Enter id: ";
	cin >> id;
	if(flights.get_flight_by_id(flight,id)) flight->read();
}
