#include <iostream>
using namespace std;

class A;
class B;	//forward declaration

class B
{
private:
	int m_val = 2;

	void dosome(A& a);
};

class A
{
private:
	int m_val = 1;

	//friend class B;
	friend void B::dosome(A& a);
};

void B::dosome(A& a)
{
	cout << a.m_val << endl;
}


//void dosome(A& ai,B& bi)
//{
//	cout << ai.m_val << bi.m_val << endl;
//}
int main()
{

	return 0;
}
