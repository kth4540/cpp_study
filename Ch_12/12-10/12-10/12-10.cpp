#include <iostream>
#include <string>
using namespace std;
class Base
{
public:
	int m_i = 0;

	virtual void print()
	{
		cout << "i'm base" << endl;
	}
};
class Derived1 :public Base
{
public:
	int m_j = 1024;
	virtual void print() override
	{
		cout << "i'm derived1" << endl;
	}
};

class Derived2 : public Base
{
public:
	string m_name = "dr.two";

	virtual void print() override
	{
		cout << "i'm derived2" << endl;
	}
};
int main()
{
	Derived1 d1;
	Base* base = &d1;

	auto* base_to_d1 = dynamic_cast<Derived1*>(base);
	cout << base_to_d1->m_j << endl;

	//auto* base_to_d1 = dynamic_cast<Derived2*>(base);
	//if (base_to_d1 != nullptr)	-> dynamic_cast는 fail 시 nullptr 반환
	//	cout << base_to_d1->m_name << endl;
	//else
	//	cout << "failed" << endl;

	return 0;
}
