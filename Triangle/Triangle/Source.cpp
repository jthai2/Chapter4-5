//Triangle
//04/12/18
//Jimmy THai

//Create a program that asks the user if they have a right triangle, isosceles, or equilateral. You will be given 2 sides of the triangle.
//You must write a program that finds the length of the missing side.You must write a program the finds the perimeter, and area of the triangles.
//The program must not end until you type the word STOP.
//Example: Right triangle A side = 5, B side = 6, C side = ? ?
//Output : C side = 7.81
//Area of Right triangle = 15
//Perimeter of Right triangle = 18.81
//Note** The isosceles output you are looking for is height.
//Find the square root

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