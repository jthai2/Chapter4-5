//Guessing Game
//04/10/18
//Jimmy Thai

#include <iostream>
#include <stdio.h>
#include <stdlib.h>    /* srand, rand*/
#include <time.h>      /* time */
#include <random>

int main()
{
	int numChoice;
	int secret;
	/* initialize random seed: */
	srand(time(NULL));
	/* generate secret number between 1 and 10: */
	secret = rand() % 100 + 1;

		std::cout << "Please pick a number between 1-10" << std::endl;
		std::cin >> numChoice;

		if (numChoice == secret)
		{
			std::cout << "Congratulations, you guessed " << secret << " the correct number." << std::endl;
		}
		else
		{
			std::cout << "You chose poorly... the number was " << secret << std::endl;
		}

	system("pause");
	return 0;
}