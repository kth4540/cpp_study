#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	//float a = 1.0f;
	//double d = a;	//numeric promotion

	int i = 2;
	char c = i;	//numeric conversion

	double d = 0.123456789;
	float f = d;

	cout << static_cast<int>(c) << endl;
	cout << typeid(c).name() << endl;

	cout << 5u - 10 << endl;

	return 0;

}