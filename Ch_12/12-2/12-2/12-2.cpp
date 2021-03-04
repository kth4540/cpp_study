#include <iostream>
using namespace std;
class A
{
public:
	virtual void print() { cout << "A" << endl; }
	//가장 상위 class 가 virtual 이면 하위 class 들도 전부 virtual
};

class B:public A
{
public:
	virtual void print() { cout << "B" << endl; }
};
class C :public B
{
public:
	virtual void print() { cout << "C" << endl; }
};
class D :public C
{
public:
	virtual void print() { cout << "D" << endl; }
	//return type 은 상위 클래스들과 같아야함
};
int main()
{
	A a;
//	a.print();

	B b;
//	b.print();

	C c;
//	c.print();

	D d;
//	d.print();

	B& ref = c;
	ref.print();

	return 0;
}
