#include <iostream>
#include "FlightData.h"

#ifndef _Menufunc_
#define _Menufunc_

void make_choice(FlightData& flights);
void Make_flight_record(FlightData& flights);
void Make_user_record();
void Change_flight_id(FlightData& flights);
void Display_all_flights();
void Display_all_users();
void Find_flight_by_request();
void Find_flights_city_hour();
void Find_city_with_most_flights();
void Find_city_with_most_users(); 
void Record_in_file(); 

#endif
