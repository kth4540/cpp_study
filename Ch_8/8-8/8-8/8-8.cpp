#include <iostream>
#include "calc.h"
using namespace std;

class simple
{
	int m_id;
public:
	simple(int id)
	{
		this->setid(id);
		cout << this << endl;	//this -> 자신의 주소
	}

	void setid(int id) { m_id = id; }
	int getid() { return m_id; }
};

int main()
{
	//simple s1(1), s2(2);
	//s1.setid(2);
	//s2.setid(4);
	//cout << &s1 << " " << &s2 << endl;

	cal c(10);
	//c.add(10);
	//c.sub(1);
	//c.mul(2);

	c.add(10).mul(2).sub(5).print();
	return 0;
}
