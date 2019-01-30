
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>

int main()
{
	// Enter calculation (ex. 5 + 6) : 10 - 6
	// 10.0 - 6.0 = 4.0
	// Please enter only +, -, *, /

	std::string sCalculation;
	std::vector<std::string> vString;
	std::string indivString;
	double a, b, result;
	char space = ' ';

	std::cout << "Enter calculation (ex. 5 + 6) : ";
	getline(std::cin, sCalculation);

	std::stringstream ss(sCalculation);

	while (getline(ss, indivString, space)) {
		vString.push_back(indivString);
	}

	a = std::stod(vString[0]);
	b = std::stod(vString[2]);
	
	if (vString[1] == "+") {
		result = a + b;
		printf("%.1f + %.1f = %.1f", a, b, result);
	} else if (vString[1] == "-") {
		result = a - b;
		printf("%.1f - %.1f = %.1f", a, b, result);
	} else if (vString[1] == "*") {
		result = a * b;
		printf("%.1f * %.1f = %.1f", a, b, result);
	} else if (vString[1] == "/") {
		result = a / b;
		printf("%.1f / %.1f = %.1f", a, b, result);
	}
	else {
		std::cout << "Please enter only +, -, *, /";
	}
	

	return 0;
}