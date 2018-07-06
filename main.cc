#include "Airport.cpp"

bool running = true;

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

	ofstream output;
	output.open("Flight_records.txt",ios::app);	

	output << *temp << endl;	

	output.close();
	delete temp;
}


int main(){
    while(running){
        make_choice();
    }
    return 0;
}
