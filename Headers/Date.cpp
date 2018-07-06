#include "Classes/Date.h"


// Constructors
Date::Date(){
	this-> date_ = {0};
}
Date::Date(int day, int month, int year, int hour, int minute){
	set_date(day, month, year, hour, minute);
}


// Methods
void Date::display() const{
	cout << date_string_;
}
void Date::read(){
	int day, month, year, hour, minute;
	cout << '\n';
	cout << "	Enter day: ";
	cin >> day;
	cout << "	Enter month: ";
	cin >> month;
	cout << "	Enter year: ";
	cin >> year;
	cout << "	Enter hour: ";
	cin >> hour;
	cout << "	Enter minute: ";
	cin >> minute;
	set_date(day, month, year, hour, minute);
}


// Getters and/or Setters
string Date::set_date(int day, int month, int year, int hour, int minute){
	date_.tm_mday = day; // Range 1-31
	date_.tm_mon = month - 1; // month is between 0 and 11 !!!!
	date_.tm_year = year - 1900; // tm_year means years since 1900
	date_.tm_hour = hour; // Range 0-23
	date_.tm_min = minute; // Range 0-59
}
string Date::get_as_string(){
	update_string();
	return date_string_;
}
void Date::update_string(){
	string day_as_string = get<string>(date_.tm_mday);
	string month_as_string = get<string>(date_.tm_mon + 1); // + 1 to change the range from 0 and 11 to 1 and 12
	string year_as_string = get<string>(date_.tm_year + 1900);
	string hour_as_string = get<string>(date_.tm_hour);
	string minute_as_string = get<string>(date_.tm_min);
	
	date_string_ = day_as_string + " " + month_as_string + " " + year_as_string + " " + hour_as_string + " " + minute_as_string;
}
