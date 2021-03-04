#pragma once
#include <string>
#include "position2D.h"
class monster
{
private:
	std::string m_name;
	position2D location;
public:
	monster(const std::string name_in, const position2D& loc)
		:m_name(name_in),location(loc) {}

	void moveTo(const position2D& loc)
	{
		location.set(loc);
	}

	friend std::ostream& operator <<(std::ostream& out, const monster& m)
	{
		out << m.m_name << " " << m.location << " ";
		return out;
	}
};