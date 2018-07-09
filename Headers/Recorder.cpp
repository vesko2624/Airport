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
	int id,day_d,month_d,year_d,hour_d,minute_d,day_a,month_a,year_a,hour_a,minute_a;
	double price;
	string departure,arrival;
	Input_File_Flights >> id >> departure >> arrival >> day_d >> month_d >> year_d >> hour_d >> minute_d >> day_a >> month_a >> year_a >> hour_a >> minute_a >> price;
	temp.id_ = id;
	temp.price_ = price;
	temp.route_.set_route(departure,arrival);
	temp.departure_time_.set_date(day_d,month_d,year_d,hour_d,minute_d);
	temp.arrival_time_.set_date(day_a,month_a,year_a,hour_a,minute_a);
	return temp;
}
