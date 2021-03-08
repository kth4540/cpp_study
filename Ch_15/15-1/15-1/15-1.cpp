#include <iostream>
#include "AutoPtr.h"
#include "Resource.h"
using namespace std;


void dosome()
{
	try
	{
		//Resource* res = new Resource;	//dull pointer
		AutoPtr<Resource> res = new Resource;	//smart pointer

		return;

		if (true)
		{
			throw - 1;
		}	//early return 

		//delete res;	->smart pointer는 delete가 필요하지 않음
	}
	catch (...) {}
	//new 한 scope에서 delete를 해줘야한다 
	//-> RAII(Resource acquisition is initialization)
}
int main()
{
	//dosome();

	AutoPtr <Resource> res1(new Resource);
	AutoPtr<Resource> res2;

	cout << boolalpha;

	cout << res1.m_ptr << endl;
	cout << res2.m_ptr << endl;

	res2 = res1; //move semantics

	cout << res1.m_ptr << endl;
	cout << res2.m_ptr << endl;	

	return 0;
}


