#include <iostream>
using namespace std;
class some
{
public:

	class _init
	{
	public:
		_init()
		{
			s_val = 99786;
		}
	};


private:
	static int s_val;
	int m_val;
	static _init s_initializer;

public:
	static int getval()
	{
		return s_val;	
		// static ������ this ��� �Ұ�(static->�޸� Ȯ��)
		// m_val -> static�� �ƴ� ��������

	}

	int tmp()
	{
		return this->s_val;
	}

};

int some::s_val;
some::_init some::s_initializer;
int main()
{
	//cout << some::s_val << endl;
	cout << some::getval() << endl;
	some s1,s2;
	cout << s1.getval() << endl;

//	int(some:: * fptr1)() = s1.tmp; -> ��� �Ұ�
//	s1, s2�� �ּҴ� �ٸ����� tmp�Լ��� �ּҴ� �ϳ�
//	-> �Լ� ��� �� ������ this ������ �����Ͽ� �۵�
	int(some:: * fptr1)() = &some::tmp;
	cout << (s2.*fptr1)() << endl;
	
	int(*fptr2)() = &some::getval;
	cout << (*fptr2)() << endl;
	return 0;
}
