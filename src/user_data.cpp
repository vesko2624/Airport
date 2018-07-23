#include "../include/recorder.h"

// Constructors
UserData::UserData(Counter& counter): counter_(counter){
	this-> load_users();
}

// Methods
void UserData::load_users(){
	Recorder::load_users(*this);
}
Counter& UserData::get_counter(){
	return counter_;
}

void UserData::display(){
	cout << '\n';
	for(int i = 0; i < users_.size(); ++i){
		users_[i].display();
		cout << '\n';
	}
}

const int UserData::get_last_id(){
	int max = 0;
	for(int i = 0; i < users_.size(); ++i) if(users_[i].id_ > max) max = users_[i].id_;
	return max;
}

void UserData::add_user(){
	UserInfo user;
	user.read();
	this-> add_user(user);
}

void UserData::add_user(UserInfo& user){
	bool interfere = false;
	int index = 0;
	for(int i = 0; i < users_.size(); ++i){
		if(users_[i].id_ == user.id_){
			interfere = true;
			index = i;
		}
	}
	if(interfere){
		user.id_ = get_last_id() + 1;
		UserInfo::kLastUserId_ = user.id_ + 1;
	}
	users_.push_back(user);
	counter_.add_user(user);
}

bool UserData::get_user_by_id(UserInfo* user, const int& id){
	for(int i = 0; i < users_.size(); ++i)
		if(users_[i].id_ == id){
			user = &users_[i];
			return true;
		}
	return false;
}

vector<UserInfo> UserData::get_users_by_departure_city(string city){
	vector<UserInfo> users_from_city;
	for(int i = 0; i < users_.size(); ++i)
		if(users_[i].route_.get_departure() == city) users_from_city.push_back(users_[i]);
	return users_from_city;
}

vector<UserInfo> UserData::get_users_by_arrival_city(string city){
	vector<UserInfo> users_to_city;
	for(int i = 0; i < users_.size(); ++i)
		if(users_[i].route_.get_arrival() == city) users_to_city.push_back(users_[i]);
	return users_to_city;
}

vector<UserInfo>& UserData::get_users(){
	return users_;
}


int UserData::get_size(){
	return users_.size();
}

void UserData::clear(){
	this-> users_.clear();
}
