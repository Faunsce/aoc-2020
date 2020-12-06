#include <iostream>
#include <fstream>
#include <vector>

int main() {
	std::ifstream fstream("bin/assets/input.txt");
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