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
template<class T>
bool validate_cin(T& choice, T min = 0, T max = 0){
	bool to_return = true, has_min = min,has_max = max;
	if(!(cin >> choice)) to_return = false;
	if(has_min)	
		if(choice < min) to_return = false;
	if(has_max)
		if(choice > max) to_return = false;
	if(!to_return) cout<<" Bad input! \n "; 
	Clear_cin();
	return to_return;
}

/* Including all cpp files below */


#define TABS "		"
#include "Headers/Date.cpp"
#include "Headers/Route.cpp"
#include "Headers/FlightInfo.cpp"
#include "Headers/Recorder.cpp"

