#include <iostream>
#include "myconstant.h"
using namespace std;
int value = 123;

void dosomething();
extern int a;	// 함수로 치면 전방선언

//static -> 전역변수에서 사용 시 정의된 소스파일에서만 사용 가능
//		지역변수에서 사용 시 정의된 범위가 종료된 이후에도 값을 유지
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
