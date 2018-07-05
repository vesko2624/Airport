#ifndef _Route_
#define _Route_

struct Route{
	private:
		string route;
		string *locations;
	public:
		Route();
		~Route();
		void push(string Location, bool Station);
		void stripLocations();
		void operator=(const string&);
		friend ostream& operator<<(ostream&, const Route&);
		friend istream& operator>>(istream&, Route&);
};

#endif
