//Random Number With Score
//04/10/18
//Jimmy Thai

#include <iostream>
#include <stdio.h>
#include <stdlib.h>    /* srand, rand*/
#include <time.h>      /* time */
#include <random>

int main()
{
	int count = 0;
	int numChoice;
	int secret;
	/* initialize random seed: */
	srand(time(NULL));
	/* generate secret number between 1 and 10: */
	secret = rand() % 100 + 1;

	do{
		std::cout << "Please enter a number between 1-100" << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << "The number you have chosen is too high!, guess again loser" << std::endl;
			count = count + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << "The number you have chosen is too low!, guess again loser" << std::endl;
		}

	} while (numChoice != secret);

	std::cout << "Congratulations! It took you " << count << " tries!" << std::endl;

	system("pause");
	return 0;
}