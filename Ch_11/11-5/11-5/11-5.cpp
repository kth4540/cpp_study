#include <iostream>
using namespace std;
class base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class derived :private base
{
public:
	derived()
	{
		base::m_public;
		base::m_protected;
	}
};

class grandchild :public derived
{
public:
	grandchild()
	{
		//derived::m_public
	}
};
int main()
{
	base b;

	derived d;
//	d.m_public = 1024;	-> ºÒ°¡´É
	return 0;
}
