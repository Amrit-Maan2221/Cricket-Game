// C++ program for the above approach
#include "Game.h"

void welcome()
{
	cout << "---------------------------------------" << endl;
	cout << "|============== CRIC-IN ==============|" << endl;
	cout << "|                                     |" << endl;
	cout << "|   Welcome to Virtual Cricket Game   |" << endl;
	cout << "---------------------------------------" << endl;

	cout << endl << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "|================== Instructions ==================|" << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "|                                                  |" << endl;
	//cout << "| 1. Create 2 teams (Team-A and Team-B with 4      |" << endl;
	//cout << "|    players each) from a given pool of 22 players.|" << endl;
	cout << "| 1. Lead the toss and decide the choice of play.  |" << endl;
	cout << "| 2. Each innings will be of 300 balls.            |" << endl;
	cout << "----------------------------------------------------\n\n" << endl;
}



void showAllPlayers(Team A, Team B)
{
	cout << "\n----------------------------------------------------" << endl;
	cout << "|================== Team One Players ==================|" << endl;


	for (int i = 0; i < A.players.size(); i++)
	{
		string platerName = A.players[i].name;
		cout << (i + 1) << ". " << A.players[i].name << endl;
	}


	cout << "\n----------------------------------------------------" << endl;
	cout << "|================== Team Two Players ==================|" << endl;
	for (int i = 0; i < B.players.size(); i++)
	{
		cout << (i + 1) << ". " << B.players[i].name << endl;
	}
}

int toss()
{
	//toss......

	cout << endl;
	cout << "-----------------------------------" << endl;
	cout << "|========== Let's Toss  ==========|" << endl;
	cout << "-----------------------------------" << endl << endl;

	cout << "Tossing the coin..." << endl << endl;

	int randomValue = rand() % 2;	// 0 or 1

	switch (randomValue) {
	case 0:
		cout << "Team-A won the toss....will be batting" << endl << endl;
		return 0;
	case 1:
		cout << "Team-B won the toss....will be batting" << endl << endl;
		return 1;
	}
	
}


	
int main() {

	srand(time(NULL));

	Team India;
	Team England;

	Player klRahul("KL Rahul", BATSMAN);
	Player rohit("Rohit Sharma", BATSMAN);
	Player viratKohli("Virat Kohli", BATSMAN);
	Player amrit("Amrit Maan", ALL_ROUNDER);
	Player shreashIyer("S. Iyer", BATSMAN);
	Player pant("Rishab Pant", WICKET_KEEPER);
	Player jadeja("Ravindra Jadeja", ALL_ROUNDER);
	Player ashwin("Ravichandra Ashwin", BOWLER);
	Player bhuvi("B. Kumar", BOWLER);
	Player bumrah("Jasprit Bumrah", BOWLER);
	Player shami("M. Shami", BOWLER);

	India.players.push_back(klRahul);
	India.players.push_back(rohit);
	India.players.push_back(viratKohli);
	India.players.push_back(amrit);
	India.players.push_back(shreashIyer);
	India.players.push_back(pant);
	India.players.push_back(jadeja);
	India.players.push_back(ashwin);
	India.players.push_back(bhuvi);
	India.players.push_back(bumrah);
	India.players.push_back(shami);


	Player a("Johnny Bairstow", BATSMAN);
	Player b("Jason Roy", BATSMAN);
	Player c("Joe Root", BATSMAN);
	Player d("sasa", ALL_ROUNDER);
	Player e("sas", BATSMAN);
	Player f("Jos Buttler", WICKET_KEEPER);
	Player g("Sam Curran", ALL_ROUNDER);
	Player h("n", BOWLER);
	Player i("Achor", BOWLER);
	Player j("J", BOWLER);
	Player k("Mark Wood", BOWLER);

	England.players.push_back(a);
	England.players.push_back(b); 
	England.players.push_back(c);
	England.players.push_back(d);
	England.players.push_back(e);
	England.players.push_back(f);
	England.players.push_back(g);
	England.players.push_back(h);
	England.players.push_back(i);
	England.players.push_back(j);
	England.players.push_back(k);

	int balls = 300;
	
	welcome();
	showAllPlayers(India, England);
	int tossResult = toss();

	
	


	for (int bowledBowled = 1; bowledBowled <= (2*balls); bowledBowled++)
	{
		if (tossResult == 0)
		{
			//Team India to Bat
		}
		


		if (bowledBowled == balls)
		{
			//switch Teams
			//Team England to bat
		}
	}


	

	return 0;
}



