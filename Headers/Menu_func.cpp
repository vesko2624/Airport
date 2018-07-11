#include "../Airport.h"

#include "../Classes/UserInfo.h"

#include "../Classes/FlightData.h"
#include "../Classes/Menu_func.h"
#include "../Classes/Recorder.h"
using std::cout; using std::cin;


void make_choice(FlightData& flights){
	int choice = 0 ;
	cout << " 1. New flight record.      RABOTI\n" ;
	cout << " 2. New user request.       RABOTI do nqkude\n";
	cout << " 3. Change flight by id     RABOTI\n";
	cout << " 4. Get all flights         RABOTI\n";
	cout << " 5. All user requests \n";
	cout << " 6. Find flight by request \n";
	cout << " 7. Find flights from a city after a certain hour \n";
	cout << " 8. Find city with most flights   RABOTI \n";
	cout << " 9. Find city with most users \n";
	cout << " 10. Record in file \n";
	if(!validate_cin(choice,1,10)) return;
	
	switch (choice){
		case 1 :  Make_flight_record(flights); break;
		case 2:   Make_user_record(); break;
		case 3:   Change_flight_id(flights); break;
		case 4:   Display_all_flights(flights); break;
//		case 5:   Display_all_users(); break;
//		case 6:   Find_flight_by_request(); break;
//		case 7:   Find_flights_city_hour(); break;
		case 8:   Find_city_with_most_flights(flights); break;
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
void Make_user_record(/* --- */){
	UserInfo user;
	Recorder rec;
	if(user.read()) user.display();
}
void Change_flight_id(FlightData& flights){
	FlightInfo* flight;
	int id;
	cout << "Enter id: ";
	cin >> id;
	if(flights.get_flight_by_id(flight,id)) flight->read();
}
void Display_all_flights(FlightData& flights){
	flights.display();
	cin.get();
}
void Find_city_with_most_flights(FlightData& flights){
	string city;
	int count;
	if(flights.get_counter().count_flight_departure(city, count)){
		cout << "Most frequent departure city is " << city <<". There are " << count << " flights.\n";
	}
}
