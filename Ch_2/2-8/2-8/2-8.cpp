#include <iostream>
using namespace std;
int main()
{
	float pi = 3.14f;
	int i = 1234;
	unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;

	//decimal: 0 1 2 3 4 5 6 7 8 9 10
	//octal: 0 1 2 3 4 5 6 7 10 11 12 13
	//hexa: 0 1 2 3 4 5 6 7 8 9 10 A B C D E F 10 11

	int x = 012;
	cout << x << endl;

	//0011 1010 1111
	//3A7F

	x = 0xf;
	cout << x << endl;

	x = 0b1010;
	cout << x << endl;

	return 0;
}
