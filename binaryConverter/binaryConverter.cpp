// binaryConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int userNumber()
{
	std::cout << "\nEnter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

int main();

void checkBinary(int number, int pow)
{
	int x{ 8 };
	while (x > 0)
	{
		if (pow == 8)
			std::cout << " ";
		if (number >= pow)
		{
			std::cout << '1';
			number = number - pow;
		}
		else
		{
			std::cout << "0";
		}
		pow = pow / 2;
		x--;
	}
	main();
}


int main()
{
	int number{ userNumber() };
	int pow{ 128 };
	checkBinary(number, pow);
	return 0;
}
