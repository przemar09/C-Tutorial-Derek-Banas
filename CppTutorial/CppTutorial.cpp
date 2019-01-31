
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>
#include <ctime>
#include <string>

void PrintHorizontalyVec(std::vector<int> vec);

int main()
{
	
	std::vector<int> theVec { 1, 10, 5, 3, 34 };
	PrintHorizontalyVec(theVec);

	return 0;
}

void PrintHorizontalyVec(std::vector<int> vec) {
	int numOfSpaces = 0;
	for (int i = 0; i < vec.size() * 4; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	std::cout << "|";
	for (int i = 0; i < vec.size(); i++) {
		std::cout << " " << i ;
		if (vec[i] >= 10) {
			std::cout << "  |";
			numOfSpaces++;
		}
		else
			std::cout << " |";
	}
	std::cout << std::endl;
	for (int i = 0; i < vec.size() * 4 + numOfSpaces; i++) {
		std::cout << "-";
	}
	std::cout << std::endl;
	std::cout << "|";
	for (int i = 0; i < vec.size(); i++) {
		std::cout << " " << vec[i] << " |";
	}
	std::cout << std::endl;
	for (int i = 0; i < vec.size() * 4 + numOfSpaces; i++) {
		std::cout << "-";
	}
}