//Age
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
	secret = rand() % 26 + 1;

	std::cout << "Guess the age>>>" << std::endl;
	std::cin >> numChoice;

	if (numChoice == 9)
	{
		std::cout << "Congratulations, you guessed 9 the correct age." << std::endl;
	}
	else if (numChoice <= 5)
	{

	}
	

	system("pause");
	return 0;
}