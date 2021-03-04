#pragma once
#include <iostream>

class position2D

{
private:
	int m_x;
	int m_y;

public:
	position2D(const int& x, const int& y)
		:m_x(x), m_y(y) {}



	void set(const int& x, const int& y)
	{
		m_x = x;
		m_y = y;
	}

	void set(const position2D& pos)
	{
		set(pos.m_x, pos.m_y);	// 함수 재활용
	}


	friend std::ostream& operator <<(std::ostream& out, const position2D& pos2d)
	{
		out << pos2d.m_x << " " << pos2d.m_y;
		return out;
	}

	position2D& operator =(const position2D& pos)
	{
		m_x = pos.m_x;
		m_y = pos.m_y;
		return*this;
	}
};