//Die Rolling
//4/17/18
//Jimmy Thai

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>	

int main()
{
	int score;
	int dice, dice2, dice3;
	srand(time(0));
	std::cout << "The game is that you'll roll 3 dices." << std::endl;
	std::cout << "The total number between the 3 dices will be your score." << std::endl;

	for (int n = 3; n > 0; n--)
	{
		
		dice = rand() % 6 + 1;
		dice2 = rand() % 6 + 1;
		dice3 = rand() % 6 + 1;
		score = dice2 + dice  + dice3;
		std::cout << "Your total roll is " << score << std::endl;
	}

	system("pause");
	return 0;
}