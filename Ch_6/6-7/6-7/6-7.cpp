#include <iostream>
using namespace std;

struct something
{
	int a;
	double d;
};
int main()
{
	int x = 5;
	cout << &x << endl;

	int* ptr_x = &x;
	cout << typeid(ptr_x).name() << endl;

	something s;
	something* ptr_s;

	cout << sizeof(something) << endl;
	cout << sizeof(ptr_s) << endl;
	return 0;
}
