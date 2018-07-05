#include "Airport.cpp"

bool running = true;

void make_choice(){

}

void update_records(){
    
}

int main(){
//    while(running){
//        make_choice();
//        update_records();
//    }
	Date::SetFormat('/');
	FlightInfo a[5]={
		FlightInfo("Varna -- Sofia", "10/01/2018 22:30", "10/01/2018 22:31", 200.20),
		FlightInfo("Varna -- Sofia", "10/01/2018 22:30", "10/01/2018 22:31", 200.20),
		FlightInfo("Varna -- Sofia", "10/01/2018 22:30", "10/01/2018 22:31", 200.20),
		FlightInfo("Varna -- Sofia", "10/01/2018 22:30", "10/01/2018 22:31", 200.20),
		FlightInfo("Varna -- Sofia", "10/01/2018 22:30", "10/01/2018 22:31", 200.20)
	};
	FlightInfo b;
	cin >> b;
	for(int i = 0; i < 5 ; ++i) cout << a[i] << '\n';
	cout << b;
    return 0;
}
