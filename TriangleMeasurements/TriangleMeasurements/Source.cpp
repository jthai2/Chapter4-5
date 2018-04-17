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
	double sideA, sideB, sideC, perimeter, area;
	std::string userInputSide, userInputTriangleShape;
	
	std::cout << "What triangle do you want to solve for? Right, Isoceles, or Equalateral>>>" << std::endl;
	std::cin >> userInputTriangleShape;

	if (userInputTriangleShape == "Right")
	{
		std::cout << "Which side of the right triangle do you want to solve? A = LegA, B = LegB, or C = Hypotenuse>>>" << std::endl;
		std::cin >> userInputSide;
		if (userInputSide == "C")
		{
			std::cout << "You chose side " << userInputSide << ", what is side A?" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side B?" << std::endl;
			std::cin >> sideB;

			sideC = sqrt((sideA * sideA) + (sideB * sideB));
			area = (sideA * sideB) / 2;
			perimeter = sideA + sideB + sqrt((sideA * sideA) + (sideB * sideB));

			std::cout << "The distance for side C is " << sideC << std::endl;
			std::cout << "The area is " << area << std::endl;
			std::cout << "The perimeter " << perimeter << std::endl;
		}
		else if (userInputSide == "A")
		{
			std::cout << "You chose side " << userInputSide << ", what is side B?" << std::endl;
			std::cin >> sideB;

			std::cout << "What is the distance for side C?" << std::endl;
			std::cin >> sideC;

			sideA = sqrt((sideC * sideC) - (sideB *sideB));
			area = (sideA * sideB) / 2;
			perimeter = perimeter = sideA + sideB + sqrt((sideA * sideA) + (sideB * sideB));

			std::cout << "The distance for side A is " << sideA << std::endl;
			std::cout << "The area is " << area << std::endl;
			std::cout << "The perimeter " << perimeter << std::endl;
		}
		else if (userInputSide == "B")
		{
			std::cout << "You chose side " << userInputSide << ", what is side A?" << std::endl;
			std::cin >> sideA;

			std::cout << "What is the distance for side C?" << std::endl;
			std::cin >> sideC;

			sideA = sqrt((sideC * sideC) - (sideA *sideA));
			area = (sideA * sideB) / 2;
			perimeter = perimeter = sideA + sideB + sqrt((sideA * sideA) + (sideB * sideB));

			std::cout << "The distance for side B is " << sideB << std::endl;
			std::cout << "The area is " << area << std::endl;
			std::cout << "The perimeter " << perimeter << std::endl;
		}
	}
	else if (userInputTriangleShape == "Isoceles")
	{
		std::cout << "What side do you want to solve for? A=Height, B=Sides, or C=Base>>>" << std::endl;
		std::cin >> userInputSide;
		if (userInputSide == "A")
		{
			std::cout << "You chose side " << userInputSide << ", what is your side?" << std::endl;
			std::cin >> sideB;
			std::cout << "What is the measurement of your base?" << std::endl;
			std::cin >> sideC;
			
			sideA = sqrt((sideB * sideB) - (sideC * sideC / 4));
			area = (sideC * sideB) / 2;
			perimeter = (2 * sideB) + sideC;

			std::cout << "The length for height is " << sideA << std::endl;
			std::cout << "The area is " << area << std::endl;
			std::cout << "The perimeter " << perimeter << std::endl;
		}
		else if (userInputSide == "B")
		{
			std::cout << "You chose side " << userInputSide << ", what is your base?" << std::endl;
			std::cin >> sideC;
			std::cout << "What is the measurement of your height?" << std::endl;
			std::cin >> sideA;

			perimeter = (2 * sideB) + sideC;
			sideB = (perimeter / 2) - (sideC / 2);
			area = (sideC * sideB) / 2;

			std::cout << "The length of the sides is " << sideB << std::endl;
			std::cout << "The area is " << area << std::endl;
			std::cout << "The perimeter " << perimeter << std::endl;
		}
		else if (userInputSide == "C")
		{
			std::cout << "You chose side " << userInputSide << ", what is your sides?" << std::endl;
			std::cin >> sideB;
			std::cout << "What is the measurement of your height?" << std::endl;
			std::cin >> sideA;

			sideC = 2 * sqrt(pow(sideB, 2) - pow(sideA, 2));
			std::cout << "The area for the sides is " << sideB << ", the perimeter is " << std::endl;
		}
	}
	else if (userInputTriangleShape == "Equalateral")
	{
		std::cout << "What is the measurement of your sides?" << std::endl;
		std::cin >> sideA;

		perimeter = 3 * sideA;
		sideC = sqrt(3) / 4 * (sideA * sideA);

		std::cout << "The area for your equilateral triangle is " << sideC << ", the perimeter is " << perimeter << std::endl;
	}
	system("pause");
	return 0;
}