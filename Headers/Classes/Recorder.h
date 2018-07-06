#ifndef _Recorder_
#define _Recorder_
class Recorder{
	private:
		ofstream Flight_Output_File;
		ofstream User_Output_File;
		ifstream Input_File_Flights;
		ifstream Input_File_Users;
	public:
		void Record_Flight(const FlightInfo&);
		void Record_User();
		void Read_Flight(FlightInfo&);
		void Read_User();
		Recorder();
		~Recorder();
};
#endif