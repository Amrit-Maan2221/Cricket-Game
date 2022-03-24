// C++ program for the above approach
#include "Game.h"


	
int main() {

	Game game;
	game.welcome();

	cout << "\nPress Enter to continue";
	getchar();

	game.showAllPlayers();

	cout << "\nPress Enter to continue";
	getchar();

	game.selectPlayers();
	game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout << "\nPress Enter to toss";
    getchar();

    game.toss();
    game.startFirstInnings();
    game.startSecondInnings();
    game.showMatchSummary();

	return 0;
}
