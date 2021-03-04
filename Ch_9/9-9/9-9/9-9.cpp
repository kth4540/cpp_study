#include <iostream>
#include <cassert>
using namespace std;
class frac
{
private:
	int m_numerator;
	int m_denominator;



public:
	frac(int num = 0, int den = 1)
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

frac dosome()
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

	frac result = dosome();
	cout << &result << endl;
	cout << result << endl;
	return 0;
}
