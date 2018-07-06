#include "Classes/Route.h"


// Read() and Display() for both departure and arrival
void Route::read_departure(){
	cin >> this-> departure_;
}
void Route::read_arrival(){
	cin >> this-> arrival_;
}

void Route::display_departure() const{
	cout << this-> departure_ << '\n';
}
void Route::display_arrival() const{
	cout << this-> arrival_ << '\n';
}


// Getters and setters
void Route::set_departure(const string& departure){
	this-> departure_ = departure;
}
void Route::set_arrival(const string& arrival){
	this-> arrival_ = arrival;
}

string Route::get_departure() const{
	return this-> departure_;
}
string Route::get_arrival() const{
	return this-> arrival_;
}

string Route::get_as_string() const{
	string route = this-> departure_ + " " + this-> arrival_;
	return route;
}

