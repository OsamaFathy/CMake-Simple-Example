/*
 * Team.h
 *
 *  Created on: Jan 24, 2017
 *      Author: osama
 */

#ifndef TEAM_H_
#define TEAM_H_
#include <vector>
#include <iostream>
#include "Player.h"
using namespace std;
class Team {
private:
	int id;
	string name;
	vector<Player> players;


public:
	Team();
	Team(int id, string name);
	int get_id() const ;
	void set_id(int id);
	const string& get_name() const;
	void set_name(const string& name) ;
	bool add_player(int id, string name);
	void display_players() const;
};

#endif /* TEAM_H_ */
