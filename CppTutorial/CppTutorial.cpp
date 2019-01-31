
#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <numeric>
#include <ctime>
#include <string>

void Bubble(std::vector<int>& valueVec);

int main()
{
	
	std::vector<int> toSort{ 1, 10, 5, 3, 34, 6, 2, 11, 15, 36, 2 };
	Bubble(toSort);
	for (auto val : toSort) {
		std::cout << val << " " << std::endl;
	}

	return 0;
}

void Bubble(std::vector<int>& valueVec) {

	int k = 1;
	for (int i = 0; i < valueVec.size() - 1; i++) {
		for (int j = 0; j < valueVec.size() - k; j++) {
			if (valueVec[j] > valueVec[j + 1]) {
				int temp = valueVec[j + 1];
				valueVec[j + 1] = valueVec[j];
				valueVec[j] = temp;
			}
		}
		k++;
	}
}