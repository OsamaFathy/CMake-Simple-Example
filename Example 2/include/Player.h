/*
 * Player.h
 *
 *  Created on: Jan 24, 2017
 *      Author: osama
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <iostream>
using namespace std;
class Player {
private:
	int id;
	string name;
public:
	Player(int id, string name);
	void set_id(int id);
	int get_id() const;
	void set_name(const string& name);
	const string& get_name() const;

};

#endif /* PLAYER_H_ */
