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
		//child �� constructor �� ȣ��Ǳ� ���� mother�� constructor�� ���� ȣ���
		//���� child�� initialize list���� �ʱ�ȭ�� �Ұ�����
		:/*mother()�� �ִ°Ͱ� ����*/m_d(1.0)
	{

		cout << "child constructor" << endl;	
	}
};
int main()
{
	child c1;	

	return 0;
}
