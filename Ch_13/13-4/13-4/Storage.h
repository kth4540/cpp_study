#pragma once
#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;
public:
	Storage(T val)
	{
		m_value = val;
	}
	~Storage()
	{}

	void print()
	{
		std::cout << m_value << '\n';
	}
};

template <>
void Storage<double>::print()
{
	std::cout << "Double type";
	std::cout << std::scientific << m_value << '\n';
}