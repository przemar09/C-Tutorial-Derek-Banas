
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>

int main()
{
	std::string sAge = "0";
	int age;
	std::cout << "Enter age: ";
	getline(std::cin, sAge);
	age = std::stoi(sAge);

	if (age == 5) {
		std::cout << "Go to Kindergarden.";
	}
	else if (age >= 6 && age <= 17) {
		printf("Go to grade %d", age - 5);
	}
	else if (age > 17) {
		std::cout << "Go to college.";
	}
	else {
		std::cout << "Too young for school.";
	}

	return 0;
}