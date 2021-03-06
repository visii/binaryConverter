// binaryConverter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int userNumber()
{
	std::cout << "Enter a number between 0 and 255: ";
	int x{};
	std::cin >> x;
		if (!(x >= 0 && x <= 255))
		{
			std::cout << "Invalid number, please enter a number between 0 and 255.\n";
			userNumber();
		}
		else
			return x;
}

int main();

// Compares the number to the value of each individual bit in an 8 bit
// binary number.
void checkBinary(int number, int bits)
{
	std::cout << number << " is ";
	while (bits > 0)
	{
		// Outputs a space after 4 loops to make the binary number more readable.
		if (bits == 8)
			std::cout << " ";
		// If the value of number is higher than the value of the highest bit,
		// it prints a 1, and subtracts the value of that bit from the number.
		if (number >= bits)
		{
			std::cout << '1';
			number = number - bits;
		}
		// If the value of the largest bit is bigger than the number, outputs
		// a zero.
		else
		{
			std::cout << "0";
		}
		// Halves the bit to check the value of the next largest bit, so it goes
		// from 128 to 64 to 32 etc. etc.
		bits = bits / 2;
	}
	std::cout << " in binary.\n";
	// Loops back to main so the user can input another number.
	main();
}


int main()
{
	// Asks user for a number
	int number{ userNumber() };
	// The value of the 8th bit in an 8 bit binary number.
	int bits{ 128 };
	checkBinary(number, bits);
	return 0;
}
