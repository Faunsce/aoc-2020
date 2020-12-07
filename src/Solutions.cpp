#include "Solutions.hpp"
#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>
#include <utility> // std::pair
#include <array>
#include <cassert>
#include <stdexcept>
#include <string>
#include <cstdio>

namespace Day1 {
	void Solution1() {
		std::string filePath("assets/Day1.txt");
		if (!std::filesystem::exists(filePath))
			throw std::filesystem::filesystem_error::exception(std::string(std::string("In : [" __FILE__ "] At : [Line ") + std::to_string(__LINE__) + std::string("] Error : [" "File not found" "]")).c_str());
		std::ifstream fstream(filePath);
		std::vector<int> nums;
		while (!fstream.eof()) {
			int num;
			fstream >> num;
			nums.emplace_back(num);
		}
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

	void Solution2() {
		std::string filePath("bin/assets/Day2.txt");
		if (!std::filesystem::exists(filePath))
			throw std::filesystem::filesystem_error::exception(std::string(std::string("In : [" __FILE__ "] At : [Line ") + std::to_string(__LINE__) + std::string("] Error : [" "File not found" "]")).c_str());
		std::ifstream fstream(filePath);
		std::vector<int> nums;
		if (!fstream.is_open())
			assert("File failed to open");
		while (!fstream.eof()) {
			int num;
			fstream >> num;
			nums.emplace_back(num);
		}
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
}

namespace Day2
{
	void Solution1() {

	}

	void Solution2() {

	}
}

namespace Day3
{
	void Solution1() {

	}

	void Solution2() {

	}
}

namespace Day4
{
	void Solution1() {

	}

	void Solution2() {

	}
}

namespace Day5
{
	void Solution1() {

	}

	void Solution2() {

	}
}

namespace Day6
{
	void Solution1() {

	}

	void Solution2() {

	}
}