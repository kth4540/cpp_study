#include <iostream>
using namespace std;

int main()
{
	bool value = false;
	cout << (value ? 1 : 0) << endl;

	char chvalue = 65;
	cout << chvalue << endl;

	float fvalue = 3.141592f;
	double dvalue = 3.141592;

	cout << fvalue << endl;
	cout << dvalue << endl;

	auto avalue = 3.141592;
	auto avalue2 = 3.141592f;

	cout << avalue << endl;
	cout << avalue2 << endl;

	cout << sizeof(bool) << endl;
	cout << sizeof(value) << endl;

	int a(123);	//direct initialization
	int b = (int)3.1415;//copy initialization

	int c{ 123 };//uniform initialization

	// direct, copy는 자료형이 달라도 컴파일 가능
	//uniform은 불가능 -> casting 필요
	return 0;
}
