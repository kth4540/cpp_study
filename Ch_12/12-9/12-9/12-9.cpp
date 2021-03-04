#include <iostream>
#include <vector>
using namespace std;
class Base
{
public:
	int m_i = 0;
	virtual void print()
	{
		cout << "i'm base" << endl;
	}
};

class Derived : public Base
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "i'm derived" << endl;
	}
};

void dosome(Base b)
{
	b.print();
}

void dosome() {}
int main()
{
	Derived d;
	Base b = d;	//-> m_j�� �߷�����

	b.print();
	dosome(b);

	vector<Base*> my_vec;	//-> ���Ϳ��� reference �Ұ���
	//vector<std::reference_wrapper<Base>> my_vec;
	//->reference_wrapper ����ϸ� reference ��� ����

	my_vec.push_back(&b);
	my_vec.push_back(&d);	// -> �߷�����
	for (auto& ele : my_vec)
		ele->print();

	//my_vec.push_back(b);
	//my_vec.push_back(d);	// -> �߷�����
	//for (auto& ele : my_vec)
	//	ele.get().print();
	//-> reference_wrapper ��� �� get()���� base�� reference�� ���Ϲ޾ƾ���
	return 0;
}
