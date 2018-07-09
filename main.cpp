#include "Airport.cpp"
//stanislav.dimov@quanterall.com
bool running = true;
Recorder Rec;

void Make_flight_record();
void read();

void make_choice(){
	int choice = 0 ;
	cout << "1. New flight  record.  \n" ;
	if(!validate_cin(choice,1,2)) return;
	
	switch (choice){
		case 1 :  Make_flight_record(); break;
		case 2:   read(); break;
	}
}

void Make_flight_record(){
	FlightInfo *temp = new FlightInfo;
	temp->Read();
	Rec.Record_Flight(*temp);
	delete temp;
}

void read(){
	FlightInfo temp;
	if(Rec.Read_Flight(temp));
	temp.Display();
}

int main(){
    while(running){
        make_choice();
    }
    return 0;
}
