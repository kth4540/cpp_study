#include <iostream>
using namespace std;
int main()
{
	//const int val = 5;
	//const int* ptr = &val;
	//*ptr = 6;	-> x

	//int val = 5;
	//const int* ptr = &val;
	//val=6;
	//*ptr = 6;	-> x

	//int val1 = 5;
	//const int* ptr = &val1;	//-> ptr�� �� ������ �Ұ���
	//int val2 = 6;
	//ptr = &val2;

	int val = 5;
	int* const ptr = &val;	// ptr�� ����Ű�� �ּ� ���� �Ұ���
	*ptr = 10;

	int val2 = 8;
	//ptr = &val2;	-> X

//	const int* const ptr3 = &val;	-> ptr�� ����Ű�� �ּ�, ����Ű�� �� ��� ���� �Ұ���
	return 0;
}
