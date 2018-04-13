//Triangle
//04/13/18
//Jimmy Thai

#include <iostream>
#include <string>
#include <math.h>

int main()
{
	//Designing right triangle pythageorem theorem
	//We need two user inputs and user needs to input which side they want to solve
	double sideA, sideB, sideC;
	std::string userInputSide, userInputTriangleShape;
	
	std::cout << "What triangle do you want to solve for? Right, Isoceles, or Equalateral>>>" << std::endl;
	std::cin >> userInputTriangleShape;

	if (userInputTriangleShape == "Right")
	{
		std::cout << "Which side of the right triangle do you want to solve? A, B, or C>>>" << std::endl;
		std::cin >> userInputSide;
		if (userInputSide == "C")
		{
			std::cout << "You chose side " << userInputSide << ", what is side A?" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side B?" << std::endl;
			std::cin >> sideB;

			sideC = sqrt((sideA * sideA) + (sideB * sideB));
			std::cout << "The distance for side C is " << sideC << std::endl;
		}
		else if (userInputSide == "A")
		{
			std::cout << "You chose side " << userInputSide << ", what is side B?" << std::endl;
			std::cin >> sideB;

			std::cout << "What is the distance for side C?" << std::endl;
			std::cin >> sideC;

			sideA = sqrt((sideC * sideC) - (sideB *sideB));
			std::cout << "The distance for side A is " << sideA << std::endl;
		}
		else if (userInputSide == "B")
		{
			std::cout << "You chose side " << userInputSide << ", what is side A?" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side C?" << std::endl;
			std::cin >> sideC;

			sideA = sqrt((sideC * sideC) - (sideA *sideA));
			std::cout << "The distance for side B is " << sideB << std::endl;
		}
	}
	else if (userInputTriangleShape == "Isoceles")
	{
		std::cout << "What side do you want to solve for? Base, Height, or Sides>>>" << std::endl;
		std::cin >> userInputSide;
	}
	else if (userInputTriangleShape == "Equalateral")
	{

	}
	system("pause");
	return 0;
}