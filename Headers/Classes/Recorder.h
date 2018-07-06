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
		void Record_User();
		FlightInfo Read_Flight();
		void Read_User();
		Recorder();
		~Recorder();
};
#endif
