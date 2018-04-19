//Pizza Choice
//04/12/18
//Jimmy Thai

#include <iostream>
#include <string>
#include <iomanip>

void printMenu()
{
	std::cout << "    | Menu |\nSmall Pizza - $7.99\nMedium Pizza - $8.99\nLarge Pizza - $10.99"
		"\n | Toppings |\nPepperoni - $4.99\nSausage - $5.99\nCheese - $3.99\n" << std::endl;
}

int main()
{
	int userToppings;
	int pizzaSize;

	double pizzaSmall = 7.99;
	double pizzaMedium = 8.99;
	double pizzaLarge = 10.99;
	double pepperoniPrice = 4.99;
	double sausagePrice = 5.99;
	double cheesePrice = 3.99;
	double taxRate = 1.075;
	double total;
	double totalWithTax;

	std::cout << std::fixed << std::showpoint;
	std::cout << std::setprecision(2);

	std::cout << "Welcome to Luigi's stereotypical pizza place!" << std::endl;

	printMenu();

	std::cout << "What size of pizza would you like?\n1 for small\n2 for medium\n3 for large" << std::endl;
	std::cin >> pizzaSize;

	if (pizzaSize == 1) //small
	{
		std::cout << "You chose a small pizza. The price is $" << pizzaSmall << ". What toppings would you like?"
			"\n1 for pepperoni\n2 for sausage\n3 for cheese" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			//pepperoni
			std::cout << "You've ordered a small pepperoni pizza" << std::endl;
			total = pizzaSmall + pepperoniPrice;
		}

		else if (userToppings == 2)
		{
			//sausage
			std::cout << "You've ordered a small sausage pizza" << std::endl;
			total = pizzaSmall + sausagePrice;
		}

		else if (userToppings == 3)
		{
			//cheese
			std::cout << "You've ordered a small cheese pizza" << std::endl;
			total = pizzaSmall + cheesePrice;
		}

		else
		{
			//nothing
			std::cout << "You didn't choose anything." << std::endl;

			system("pause");
			return 0;
		}
	}

	else if (pizzaSize == 2) //medium
	{
		std::cout << "You chose a medium pizza. The price is $" << pizzaMedium << ". What toppings would you like?"
			"\n1 for pepperoni\n2 for sausage\n3 for cheese" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			//pepperoni
			std::cout << "You've ordered a medium pepperoni pizza" << std::endl;
			total = pizzaMedium + pepperoniPrice;
		}

		else if (userToppings == 2)
		{
			//sausage
			std::cout << "You've ordered a medium sausage pizza" << std::endl;
			total = pizzaMedium + sausagePrice;
		}

		else if (userToppings == 3)
		{
			//cheese
			std::cout << "You've ordered a medium cheese pizza" << std::endl;
			total = pizzaMedium + cheesePrice;
		}

		else
		{
			//nothing
			std::cout << "You didn't choose anything." << std::endl;

			system("pause");
			return 0;
		}
	}

	else if (pizzaSize == 3) //large
	{
		std::cout << "You chose a large pizza. The price is $" << pizzaLarge << ". What toppings would you like?"
			"\n1 for pepperoni\n2 for sausage\n3 for cheese" << std::endl;
		std::cin >> userToppings;
		if (userToppings == 1)
		{
			//pepperoni
			std::cout << "You've ordered a large pepperoni pizza" << std::endl;
			total = pizzaLarge + pepperoniPrice;
		}

		else if (userToppings == 2)
		{
			//sausage
			std::cout << "You've ordered a large sausage pizza" << std::endl;
			total = pizzaLarge + sausagePrice;
		}

		else if (userToppings == 3)
		{
			//cheese
			std::cout << "You've ordered a large cheese pizza" << std::endl;
			total = pizzaLarge + cheesePrice;
		}

		else
		{
			//nothing
			std::cout << "You didn't choose anything." << std::endl;

			system("pause");
			return 0;
		}
	}

	else //nothing
	{
		std::cout << "We don't have that size" << std::endl;

		system("pause");
		return 0;
	}

	totalWithTax = total * taxRate;

	std::cout << "Your total is $" << total << " before tax and $" << totalWithTax << " after tax" << std::endl;

	system("pause");
	return 0;
}