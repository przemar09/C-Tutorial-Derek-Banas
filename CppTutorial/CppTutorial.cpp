
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>

std::vector<int> Range(int start, int end, int incr);

int main()
{
	// Investment example

	double investment = 0.0, investRate = 0.0;

	std::cout << "How much to invest : ";
	std::cin >> investment;
	std::cout << "Investment Rate : ";
	std::cin >> investRate;

	investRate *= .01;

	for (auto var : Range(1, 10, 1)) {
		investment += investment * investRate;
	}

	std::cout << "Value after 10 years is : " << investment;
	return 0;
}

std::vector<int> Range(int start, int end, int incr) {
	
	std::vector<int> result = {};

	while (start <= end) {
		result.push_back(start);
		start += incr;
	}

	return result;
}