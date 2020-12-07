#pragma once
#include "Day.hpp"
#include <vector>
#include <string>

class Day2 : public Day
{
public:
	Day2();
	virtual void Solution1() override final;
	virtual void Solution2() override final;
private:
	int validPasswords;
	std::vector<std::vector<std::string>> sections;
};