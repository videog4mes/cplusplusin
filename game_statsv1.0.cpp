#include <iostream>

using namespace std;

// Game stats
// Declaring multiple variables

int main()

{

	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1458.98;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6732.78;

	cout << "\nscore:" << score << endl;
	cout << "distance:" << distance << endl;
	cout << "playAgain:" << playAgain << endl;

	// Skipping sheildsUp since you don't generally print boolean values 

	cout << "lives: " << lives << endl;
	cout << "aliens killed:" << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "\n How Much Fuel?";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

	return 0;



}