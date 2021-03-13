#include <iostream>
#include "Resource.h"
using namespace std;

void dosome(unique_ptr<Resource> res)
{

}

int main()
{
	{
		dosome(make_unique<Resource>(100));
		//Resource* res = new Resource(3);
		//res->setAll(1);
		//shared_ptr<Resource> ptr1(res);
		//shared_ptr�� ���°�� ����� ���������� ����, ������ �����Ͱ� ������ �� �Ҹ�
		auto ptr1 = make_shared<Resource>(3);
		ptr1->print();
		{
			shared_ptr<Resource>ptr2(ptr1);
			ptr2->setAll(3);
			ptr2->print();
			cout << "going out of the block" << endl;
		}
		ptr1->print();
		cout << "going out of the block" << endl;

	}
}
