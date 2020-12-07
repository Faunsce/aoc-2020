#include <iostream>
#include <exception>
#include "Solutions.hpp"

int main() {
	try {
		Day1::Solution1();
		Day1::Solution2();
	} catch (std::exception e) {
		std::cout << "EXCEPTION THROWN : \n" << e.what() << "" << std::endl;
	}
	std::cin.ignore(2);
}