#pragma once
#include <iostream>
#include <string>
class Student
{
private:
	std::string m_name;
	int m_intel;
public:
	Student(const std::string& name = "no name",	const int& intel = 0)
		:m_name(name), m_intel(intel) {}

	void setName(const std::string& name)
	{
		m_name = name;
	}

	void setIntel(const int& itl)
	{
		m_intel = itl;
	}

	int getIntel()
	{
		return m_intel;
	}

	std::string getName()
	{
		return m_name;
	}

	friend std::ostream& operator << (std::ostream& out, const Student& stu)
	{
		out << stu.m_name << " " << stu.m_intel;
		return out;
	}
};