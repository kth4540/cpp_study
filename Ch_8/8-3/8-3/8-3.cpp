#include <iostream>
using namespace std;

class fraction
{
private:
	int m_numerator;
	int m_denominator;
public:
	fraction(const int& num_in,const int& den_in)	//생성자
	{
		m_numerator = num_in;
		m_denominator = den_in;

		cout << "fraction constructor" << endl;
	}
	void print()
	{
		cout << m_numerator << "/" << m_denominator << endl;
	}
};

class second
{
public:
	second()
	{
		cout << "class second cons()" << endl;
	}
};

class first
{
	second sec;
public:
	first()
	{
		cout << "class first cons()" << endl;
	}
};
int main()
{
	fraction frac(1, 3);
	//선언과 동시에 생성자 실행됨
	//생성자에 parameter가 없을 때는 () 없음
	//ex) fraction frac;	-> parameter 없음
	//ex) fraction frac(1,3)-> parameter 1,3
	frac.print();

	first fir;

	return 0;
}
