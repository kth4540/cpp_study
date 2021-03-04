#include <iostream>
#include "myconstant.h"
using namespace std;
extern int a = 123;	// 초기화
// 전역변수는 기본적으로 extern

void dosomething()
{
	cout << "in test.cpp " << constants::pi << " " << &constants::pi << endl;
}