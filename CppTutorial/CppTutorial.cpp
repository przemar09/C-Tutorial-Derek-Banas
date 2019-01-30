
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>

int main()
{
	// List of numbers 1-10 and print even numbers.

	std::vector<int> myVec(10);
	std::iota(std::begin(myVec), std::end(myVec), 1);

	for (auto val : myVec) {
		if (val % 2 == 0) {
			std::cout << val << " is an even number." << std::endl;
		}
	}
	return 0;
}