//============================================================================
// Name        : CMake.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Team.h"
using namespace std;

int main() {
	Team myTeam(1, "Test Team");
	myTeam.add_player(94, "mis");
	myTeam.add_player(22, "Omar");
	myTeam.display_players();
	return 0;
}
