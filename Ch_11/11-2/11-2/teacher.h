#pragma once
#include "person.h"

class teacher :public person
{
private:

public:
	teacher(const std::string& name_in = "no name")
		:person(name_in) {}


	friend std::ostream& operator <<(std::ostream& out, const teacher& tch)
	{
		out << tch.getName() << std::endl;
		return out;
	}
};