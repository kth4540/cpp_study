#include <iostream>
#include <cassert>
using namespace std;
class frac
{
private:
	int m_numerator;
	int m_denominator;



public:
	frac(char) = delete;

	explicit frac(int num = 0, int den = 1)	// explicit -> converting 불가능
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	frac(const frac& fraction)
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "copy constructor" << endl;
	}


	friend ostream& operator <<(ostream& out, const frac& f)
	{
		cout << f.m_numerator << "/" << f.m_denominator << endl;
		return out;
	}

};

frac dosome(frac f)
{
	frac tmp(1, 2);
	cout << &tmp << endl;
	return tmp;
}

int main()
{
	//frac fraction(3, 5);

	//frac fr_copy(frac(3, 10));

	//cout << fraction << " " << fr_copy << endl;

	frac fraction(7);

	dosome(frac(7));

	//frac fr2('c');	delete 로 막아버림
	return 0;
}
