#include <iostream>

int main()

{
	const int ALIENS_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIENS_POINTS;

	std::cout << "score: " << score << std::endl;

	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUSIER_COST = 50};

	shipCost myShipCost = BOMBER_COST;

	std::cout << "\nTo Upgrade my ship to a Cruiser it will cost " << (CRUSIER_COST - myShipCost) << " Resource Points.\n";
	return 0;

	


}