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

void Recorder::Record_Flight(const FlightInfo& temp){
	
}