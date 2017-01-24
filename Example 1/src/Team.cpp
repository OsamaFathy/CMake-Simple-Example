/*
 * Team.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: osama
 */

#include "Team.h"

Team::Team(int id, string name) : id(id), name(name){}

int Team::get_id() const {
	return id;
}

void Team::set_id(int id) {
	this->id = id;
}

const string& Team::get_name() const {
	return name;
}

void Team::set_name(const string& name) {
	this->name = name;
}

bool Team::add_player(int id, string name){
	for(int i=0; i<players.size(); i++){
		if(players[i].get_id() == id){
			return false;
		}
	}
	players.push_back(Player(id, name));
	return true;
}

void Team::display_players() const{
	for(int i=0; i<players.size(); i++){
		cout << players[i].get_id() << " " << players[i].get_name() << endl;
	}
}
