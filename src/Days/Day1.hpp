#pragma once
#include "Day.hpp"
#include <vector>

class Day1 : public Day
{
public:
	Day1();
	virtual void Solution1() override final;
	virtual void Solution2() override final;
private:
	std::vector<int> nums;
};