#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "constructor" << endl;
	}
	~A()
	{
		cout << "destructor" << endl;
	}
	void print()
	{
		cout << "hello" << endl;
	}
};

class cents
{
private:
	int m_cents;
public:
	cents(int cents) { m_cents = cents; }
	int getCents() const { return m_cents; }
};

cents add(const cents& c1, const cents& c2)
{
	return cents(c1.getCents() + c2.getCents());
}
int main()
{
	//A a;
	//a.print();

//	A().print();	// 생기자마자 사라짐

	cout << add(cents(6), cents(8)).getCents() << endl;
	cout << int(6) + int(8) << endl;

	return 0;
}
