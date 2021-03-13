#include <iostream>
#include <memory>
#include "Resource.h"
using namespace std;
auto dosome()
{
	//auto res1 = make_unique<Resource>(5);
	//return res1;

	return make_unique<Resource>(5);
}

//auto dosome2(unique_ptr<Resource> res)
//{
//	res->setAll(10);
//	return res;
//}

void dosome2(Resource* res)
{
	res->setAll(100);
	res->print();
}

using namespace std;
int main()
{
	//Resource* res = new Resource(100);

	//early return or throw

	//delete res;

	//unique_ptr<Resource> res(new Resource(100));
	//unique_ptr은 알아서 소멸자가 생성됨

	unique_ptr<int> upi(new int);

	//unique_ptr<Resource> res1(new Resource(5));
	//auto res1 = make_unique<Resource>(5);
	auto res1 = dosome();
	res1->setAll(5);
	res1->print();

	unique_ptr<Resource> res2;

	cout << boolalpha;
	cout << static_cast<bool>(res1) << endl;
	cout << static_cast<bool>(res2) << endl;

	//res2=res1;	-> unique_ptr은 복사 불가능
	//res2 = move(res1);	//move 만 사용 가능

	//cout << boolalpha;
	//cout << static_cast<bool>(res1) << endl;
	//cout << static_cast<bool>(res2) << endl;

	//if (res1 != nullptr)
	//	res1->print();
	//if (res2 != nullptr)
	//	res2->print();

	//res1=dosome2(move(res1));
	dosome2(res1.get());	//->get()은 자체함수(포인터값을 받아옴)
	res1->print();

}
