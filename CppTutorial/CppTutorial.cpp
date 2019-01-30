
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>

std::vector<int> Range(int start, int end, int incr);

int main()
{
	// Range example
	std::vector<int> myVec = Range(1, 10, 3);

	for (auto var : myVec) {
		std::cout << var << std::endl;
	}
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