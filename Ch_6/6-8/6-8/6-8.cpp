#include <iostream>
using namespace std;

void dosomething(double* ptr)
{
	if (ptr != nullptr)
	{
		//do something
		cout << *ptr << endl;
	}
	else
	{
		//do nothing with ptr
		cout << "nullptr,do nothing" << endl;
	}
}
int main()
{
	double* ptr = nullptr;

	dosomething(ptr);
	dosomething(nullptr);

	double d = 123.4;
	ptr = &d;

	dosomething(ptr);
	return 0;
}
