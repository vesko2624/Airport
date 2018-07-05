#ifndef _Route_
#define _Route_

class Route{
	public:
		void operator=(string);
		
		friend ostream& operator<<(ostream&, const Route&);
		friend istream& operator>>(istream&, Route&);
	private:
		string departure, arrival;
};

#endif
