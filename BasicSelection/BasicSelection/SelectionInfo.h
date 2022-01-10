#pragma once

//C system headers

//C++ system headers
#include <string>
#include <vector>
#include <iostream>
//Other libraries headers

//Own components headers

//Forward declarations

std::vector<std::string> printInfoForFirstSlot() {
	std::vector<std::string> result{};
	const int numberOfWepons = 4;
	std::string input[numberOfWepons] = { "AK47", "M4", "AWP", "M416" };

	for (int i = 0; i < numberOfWepons; i++) {
		std::cout << "( " << input[i] << " )";
		result.push_back(input[i]);
	}
	return result;
}


std::vector<std::string> printInfoForSecondSlot() {
	std::vector<std::string> result{};
	const int numberOfWepons = 2;
	std::string input[numberOfWepons] = { "Glock", "USP" };

	for (int i = 0; i < numberOfWepons; i++) {
		std::cout << "( " << input[i] << " )";
		result.push_back(input[i]);
	}
	return result;
}

std::vector<std::string> printInfoForThirdSlot() {
	std::vector<std::string> result{};
	const int numberOfWepons = 2;
	std::string input[numberOfWepons] = { "M9", "Karambit" };

	for (int i = 0; i < numberOfWepons; i++) {
		std::cout << "( " << input[i] << " )";
		result.push_back(input[i]);
	}
	std::cout << "\n";
	return result;
}

std::vector<std::string> printInfoForSide() {
	std::vector<std::string> result{};
	const int numberOfsids = 2;
	std::string input[numberOfsids] = { "CT", "T" };

	for (int i = 0; i < numberOfsids; i++) {
		std::cout << "( " << input[i] << " )";
		result.push_back(input[i]);
	}
	std::cout << "\n";
	return result;
}