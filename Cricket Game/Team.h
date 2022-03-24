#include "Player.h"
#include <vector>

class Team {

public:
	Team();
	string name;
	int totalRunsScored;
	int wicketsLost;
	int totalBallsBowled;
	vector<Player> players;
};

Team::Team() {
	totalRunsScored = 0;
	wicketsLost = 0;
	totalBallsBowled = 0;
}