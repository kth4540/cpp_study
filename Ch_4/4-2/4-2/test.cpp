#include <iostream>
#include "myconstant.h"
using namespace std;
extern int a = 123;	// �ʱ�ȭ
// ���������� �⺻������ extern

void dosomething()
{
	cout << "in test.cpp " << constants::pi << " " << &constants::pi << endl;
}