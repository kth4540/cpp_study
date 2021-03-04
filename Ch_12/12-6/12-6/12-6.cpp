#include <iostream>
using namespace std;
class Base
{
public:
	//FunctionPointer* _vptr;
	virtual void fun1() { cout << "base 1" << endl; }
	void fun2() { cout << "base 2" << endl; }
};

class Der :public Base
{
public:
	//FunctionPointer* _vptr;
	void fun1() { cout << "der 1" << endl; }
	void fun3() { cout << "der 3" << endl; }
};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;
	Base base;
	Der der;
	Base& r = der;

	r.fun1();
	der.fun2();
	return 0;
}
