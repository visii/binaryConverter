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

void checkBinary(int number, int bits)
{
	std::cout << number << " is ";
	int x{ 8 };
	while (x > 0)
	{
		if (bits == 8)
			std::cout << " ";
		if (number >= bits)
		{
			std::cout << '1';
			number = number - bits;
		}
		else
		{
			std::cout << "0";
		}
		bits = bits / 2;
		x--;
	}
	std::cout << " in binary.";
	main();
}


int main()
{
	int number{ userNumber() };
	int bits{ 128 };
	checkBinary(number, bits);
	return 0;
}
