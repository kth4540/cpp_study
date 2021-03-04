#include <iostream>
using namespace std;


class b
{
private:
	int m_b;
public:
	b(const int& m_b_in)
		:m_b(m_b_in)
	{}
};

class something
{
private:
	int m_i;
	double m_d;
	char m_c;
	int m_arr[5];
	b m_b;
public:
	something():	
		// private 에서도 초기화를 하고 생성자에서도 초기화를 할 경우
		// 생성자 초기화를 우선으로 함
		m_i(1), m_d(3.14),
		m_c('a'),
		m_arr{ 1,2,3,4,5 },
		m_b(m_i - 1)
	{

		//m_i = 1;
		//m_d = 3.14;
		//m_c = 'a';

	}
	void print()
	{
		cout << m_i << " " << m_d << " " << m_c << endl;
	}
};

int main()
{
	something s;
	s.print();

	return 0;
}
