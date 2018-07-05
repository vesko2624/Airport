#ifndef _Date_
#define _Date_
struct Date{
	static char delim;
	unsigned short day, month, year, hour, minute;
	static void setFormat(char);
	void operator=(const string& currentDate);
};

#endif
