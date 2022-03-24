#include "main.h"

class Player {

public:
	Player();
	Player(string nameOfPlayer, int roleOfPlayer);
	string name;
	int id;
	int matchedPlayed;
	int runsScored;
	int ballsPlayed;
	int ballsBowled;
	int runsGiven;
	int wicketsTaken;
	int role;
};


Player::Player() {
	matchedPlayed = 0;
	runsScored = 0;
	ballsPlayed = 0;
	ballsBowled = 0;
	runsGiven = 0;
	wicketsTaken = 0;
	role = BATSMAN;
}

Player::Player(string nameOfPlayer, int roleOfPlayer) {
	name = nameOfPlayer;
	role = roleOfPlayer;
	matchedPlayed = 0;
	runsScored = 0;
	ballsPlayed = 0;
	ballsBowled = 0;
	runsGiven = 0;
	wicketsTaken = 0;
	role = BATSMAN;
}