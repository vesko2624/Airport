#include <fstream>
#include "FlightInfo.h"
#include "UserInfo.h"
using std::ofstream;
using std::ifstream;

#ifndef _Recorder_
#define _Recorder_
class Recorder{
	private:
		ofstream Flight_Output_File;
		ofstream User_Output_File;
		ifstream Input_File_Flights;
		ifstream Input_File_Users;
	public:
		void Record_Flight(FlightInfo&);
		void Record_User(UserInfo&);
		bool Read_Flight(FlightInfo&);
		bool Read_User(UserInfo& temp);
		void Reload_Flight_Records_file();
		void Reload_User_Recors_file();
		Recorder();
		~Recorder();
};
#endif
