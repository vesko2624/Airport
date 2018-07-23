#include "route.h"
#include "date.h"

#include <iostream>
#include <string>
using std::string;
using std::cout; using std::cin;

#ifndef USERINFO_H
#define USERINFO_H

class UserInfo{
	public:
		UserInfo();
		
		bool read();
		void display();
		Route get_user_request();
	private:
		static long long kLastUserId_;
		string name_;
		int id_;
		Route route_;
		Date departure_time_, arrival_time_;
		
		friend class Recorder;
		friend class UserData;
};

#endif
