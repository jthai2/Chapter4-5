//Fizz Buzz Woof
//04/12/18
//Jimmy Thai

#include <iostream>
#include <string>

int main()
{
	int userNum, buzz, fizz, woof;
	int starting = 0;

	std::cout << "please choose a number>>>" << std::endl;
	std::cin >> userNum;

	while (starting != userNum)
	{
		starting = starting + 1;
		buzz = starting % 3;
		fizz = starting % 5;
		woof = starting % 7;

		if (buzz == 0)
		{
			std::cout << "buzz" << std::endl;
		}
		if (fizz == 0)
		{
			std::cout << "fizz" << std::endl;
		}
		if (woof == 0)
		{
			std::cout << "woof" << std::endl;
		}
		if (buzz == 0 && fizz == 0)
		{
			std::cout << "buzz, fizz" << std::endl;
		}
		if (buzz == 0 && woof == 0)
		{
			std::cout << "buzz, woof" << std::endl;
		}
		if (fizz == 0 && woof == 0)
		{
			std::cout << "fizz, woof" << std::endl;
		}
		if (buzz == 0 && woof == 0 && fizz == 0)
		{
			std::cout << "buzz, fizz , woof" << std::endl;
		}
		if (buzz != 0 && fizz != 0 && woof != 0)
		{
			std::cout << starting << std::endl;
		}
	}

	system("pause");
	return 0;
}