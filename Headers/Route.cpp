#include "Classes/Route.h"


/* Methods */
Route::Route(): locations(new string[2]){
	// Error Protection
}

Route::~Route(){
	delete[] locations;
}

void Route::push(string Location, bool Station){
	this-> locations[Station] = Location;
}

void Route::stripLocations(){
	stringstream Stream(this-> route);
	bool Station; // Depart or arrive
	string Location, Temp;
	while(Stream >> Temp){
		if(Temp == "-"){
			if(Location.back() == ' ') Location.pop_back();
			this-> push(Location, Station);
			Station = true;
			Location.clear();
		}
		else if(Temp.back() == '-'){
			Temp.pop_back();
			Location += Temp;
			this-> push(Location, Station);
			Station = true;
			Location.clear();
		}
		else Location += Temp + " ";
	}
	this-> push(Location, Station);
}


/* Operators overloading */
void Route::operator=(const string& Route){
	this->route = Route;
//	this->stripLocations();
}

ostream& operator<<(ostream& Stream, const Route& Flight){
	return Stream << Flight.route;
}

istream& operator>>(istream& Stream, Route& Flight){
	getline(Stream, Flight.route);
//	Flight.stripLocations();
	return Stream;
}

