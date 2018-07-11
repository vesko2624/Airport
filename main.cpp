#include "Airport.h"
#include "Classes/Menu_func.h"
#include "Classes/Recorder.h"
//stanislav.dimov@quanterall.com
bool running = true;
Recorder Rec;

int main(){
	Counter counter;
	FlightData flights(counter);
    while(running){
        make_choice(flights);
    }
    return 0;
}
