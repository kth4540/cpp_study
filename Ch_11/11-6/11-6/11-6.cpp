#include <iostream>
using namespace std;
class base
{
protected:
	int m_value;

public:
	base(int value)
		:m_value(value)
	{

	}
};

class derived :public base
{
public:
	derived(int value)
		:base(value)
	{

	}
	void setValue(int val)
	{
		base::m_value = val;
	}
};
int main()
{


	return 0;
}
