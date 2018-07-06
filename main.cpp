#include "Airport.cpp"
//stanislav.dimov@quanterall.com
bool running = true;
Recorder Rec;

void Make_flight_record();

void make_choice(){
	int choice = 0 ;
	cout << "1. New flight  record.  \n" ;

	if( !( cin >> choice )  || choice < 1 || choice > 1){
		cout<<" Bad input! \n "; 
		Clear_cin();
		return ;
	}

	Clear_cin();
	
	switch (choice){
		case 1 :  Make_flight_record();
		
	}
}

void Make_flight_record(){
	FlightInfo *temp = new FlightInfo;
	cin >> *temp;
	Rec.Record_Flight(*temp);
	//Rec.Read_Flight();
	delete temp;
}


int main(){
    while(running){
        make_choice();
    }
    return 0;
}
