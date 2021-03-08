#include "AutoPtr.h"
#include "Resource.h"
using namespace std;


AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(3));
	return res;
}

int main()
{
	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	return 0;
}
