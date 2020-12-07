#pragma once
#include <fstream>
#include <string>

class Day
{
public:
	explicit Day(std::string);
	virtual void Solution1()=0;
	virtual void Solution2()=0;
protected:
	std::ifstream file;
};