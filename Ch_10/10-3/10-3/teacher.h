#pragma once
#include <string>
class Teacher
{
private:
	std::string m_name;
public:
	Teacher(const std::string& name = "no name")
		:m_name(name) {}

	void setName(const std::string& name)
	{
		m_name = name;
	}

	std::string getName()
	{
		return m_name;
	}

	friend std::ostream& operator<<(std::ostream& out, const Teacher tch)
	{
		out << tch.m_name;
		return out;
	}
};