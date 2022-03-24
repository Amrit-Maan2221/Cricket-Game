// C++ program for the above approach
#include "Game.h"


	
int main() {
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


	

	return 0;
}
