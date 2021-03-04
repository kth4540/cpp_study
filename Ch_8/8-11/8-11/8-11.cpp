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
		// static 에서는 this 사용 불가(static->메모리 확보)
		// m_val -> static이 아닌 지역변수

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

//	int(some:: * fptr1)() = s1.tmp; -> 사용 불가
//	s1, s2의 주소는 다르지만 tmp함수의 주소는 하나
//	-> 함수 사용 시 변수의 this 포인터 전달하여 작동
	int(some:: * fptr1)() = &some::tmp;
	cout << (s2.*fptr1)() << endl;
	
	int(*fptr2)() = &some::getval;
	cout << (*fptr2)() << endl;
	return 0;
}
