//Triangle
//04/12/18
//Jimmy THai

#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

int main()
{
	double area, perimeter;
	std::string triangleType;
	int userInput1;
	int userInput2;
	int userInput3;

	std::cout << "Do you have a right, isoceles, or equilateral triangle?" << std::endl;
	std::cin >> triangleType;

	if (triangleType == "Right" || "right")
		{
			std::cout << "What is the base? If none, type 0>" << std::endl;
			std::cin >> userInput1;
			std::cout << "What is the height? If none, type 0>" << std::endl;
			std::cin >> userInput2;
			std::cout << "What is the hypotenuse? If none, type 0>" << std::endl;
			std::cin >> userInput3;
		}
	else if (triangleType == "Isosceles" || "isosceles")
		{
			std::cout << "What is the base?" << std::endl;
			std::cin >> userInput1;
			std::cout << "What is the side?" << std::endl;
			std::cin >> userInput2;
		}
	else if (triangleType == "Equilateral" || "equilateral")
		{
			std::cout << "What is the side length?" << std::endl;
			std::cin >> userInput1;

		}

	system("pause");
	return 0;
}