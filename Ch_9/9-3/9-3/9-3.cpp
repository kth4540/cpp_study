#include <iostream>
using namespace std;

class cents
{
private:
	int m_cents;
public:
	cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	cents operator -() const
	{
		return cents(-m_cents);
	}

	bool operator !()const
	{
		//!cents(...)
		return (m_cents == 0) ? true : false;
	}

	friend ostream& operator<<(ostream& out, const cents& cents)
	{
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	cents cents1(6);
	cents cents2(0);
	int a = 3;

	//cout << cents1 << endl;
	//cout << -cents1 << endl;
	//cout << -cents(-10) << endl;

	auto tmp = !cents1;
	cout << !cents1 << " " << !cents2 << endl;

	return 0;
}