#include "Day2.hpp"
#include <string>
#include <iostream>
#include <vector>

Day2::Day2()
	: Day("assets/Day2.txt") {
	this->Solution1();
}

void Day2::Solution1() {
	struct Password
	{
		int min = 0;
		int max = 0;
		char letter;
	};
	std::vector<Password> passwords;
	int validPasswords = 0;
	while (!this->file.eof()) {
		std::string line;
		std::getline(file, line, '\n');
		line += "\n";
		Password tempPassword;
		std::vector<std::string> sections;
		for (const auto& letter : line) {
			static std::string tempString = "";
			if (letter != '-' && letter != ' ' && letter != '\n') {
				tempString += letter;
			} else {
				sections.emplace_back(tempString);
				tempString = "";
			}
		}
		tempPassword.min = std::stoi(sections[0]);
		tempPassword.max = std::stoi(sections[1]);
		tempPassword.letter = sections[2].c_str()[0];
		int counter = 0;
		for (const auto& letter : sections[3]) {
			if (letter == tempPassword.letter) {
				counter++;
			}
		}
		if (counter <= tempPassword.max && counter >= tempPassword.min) {
			validPasswords++;
		}
	}
	std::cout << "valid passwords [" << validPasswords << "]" << std::endl;
}

void Day2::Solution2() {

}