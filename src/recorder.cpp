#include "../include/recorder.h"

string Recorder::flights_file = "database/flights.txt";
string Recorder::users_file = "database/users.txt";
ofstream Recorder::output_buffer; ifstream Recorder::input_buffer;

bool Recorder::read_flight(FlightInfo& temp){
	int id,day_d,month_d,year_d,hour_d,minute_d,day_a,month_a,year_a,hour_a,minute_a;
	double price;
	string departure,arrival;
	if(!(input_buffer >> id >> departure >> arrival >> day_d >> month_d >> year_d >> hour_d >> minute_d >> day_a >> month_a >> year_a >> hour_a >> minute_a >> price)) return false;
	temp.id_ = id;
	temp.price_ = price;
	temp.route_.set_route(departure,arrival);
	temp.departure_time_.set_date(day_d,month_d,year_d,hour_d,minute_d);
	temp.arrival_time_.set_date(day_a,month_a,year_a,hour_a,minute_a);
	return true;
}
void Recorder::record_flight(FlightInfo& temp){
	output_buffer <<temp.id_ << "  " << temp.route_.get_departure() << " " << temp.route_.get_arrival() << " " << temp.departure_time_.get_as_string() << " " << temp.arrival_time_.get_as_string() << " " << temp.price_ << '\n';
}

bool Recorder::read_user(UserInfo& temp){
	int id,day_d,month_d,year_d,hour_d,minute_d,day_a,month_a,year_a,hour_a,minute_a;
	string name,departure,arrival;
	if(!(input_buffer >> id >> name >> departure >> arrival >> day_d >> month_d >> year_d >> hour_d >> minute_d >> day_a >> month_a >> year_a >> hour_a >> minute_a)) return false;
	temp.id_ = id;
	temp.name_ = name;
	temp.route_.set_route(departure,arrival);
	temp.departure_time_.set_date(day_d,month_d,year_d,hour_d,minute_d);
	temp.arrival_time_.set_date(day_a,month_a,year_a,hour_a,minute_a);
}

void Recorder::record_user(UserInfo& temp){
	output_buffer << temp.id_ << " " << temp.name_ << " " << temp.route_.get_departure() << " " << temp.route_.get_arrival() << " " << temp.departure_time_.get_as_string() << " " << temp.arrival_time_.get_as_string() << '\n';
}


void Recorder::load_flights(FlightData& flights){
	input_buffer.open(Recorder::flights_file);
	
	if(flights.get_size()) flights.clear();
	FlightInfo temp;
	while(read_flight(temp)) flights.add_flight(temp);
	
	input_buffer.close();
}
void Recorder::save_flights(FlightData& data){
	output_buffer.open(flights_file);
	
	vector<FlightInfo> flights = data.get_flights();
	for(FlightInfo& flight : flights) record_flight(flight);
	
	output_buffer.close();
}
void Recorder::load_users(UserData& users){
	Recorder::input_buffer.open(users_file);
	
	if(users.get_size()) users.clear();
	UserInfo temp;
	while(read_user(temp)) users.add_user(temp);
	
	input_buffer.close();
}
void Recorder::save_users(UserData& data){
	Recorder::output_buffer.open(users_file);
	
	vector<UserInfo> users = data.get_users();
	for(UserInfo& user : users) record_user(user);
	
	output_buffer.close();
}
