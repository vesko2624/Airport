#ifndef _Date_
#define _Date_

class Date{
	public:
		Date();
		Date(int day, int month, int year, int hour, int minute);
		
		void read();
		void display() const;
		
		string set_date(int day, int month, int year, int hour, int minute);
		string get_as_string(); // not const because it actually update the date_string_
		void update_string(); // not const because it has to change the member variables
	private:
		string date_string_;
		struct tm date_;
};

#endif
