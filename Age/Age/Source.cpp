//Age
//04/10/18
//Jimmy Thai

#include <iostream>

int main()
{
	int ageInput;

	std::cout << "What is your age?" << std::endl;
	std::cin >> ageInput;

	if (ageInput > 0 && ageInput < 6)
	{
		std::cout << "You're trash!" << std::endl;
	}
	else if (ageInput > 5 && ageInput < 13)
	{
		std::cout << "Come on, why can't you make your father happy?" << std::endl;
	}
	else if (ageInput > 12 && ageInput < 20)
	{
		std::cout << "Why are you like this?" << std::endl;
	}
	else if (ageInput > 19 && ageInput < 27)
	{
		std::cout << "Very disappointed..." << std::endl;
	}
	else if (ageInput > 26 && ageInput < 36)
	{
		std::cout << "You are disgusting me." << std::endl;
	}
	else
	{
		std::cout << "Do you know how to type? Gosh..." << std::endl;
	}

	system("pause");
	return 0;
}