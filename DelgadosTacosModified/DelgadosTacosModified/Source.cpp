//DelgadosTacos
//03/28/2018
//Author: Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supremeBurrito = 4.50;
	double potatoOllas = 1.99;
	double tamale = 1.50;
	double chimichanga = 2.50;
	int done;
	std::string userChoice;

	double tacosOrdered=0, burritosOrdered=0, enchiladasOrdered=0, tostadasOrdered=0, drinkOrdered=0, churroOrdered=0, supremeBurritoOrdered=0,
		potatoOllasOrdered=0, tamaleOrdered=0, chimichangaOrdered=0, total=0, totalWithTax=0;

	std::cout << "*******Welcome to Delgados Tacos*******" << std::endl;
	std::cout << "               _____________                               " << std::endl;
	std::cout << "  ____________/____________/_________________              " << std::endl;
	std::cout << "  |                                 |        |             " << std::endl;
	std::cout << "  |                                 |_       |             " << std::endl;
	std::cout << "  |           ______________        | |  O_  |             " << std::endl;
	std::cout << "  |          |   Delgados   |       | |_  |__|             " << std::endl;
	std::cout << "  |          |    Tacos     |       |___|_|__|_            " << std::endl;
	std::cout << "  |          |    Truck     |                  |_          " << std::endl;
	std::cout << "  |          ----------------                    |__   _   " << std::endl;
	std::cout << "  |                                      ___________|_|_|  " << std::endl;
	std::cout << "  |                           ___        |              |  " << std::endl;
	std::cout << " _|                          |   |       |              |  " << std::endl;
	std::cout << "|_|       __                 |  O|       |__            |_ " << std::endl;
	std::cout << "  |______|__|________________|___|_______|__|___________|_|" << std::endl;
	std::cout << "          OO                              OO               " << std::endl;

	std::cout << "*************Menu****************" << std::endl;
	std::cout << "*        Tacos : $0.99          *" << std::endl;
	std::cout << "*       Burritos : $1.99        *" << std::endl;
	std::cout << "*      Enchiladas : $2.99       *" << std::endl;
	std::cout << "*       Tostadas : $1.50        *" << std::endl;
	std::cout << "*        Drinks : $0.99         *" << std::endl;
	std::cout << "*       Churros : $1.25         *" << std::endl;
	std::cout << "*    Supreme Burritos : $4.50   *" << std::endl;
	std::cout << "*      Potato Ollas : $1.99     *" << std::endl;
	std::cout << "*        Tamale : $1.50         *" << std::endl;
	std::cout << "*      Chimichanga : $2.50      *" << std::endl;
	std::cout << "*************Menu****************" << std::endl;

	do{
		std::cout << "What item would you like to order?" << std::endl;
		std::cin >> userChoice;

		if (userChoice == "tacos" || userChoice == "Tacos")
		{
			std::cout << "How many tacos do you want?" << std::endl;
			std::cin >> tacosOrdered;
		}
		else if (userChoice == "burritos" || userChoice == "Burritos")
		{
			std::cout << "How many burritos do you want?" << std::endl;
			std::cin >> burritosOrdered;
		}
		else if (userChoice == "enchiladas" || userChoice == "Enchiladas")
		{
			std::cout << "How many enchiladas do you want?" << std::endl;
			std::cin >> enchiladasOrdered;
		}
		else if (userChoice == "tostadas" || userChoice == "Tostadas")
		{
			std::cout << "How many tostadas do you want?" << std::endl;
			std::cin >> tostadasOrdered;
		}
		else if (userChoice == "drinks" || userChoice == "Drinks")
		{
			std::cout << "How many drinks do you want?" << std::endl;
			std::cin >> drinkOrdered;
		}
		else if (userChoice == "churros" || userChoice == "Churros")
		{
			std::cout << "How many churros do you want?" << std::endl;
			std::cin >> churroOrdered;
		}
		else if (userChoice == "supreme" || userChoice == "Supreme")
		{
			std::cout << "How many supreme burritos do you want?" << std::endl;
			std::cin >> supremeBurritoOrdered;
		}
		else if (userChoice == "potato" || userChoice == "Potato")
		{
			std::cout << "How many potato ollas do you want?" << std::endl;
			std::cin >> potatoOllasOrdered;
		}
		else if (userChoice == "tamales" || userChoice == "Tamales")
		{
			std::cout << "How many tamales do you want?" << std::endl;
			std::cin >> tamaleOrdered;
		}
		else if (userChoice == "chimichangas" || userChoice == "Chimichangas")
		{
			std::cout << "How many chimichangas do you want?" << std::endl;
			std::cin >> chimichangaOrdered;
		}
		else
		{
			std::cout << "Not Available!" << std::endl;
		}
		double tacosTotal = tacosOrdered * tacos;
		double burritoTotal = burritosOrdered * burritos;
		double enchiladaTotal = enchiladasOrdered * enchiladas;
		double tostadaTotal = tostadasOrdered * tostadas;
		double drinkTotal = drinkOrdered * drink;
		double churroTotal = churroOrdered * churro;
		double supremeBurritoTotal = supremeBurritoOrdered * supremeBurrito;
		double potatoOllaTotal = potatoOllasOrdered * potatoOllas;
		double tamaleTotal = tamaleOrdered * tamale;

	} while (done != 1);

	total = (tacos*tacosOrdered) + (burritos*burritosOrdered) + (enchiladas*enchiladasOrdered) + (tostadas*tostadasOrdered) + (drink*drinkOrdered)
		+ (churro*churroOrdered) + (supremeBurrito*supremeBurritoOrdered) + (potatoOllas*potatoOllasOrdered) + (tamale*tamaleOrdered) +
		(chimichanga*chimichangaOrdered);
	std::cout << "Your total is >>> " << total;

	system("pause");
	return 0;


}