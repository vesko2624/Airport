#include <iostream>
#include <string>
#include "Route.h"
#include "Date.h"
using std::string;
using std::cin;
using std::cout;

#ifndef USERINFO_H
#define USERINFO_H

class UserInfo{
	public:
		UserInfo();
		
		bool read();
		void display();
		bool get_user_request(Route& route);
	private:
		static long long kLastUserId_;
		string name_;
		int id_;
		Route route_;
		Date departure_time_, arrival_time_;
		
		friend class Recorder;
//		friend class UserData;
};

#endif
