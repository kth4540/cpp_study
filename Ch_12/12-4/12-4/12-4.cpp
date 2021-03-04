#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base" << endl;
	}
};
class Derived :public Base
{
private:
	int* m_array;
public:
	Derived(int length)
	{
		m_array = new int[length];
	}
	~Derived() override
	{
		cout << "~Derived" << endl;
		delete[] m_array;
	}
};
int main()
{
	Derived* d = new Derived(5);
	Base* b = d;
	delete b;

	return 0;
}
