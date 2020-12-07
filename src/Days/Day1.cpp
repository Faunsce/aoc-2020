#include "Day1.hpp"
#include <utility>
#include <iostream>
#include <array>

Day1::Day1()
	: Day("assets/Day1.txt") {
	while (!this->file.eof()) {
		int num;
		this->file >> num;
		nums.emplace_back(num);
	}
	this->Solution1();
	this->Solution2();
}

void Day1::Solution1() {
	std::pair<int, int> numPair;
	for (const auto& numA : nums) {
		for (const auto& numB : nums) {
			if (numA + numB == 2020) {
				numPair.first = numA;
				numPair.second = numB;
			}
		}
	}
	std::cout << "Nums [" << numPair.first << "][" << numPair.second << "][" << numPair.first * numPair.second << "]" << std::endl;
}

void Day1::Solution2() {
	std::array<int, 3> numTriple;
	for (const auto& numA : nums) {
		for (const auto& numB : nums) {
			for (const auto& numC : nums) {
				if (numA + numB + numC == 2020) {
					numTriple = std::array<int, 3>{numA, numB, numC};
				}
			}
		}
	}
	std::cout << "Nums [" << numTriple[0] << "][" << numTriple[1] << "][" << numTriple[2] << "][" << numTriple[0] * numTriple[1] * numTriple[2] << "]" << std::endl;
}