#include <iostream>
using std::cout;
using std::cin;
using std::string;
#ifndef _Date_
#define _Date_

class Date{
	public:
		Date();
		Date(int day, int month, int year, int hour, int minute);
		
		bool read();
		void display() const;
		
		void set_date(int day, int month, int year, int hour, int minute);
		string get_as_string(); // not const because it actually update the date_string_
	private:
		int Day_,Month_,Year_,Hour_,Minute_;
};

#endif
