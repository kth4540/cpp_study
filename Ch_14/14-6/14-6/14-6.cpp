#include <iostream>
#include <memory>
using namespace std;
class A
{
public:
	~A()
	{
//		throw "error";	-> �Ҹ��ڿ����� ����ó�� �Ұ���
	}
};
int main()
{
	try
	{
		int* i = new int[10000];
		unique_ptr<int> up_i(i);	//-> ����Ʈ������
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
