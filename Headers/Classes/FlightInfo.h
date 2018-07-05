#ifndef _FlightInfo_
#define _FlightInfo_
class FlightInfo{
	static long long lastFlightId;
	private:
		long long id;
		Route route;
		Date departureTime, arrivalTime;
		double price;
	public:
		FlightInfo();
		FlightInfo(string Route, string DepartureTime, string ArrivalTime, double Price);
		
		friend ostream& operator<<(ostream& stream, const FlightInfo& flight);
		friend istream& operator>>(istream& stream, FlightInfo& flight);
};

#endif
