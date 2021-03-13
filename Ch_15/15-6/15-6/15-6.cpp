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
		//shared_ptr은 몇번째로 연결된 포인터인지 저장, 마지막 포인터가 해제될 때 소멸
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
