#include <iostream>
using namespace std;
class base
{
protected:
	int m_i;
public:
	base(int val)
		:m_i(val) {}

	void print()
	{
		cout << "i'm base" << endl;
	}
};

class derived:public base
{
private:
	double m_d;
public:
	derived(int val)
		:base(val) {}

	using base::m_i;	// m_i�� derived �ȿ��� public���� �ٲ�

private:
	//using base::print;	print�� derived �ȿ��� public ���� �ٲ�

};
int main()
{
	base b(5);
	b.print();
	derived d(7);
	d.m_i = 1024;
	d.print();
	return 0;
}
