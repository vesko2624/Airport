#include "Classes/Recorder.h"
Recorder::Recorder(){
	Flight_Output_File.open("Flight_Records.txt",ios::app);
	User_Output_File.open("User_Records.txt",ios::app);
	Input_File_Flights.open("Flight_Records.txt");
	Input_File_Users.open("User_Records.txt");
}
Recorder::~Recorder(){
	Flight_Output_File.close();
	User_Output_File.close();
	Input_File_Flights.close();
	Input_File_Users.close();
}

void Recorder::Record_Flight(FlightInfo& temp){
	Flight_Output_File <<temp.id_ << "  " << temp.route_.get_departure() << " " << temp.route_.get_arrival() << " " << temp.departure_time_.get_as_string() << " " << temp.arrival_time_.get_as_string() << " " << temp.price_ << endl;
}
FlightInfo Recorder::Read_Flight(){
	FlightInfo temp;
	// Marto ili Jivko -> Vie si izberete kak da chete Route i Date tui kato parametrite im sa private
	// trqbva da budat setnati sys tehnite methodi
	
	//Input_File_Flights >> temp.id_ >> temp.price_;
	//cout<< temp.id_ << "  " << temp.route_.get_departure() << " " << temp.route_.get_arrival() << "  "<<temp.price_;
	return temp;
}
