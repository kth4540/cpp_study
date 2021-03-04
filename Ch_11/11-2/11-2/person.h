#pragma once
#include <iostream>
#include <string>
class person
{
private:
	std::string m_name;

public:
	person(const std::string& name_in = "no name")
		:m_name(name_in) {}

	void setName(const std::string& name_in)
	{
		m_name = name_in;
	}
	std::string getName() const
	{
		return m_name;
	}

	void doNothing() const
	{
		cout << m_name << "is doing nothing" << std::endl;
	}
};