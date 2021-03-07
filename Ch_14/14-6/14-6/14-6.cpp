#include <iostream>
#include <memory>
using namespace std;
class A
{
public:
	~A()
	{
//		throw "error";	-> 소멸자에서는 예외처리 불가능
	}
};
int main()
{
	try
	{
		int* i = new int[10000];
		unique_ptr<int> up_i(i);	//-> 스마트포인터
		//do something with i
		throw "error";
		//delete[] i;
	}
	catch (...)
	{
		cout << "catch" << endl;
	}
	return 0;
}
