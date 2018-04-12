//Pizza Choice
//04/12/18
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	int userToppings, anotherTopping;//user choosing type of pizza
	double pizzaSmall = 7.99, pizzaMedium = 8.99, pizzaLarge = 10.99;//price of pizza
	int pizzaSize;//the size of pizza
	double total;

	std::cout << "Welcome to Luigi's Pizza Joint!" << std::endl;
	
	std::cout << "What size of pizza do you want? 1 for small, 2 for medium, 3 for large>>>" << std::endl;
	std::cin >> pizzaSize;

	if (pizzaSize == 1)
	{
		std::cout << "You chose a small pizza, the price is " << pizzaSmall << " , what toppings do you want? 1 for pepperoni, 2 for bacon, 3 for cheese>>>" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			//pepperoni
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaSmall + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaSmall;
			}
		}
		else if (userToppings == 2)
		{
			//bacon
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaSmall + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaSmall;
			}
		}
		else if (userToppings == 3)
		{
			//sausage
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaSmall + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaSmall;
			}
		}
	}
	else if (pizzaSize == 2)
	{
		std::cout << "You chose a medium pizza, the price is " << pizzaMedium << " , what toppings do you want? 1 for pepperoni, 2 for bacon, 3 for cheese>>>" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			//bacon
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaMedium + .99;
			}
			else if (anotherTopping == 2)
			{
					total = pizzaMedium;
			}
		}
		else if (userToppings == 2)
		{
			//bacon
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaMedium + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaMedium;
			}
		}
		else if (userToppings == 3)
		{
			//sausage
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaMedium + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaMedium;
			}
		}
	}
	else if (pizzaSize == 3)
	{
		std::cout << "You chose a large pizza, the price is " << pizzaLarge << " , what toppings do you want? 1 for pepperoni, 2 for bacon, 3 for cheese>>>" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			//cheese
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaLarge + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaLarge;
			}
		}
		else if (userToppings == 2)
		{
			//bacon
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaMedium + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaMedium;
			}
		}
		else if (userToppings == 3)
		{
			//sausage
			std::cout << "Would you like to add another topping for $0.99? 1 for YES 2 for NO>>>" << std::endl;
			std::cin >> anotherTopping;
			if (anotherTopping == 1)
			{
				total = pizzaMedium + .99;
			}
			else if (anotherTopping == 2)
			{
				total = pizzaMedium;
			}
		}
	}


	
	std::cout << "Your total is " << total << std::endl;
	system("pause");
	return 0;
}