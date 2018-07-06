#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include<limits>
using namespace std;

void Clear_cin(){
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n' );	
	cin.sync();
}

/* Including all cpp files below */


#define TABS "		"
#include "Headers/Date.cpp"
#include "Headers/Route.cpp"
#include "Headers/FlightInfo.cpp"
#include "Headers/Recorder.cpp"

