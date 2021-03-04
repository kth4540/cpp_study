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
	Base b = d;	//-> m_j는 잘려나감

	b.print();
	dosome(b);

	vector<Base*> my_vec;	//-> 벡터에는 reference 불가능
	//vector<std::reference_wrapper<Base>> my_vec;
	//->reference_wrapper 사용하면 reference 사용 가능

	my_vec.push_back(&b);
	my_vec.push_back(&d);	// -> 잘려나감
	for (auto& ele : my_vec)
		ele->print();

	//my_vec.push_back(b);
	//my_vec.push_back(d);	// -> 잘려나감
	//for (auto& ele : my_vec)
	//	ele.get().print();
	//-> reference_wrapper 사용 시 get()으로 base의 reference를 리턴받아야함
	return 0;
}
