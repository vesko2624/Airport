#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <limits>
#include <ctime>
using namespace std;
template<class T, class S> // Convert variable of type T to variable of type S
T get(S variable){         // For example get<string>(5) returns "5";
	T temp;
	stringstream stream;
	stream << variable;
	stream >> temp;
	return temp;
}
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

