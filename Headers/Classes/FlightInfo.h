#ifndef _FlightInfo_
#define _FlightInfo_

class FlightInfo{
	public:
		FlightInfo();
		FlightInfo(const string& departure, const string& arrival,const string& departure_time, const string& arrival_time, const double& price);
		
		bool Read();
		void Display();
	private:
		static long long kLastFlightId_;
		int id_;
		Route route_;
		Date departure_time_, arrival_time_;
		double price_;
		
		friend class Recorder;
};

#endif
