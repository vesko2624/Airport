#include "Classes/Date.h"


// Constructors
Date::Date(){
	Day_ = 0;
	Month_ = 0;
	Year_ = 0;
	Hour_ = 0;
	Minute_ = 0;
}
Date::Date(int day, int month, int year, int hour, int minute){
	Day_ = day;
	Month_ = month;
	Year_ = year;
	Hour_ = hour;
	Minute_ = minute;
}


// Methods
void Date::display() const{
	cout << Day_ << ". " << Month_ << ". " << Year_ << " year - " 
		<< Hour_ << " : " << Minute_ << endl;
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
void Date::set_date(int day, int month, int year, int hour, int minute){
	Day_ = day;
	Month_ = month;
	Year_ = year;
	Hour_ = hour;
	Minute_ = minute;
}

string Date::get_as_string(){
	string date_string;

	string day_as_string = get<string>(Day_);
	string month_as_string = get<string>(Month_);
	string year_as_string = get<string>(Year_);
	string hour_as_string = get<string>(Hour_);
	string minute_as_string = get<string>(Minute_);

	date_string = day_as_string + " " 
		+ month_as_string + " "
		+ year_as_string + " " 
		+ hour_as_string + " " 
		+ minute_as_string;	

	return date_string;
}
