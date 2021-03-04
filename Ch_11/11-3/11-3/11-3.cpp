#include <iostream>
using namespace std;

class mother
{
protected:
	int m_i;

	mother()
		:m_i(1)
	{
		cout << "mother constructor" << endl;
	}
};

class child :public mother
{
public:
	double m_d;

public:
	child()
		//:m_i(1024) -> X
		//child 의 constructor 가 호출되기 전에 mother의 constructor가 먼저 호출됨
		//따라서 child의 initialize list에서 초기화가 불가능함
		:/*mother()가 있는것과 같음*/m_d(1.0)
	{

		cout << "child constructor" << endl;	
	}
};
int main()
{
	child c1;	

	return 0;
}
