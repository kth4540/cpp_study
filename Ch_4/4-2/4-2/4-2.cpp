#include <iostream>
#include "myconstant.h"
using namespace std;
int value = 123;

void dosomething();
extern int a;	// �Լ��� ġ�� ���漱��

//static -> ������������ ��� �� ���ǵ� �ҽ����Ͽ����� ��� ����
//		������������ ��� �� ���ǵ� ������ ����� ���Ŀ��� ���� ����
int main()
{
	//cout << value << endl;

	//int value = 1;
	//cout << value << endl;

	//cout << ::value << endl;
	//cout << value << endl;

	//dosomething();
	//dosomething();
	//dosomething();
	//dosomething();

	//cout << a << endl;

	cout << "in main.cpp file " << constants::pi << " "
		<< &constants::pi << endl;
	
	dosomething();

	return 0;
}
