#include <iostream>
using namespace std;

class fraction
{
private:
	int m_numerator;
	int m_denominator;
public:
	fraction(const int& num_in,const int& den_in)	//������
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
	//����� ���ÿ� ������ �����
	//�����ڿ� parameter�� ���� ���� () ����
	//ex) fraction frac;	-> parameter ����
	//ex) fraction frac(1,3)-> parameter 1,3
	frac.print();

	first fir;

	return 0;
}
