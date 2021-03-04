#include <iostream>
using namespace std;

class mother	//
{
private:	//protected:private 상태지만 상속 class 에서는 접근 가능
	int m_i;

public:
	mother(const int& i_in)
	{
		m_i = i_in;
		cout << "mother constructor" << endl;
	}
	void setValue(const int& in)
	{
		m_i = in;
	}
	int getValue()
	{
		return m_i;
	}
};

class child :public mother	//derived class
{
private:
	double m_d;
public:
	child(const int& i_in, const double& d_in)
		:mother(i_in),m_d(d_in)
	{
		cout << "child constructor" << endl;
	}

	void setValue(const double& m_in,const double&d_in )
	{
		mother::setValue(1024);
		m_d = m_in;
	}

	double getValue()
	{
		return m_d;
	}
};

class daughter :public mother
{

};
int main()
{
	mother m(0);
	m.setValue(1024);
	cout << m.getValue() << endl;

	child c(1024, 128);
	cout << c.mother::getValue() << endl;
	cout << c.getValue() << endl;

	return 0;
}