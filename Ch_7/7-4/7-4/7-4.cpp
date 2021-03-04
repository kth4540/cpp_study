#include <iostream>
using namespace std;

void foo(int* x)
{
	cout << *x << " " << x << " " << &x << endl;
}
int main()
{
	int val = 5;
	cout << val << " " << &val << endl;

	int* ptr = &val;
	cout << &ptr << endl;

	foo(ptr);
	foo(&val);

	return 0;
}
