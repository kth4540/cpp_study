#include <iostream>
using namespace std;
class cents
{
private:
	int m_cents;
public:
	cents(int cents = 0)
	{
		m_cents = cents;
	}
	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

class dollar
{
private:
	int m_dollar = 0;
public:
	dollar(const int& input) :m_dollar(input) {}

	operator cents()
	{
		return cents(m_dollar * 100);
	}
};

void printInt(const int& val)
{
	cout << val << endl;
}
int main()
{
	dollar dl(2);
	cents c = dl;
	printInt(c);
	return 0;
}
