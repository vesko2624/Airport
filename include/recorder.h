#include "flight_data.h"
#include "user_data.h"

#include <fstream>
using std::ofstream; using std::ifstream;

#ifndef _Recorder_
#define _Recorder_
class Recorder{
	private:
		static ofstream output_buffer;
		static ifstream input_buffer;
		
		static string flights_file;
		static string users_file;
		
		static void record_flight(FlightInfo&);
		static bool read_flight(FlightInfo&);
		
		static void record_user(UserInfo&);
		static bool read_user(UserInfo& temp);
	public:
		static void load_flights(FlightData&);
		static void load_users(UserData&);
		static void save_flights(FlightData&);
		static void save_users(UserData&);
};
#endif

