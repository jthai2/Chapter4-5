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

int main()
{
	double area, perimeter;
	std::string triangleType;
	int userInput1;
	int userInput2;

	std::cout << "What is your triangle type?" << std::endl;
	std::cin >> triangleType;

	if (triangleType == "Right")
		{
			std::cout << "What is the first side you want to know the calculations for?" << std::endl;
			std::cin >> userInput1;
			std::cout << "What is the second side you want to know the calculations for?" << std::endl;
			std::cin >> userInput2;
		}
	else if (triangleType == "Isosceles")
		{
			std::cout << "What 2 sides do you want?" << std::endl;
		}
	else if (triangleType == "Equilateral")
		{
			std::cout << "What 2 sides do you want?" << std::endl;
		}

	system("pause");
	return 0;
}