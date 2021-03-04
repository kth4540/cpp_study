#include <iostream>
using namespace std;
class cents
{
private:
	int m_cents;
public:
	cents(int cents=0) { m_cents = cents; }
	int getcents()const { return m_cents; }
	int& getcents() { return m_cents; }

	cents operator + (const cents& c2)
	{
		return cents(this->m_cents + c2.m_cents);
	}
};

//cents operator + (const cents& c1, const cents& c2)
//{
//	return cents(c1.getcents() + c2.getcents());
//}

int main()
{
	cents cents1(6);
	cents cents2(8);
	cents sum;

	cout << (cents1 + cents2 + cents(6) + cents(10)).getcents() << endl;

	return 0;
}
