#include <iostream>

using std::cout;
using std::cin;
using std::endl;


// game score average finder 

int main()

{
	int score1;
	int score2;
	int score3;

	cout << "---Enter your first result--- ";
	cout << "\n#########################";
	cout << "\n";
	cin >> score1;
	cout << "---Enter your second score--- ";
	cout << "\n#########################";
	cout << "\n";
	cin >> score2;
	cout << "---Enter your third result--- ";
	cout << "\n#########################";
	cout << "\n";
	cin >> score3;
	

	float total = score1 + score2 + score3;

	cout << "Your total score is: " << total / 3 << "\n";
	return 0;








}
