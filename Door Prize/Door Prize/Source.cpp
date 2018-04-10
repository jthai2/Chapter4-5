//Door Prize
//04/10/2018
//Jimmy Thai

#include <iostream>

int main()
{
	int doorChoice;
	std::cout << "Please pick a door 1, 2, or 3" << std::endl;
	std::cin >> doorChoice;

	if (doorChoice == 1)
	{
		std::cout << "The prize behind door " << doorChoice << " is an Alligator, CHOMP CHOMP" << std::endl;

	}
	else if (doorChoice == 2)
	{
		std::cout << "The prize behind door " << doorChoice << " is a Huffy Bike." << std::endl;
	}
	else if (doorChoice == 3)
	{
		std::cout << "The prizebehind door " << doorChoice << " is a Hug." << std::endl;
	}
	else
	{
		std::cout << "Why did you type " << doorChoice << ", that is not an option." << std::endl;
	}

	system("pause");
	return 0;
}