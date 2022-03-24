#include "main.h"

class Player {

public:
	Player();
	string name;
	int id;
	int runsScored;
	int ballsPlayed;
	int ballsBowled;
	int runsGiven;
	int wicketsTaken;
};

Player::Player() {

	runsScored = 0;
	ballsPlayed = 0;
	ballsBowled = 0;
	runsGiven = 0;
	wicketsTaken = 0;
}