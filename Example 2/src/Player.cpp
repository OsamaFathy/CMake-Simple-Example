/*
 * Player.cpp
 *
 *  Created on: Jan 24, 2017
 *      Author: osama
 */

#include "Player.h"

Player::Player(int id, string name) :
		id(id), name(name) {
}

void Player::set_id(int id) {
	this->id = id;
}

int Player::get_id() const{
	return id;
}

void Player::set_name(const string& name) {
	this->name = name;
}

const string& Player::get_name() const{
	return name;
}

