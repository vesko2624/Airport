#ifndef _Route_
#define _Route_

class Route{
	public:
		void operator=(string);
		
		friend basic_ostream<char>& operator<<(basic_ostream<char>&, const Route&);
		friend basic_istream<char>& operator>>(basic_istream<char>&, Route&);
	private:
		string departure, arrival;
};

#endif
