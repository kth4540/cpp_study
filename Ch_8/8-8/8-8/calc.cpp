#include "calc.h"

inline cal::cal(int init)
	:m_val(init)
{}

cal& cal::add(int value)
{
	m_val += value; return *this;
}

inline cal& cal::sub(int value)
{
	m_val -= value; return *this;
}

inline cal& cal::mul(int value)
{
	m_val *= value; return *this;
}

inline void cal::print()
{
	using namespace std;

	cout << m_val << endl;
}
