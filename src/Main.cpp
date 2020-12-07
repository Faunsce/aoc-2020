#include <iostream>
#include <exception>
#include "Days/Day1.hpp"
#include "Days/Day2.hpp"

int main() {
	try {
		Day1 day1;
		Day2 day2;
	} catch (std::exception e) {
		std::cout << "EXCEPTION THROWN : \n" << e.what() << "" << std::endl;
	}
	std::cin.ignore(2);
}