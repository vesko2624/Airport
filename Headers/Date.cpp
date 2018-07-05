#include "Classes/Date.h"
/* Static variables & Methods */
char Date::kDateDelim_ = '.',
  Date::kTimeDelim_ = ':';
void Date::SetFormat(const char& date_delim, const char& time_delim){
	Date::kDateDelim_ = date_delim;
	Date::kTimeDelim_ = time_delim;
}


/* Operators overloading */
istream& operator>>(istream& input_stream, Date& input_date){
	unsigned short	*date[3] = {&input_date.day_, &input_date.month_, &input_date.year_},
					*time[2] = {&input_date.hour_, &input_date.minute_};
	for(int i = 0; i < 3; ++i) input_stream >> (*date)[i], input_stream.ignore(1, Date::kDateDelim_);
	for(int i = 0; i < 2; ++i) input_stream >> (*time)[i], input_stream.ignore(!i, Date::kTimeDelim_);
	return input_stream;
}

ostream& operator<<(ostream& output_stream, Date& input_date){
	unsigned short	*date[3] = {&input_date.day_, &input_date.month_, &input_date.year_},
					*time[2] = {&input_date.hour_, &input_date.minute_};
	for(int i = 0; i < 3; ++i) output_stream << (*date)[i] << ((i<2)? Date::kDateDelim_ : ' '); // output day/month/year hour:minute ternary operator is used to
	for(int i = 0; i < 2; ++i) output_stream << (*time)[i] << ((!i)? Date::kTimeDelim_ : '\0'); // prevent placing delim at the end of the output
	return output_stream;
}

void Date::operator=(const string& input_date){
	unsigned short	*date[3] = {&this-> day_, &this-> month_, &this-> year_},
					*time[2] = {&this-> hour_, &this-> minute_};
	stringstream string_stream(input_date);
	for(int i = 0; i < 3; ++i) string_stream >> (*date)[i], string_stream.ignore(1, Date::kDateDelim_);
	for(int i = 0; i < 2; ++i) string_stream >> (*time)[i], string_stream.ignore(!i, Date::kTimeDelim_);
}
