#pragma once
#include "person.h"

class student:public person
{
private:
	int m_intel;

public:
	student(const std::string& name_in = "no name", const int& intel_in = 0)
		:person(name_in), m_intel(intel_in) {}


	void setIntel(const int& intel_in)
	{
		m_intel = intel_in;
	}

	int getIntel()
	{
		return m_intel;
	}

	friend std::ostream& operator <<(std::ostream& out, const student& stu)
	{
		out << stu.getName() << " " << stu.m_intel << std::endl;
		return out;
	}
};