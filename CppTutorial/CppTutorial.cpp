
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>
#include <ctime>
#include <string>

std::string VectorToString(std::vector<std::string> stringVector, char separator);

int main()
{
	std::vector<std::string> vCusts(3);

	vCusts[0] = "Bob";
	vCusts[1] = "Sue";
	vCusts[2] = "Tom";

	std::string sCusts = VectorToString(vCusts, ' ');
	std::cout << sCusts << std::endl;

	return 0;
}

std::string VectorToString(std::vector<std::string> stringVector, char separator) {

	std::string result = "";

	for (std::string val : stringVector) {
		result += val;
		result += separator;
	}

	return result;
	
}