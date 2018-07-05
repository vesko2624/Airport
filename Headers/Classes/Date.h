#ifndef _Date_
#define _Date_
class Date{
	public:
		static void SetFormat(const char& date_delim, const char& time_delim = ':');
		void operator=(const string& input_date);
		
		friend istream& operator>>(istream& input_stream, Date& input_date);
		friend ostream& operator<<(ostream& output_stream, Date& input_date);
	private:
		static char kDateDelim_, kTimeDelim_;
		unsigned short day_, month_, year_, hour_, minute_;
};

#endif
