#include "AutoPtr.h"
#include "Resource.h"
using namespace std;


AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(1000000));
	return res;
}
int main()
{
	//AutoPtr<Resource> res1(new Resource(1000000));
	//cout << res1.m_ptr << endl;
	//AutoPtr<Resource>res2 = std::move(res1);	//parameter를 R-value로 반환함
	//cout << res1.m_ptr << endl;
	//cout << res2.m_ptr << endl;

	AutoPtr<Resource> res1(new Resource(3));

	return 0;
}
