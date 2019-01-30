
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>


int main()
{
	// Christmas tree example

	int height = 0;

	std::cout << "Give the number of rows : ";
	std::cin >> height;

	for (int i = 1; i <= height; i++) {
		for (int j = height - i; j >= 0; j--) {
			std::cout << " ";
		}
		for (int k = 1; k <= i * 2 - 1; k++) {
			std::cout << "#";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i <= height - 1; i++) {
		std::cout << " ";
	}
	std::cout << "#" << std::endl;

	return 0;
}