
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>
#include <ctime>
#include <string>

int main()
{
	std::string  normalString= "", secretString = "";
	
	std::cout << "Please enter a string in upper letters : ";
	std::cin >> normalString;
	
	for (char c : normalString) {
		secretString += std::to_string((int)c - 23);
	}
	std::cout << "Secret string : " << secretString << std::endl;

	normalString = "";

	for (int i = 0; i < secretString.length(); i += 2) {
		std::string sCharCode = "";
		sCharCode += secretString[i];
		sCharCode += secretString[i+1];
			
		int nCharCode = std::stoi(sCharCode);
		char chCharCode = nCharCode + 23;
		normalString += chCharCode;
	}

	std::cout << "Original : " << normalString << "\n";

	return 0;
}