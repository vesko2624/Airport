#include "Classes/Date.h"
/* Static variables & Methods */
char Date::delim = '.';
void Date::setFormat(char delim){
	Date::delim = delim;
}


/* Operators overloading */
istream& operator>>(istream& Stream, Date& InputDate){
	unsigned short	*date[3] = {&InputDate.day, &InputDate.month, &InputDate.year},
					*time[2] = {&InputDate.hour, &InputDate.minute};
	for(int i=0;i<3;i++) Stream >> (*date)[i], Stream.ignore(1,Date::delim);
	for(int i=0;i<2;i++) Stream >> (*time)[i], Stream.ignore(!i,':');
	return Stream;
}

ostream& operator<<(ostream& Stream, Date& InputDate){
	unsigned short	*date[3] = {&InputDate.day, &InputDate.month, &InputDate.year},
					*time[2] = {&InputDate.hour, &InputDate.minute};
	for(int i=0;i<3;i++) Stream << (*date)[i] << ((i<2)? Date::delim : ' ');
	for(int i=0;i<2;i++) Stream << (*time)[i] << ((!i)? ':' : '\0');
	return Stream;
}

void Date::operator=(const string& InputDate){
	unsigned short	*date[3] = {&this->day, &this->month, &this->year},
					*time[2] = {&this->hour, &this->minute};
	stringstream ss(InputDate);
	for(int i=0;i<3;i++) ss >> (*date)[i], ss.ignore(1,Date::delim);
	for(int i=0;i<2;i++) ss >> (*time)[i], ss.ignore(!i,':');
}
