#include "Day2.hpp"
#include <string>
#include <iostream>
#include <vector>

Day2::Day2()
	: Day{"assets/Day2.txt"}
	, validPasswords{ 0 } {
	while (!this->file.eof()) {
		std::string line; 
		std::getline(file, line, '\n'); // grab a line from the file
		line += "\n"; // add a cutoff character
		std::vector<std::string> section; // create a way to split up the data
		for (const auto& letter : line) { 
			static std::string tempString = "";
			if (letter != '-' && letter != ' ' && letter != '\n') {
				tempString += letter;
			}
			else {
				section.emplace_back(tempString);
				tempString = "";
			}
		}
		sections.emplace_back(section);
	}
	this->Solution1();
	this->Solution2();
}

void Day2::Solution1() {
	for (const auto& section : sections) {
		int counter = 0;
		for (const auto& letter : section[3]) {
			if (letter == section[2].c_str()[0]) {
				counter++;
			}
		}
		if (counter >= std::stoi(section[0]) && counter <= std::stoi(section[1])) {
			validPasswords++;
		}
	}
	std::cout << "valid passwords [" << validPasswords << "]" << std::endl;
	validPasswords = 0;
}

void Day2::Solution2() {
	for (const auto& section : sections) {
		if ( (section[3][std::stoi(section[0])-1] == section[2].c_str()[0]) ? 
			!(section[3][std::stoi(section[1])-1] == section[2].c_str()[0]) : 
			(section[3][std::stoi(section[1])-1] == section[2].c_str()[0]) ) {
			validPasswords++;
		}
	}
	std::cout << "valid passwords [" << validPasswords << "]" << std::endl;
}