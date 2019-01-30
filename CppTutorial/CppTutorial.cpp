
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>
#include <ctime>

int main()
{
	srand(time(NULL));
	int secretNum = std::rand() % 11;
	int guess = 0;

	while (true) {

		std::cout << "Give a number : ";
		std::cin >> guess;
		if (guess < secretNum) std::cout << "Too small.";
		if (guess > secretNum) std::cout << "Too big.";

		if (guess == secretNum) break;
	}

	std::cout << "You guessed it!";

	return 0;
}