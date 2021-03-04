#pragma once
#include <iostream>
class cal
{
private:
	int m_val;
public:
	cal(int init);

	cal& add(int value);
	cal& sub(int value);
	cal& mul(int value);


	void print();
};
