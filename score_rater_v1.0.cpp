// Score Rater program

// Demonstartes the if statement 

#include <iostream>

using namespace std;

int main()

{
	{

	if (true)
		cout << "This is always Displayed.\n\n";
	}

	{

		if (false)

			cout << "This is never displayed.\n\n";
		else
			cout << "This was false";

	}


	int score = 1000;

	if (score)
	{
		cout << "\nAt least you didn't score zero.\n\n";	
	}

	if (score >= 250)
	{
		cout << "You scored 250 or more. Decent.\n\n";

	}

	if (score >=500)
	{
		cout << "You scored 500 or more. Nice.\n\n";
		if (score >= 1000)
		{
			cout << "You scored 1000 or more. Fucking Impressive!\n";
		}
		
	}
	return 0;




}