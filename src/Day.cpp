#include "Day.hpp"
#include <string>
#include <fstream>
#include <filesystem>
#include <exception>

Day::Day(std::string filePath) {
	if (!std::filesystem::exists(filePath))
		throw std::filesystem::filesystem_error::exception(std::string(std::string("In : [" __FILE__ "] At : [Line ") + std::to_string(__LINE__) + std::string("] Error : [" "File not found" "]")).c_str());
	this->file.open(filePath);
}