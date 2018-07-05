#ifndef _FlightInfo_
#define _FlightInfo_
class FlightInfo{
	public:
		FlightInfo();
		FlightInfo(const string& route,const string& departure_time, const string& arrival_time, const double& price);
		
		friend ostream& operator<<(ostream& stream, const FlightInfo& flight);
		friend istream& operator>>(istream& stream, FlightInfo& flight);
	private:
		static long long kLastFlightId_;
		long long id_;
		Route route_;
		Date departure_time_, arrival_time_;
		double price_;
};

#endif
