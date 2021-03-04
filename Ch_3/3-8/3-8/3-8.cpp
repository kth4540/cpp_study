#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	// << left shift
	// >> right shift
	// ~(not), &(and), |(or), ^(xor)

	unsigned int a = 3;
	cout << bitset<4>(a) << endl;

	unsigned int b = a << 4;
	cout << bitset<4>(b) << endl;
	cout << b << endl;

	unsigned int x = 0b1100;
	unsigned int y = 0b0110;
	cout << x << " " << y << endl;

	cout << bitset<4>(x & y) << endl;
	cout << bitset<4>(y | y) << endl;
	cout << bitset<4>(x ^ y) << endl;

	x &= y;
	int t = 0b0110;
	cout << bitset<32>(t >> 2) << endl;
	/* 0110>>2 -> decimal
	5|12
	5&12
	5^12
	*/
	return 0;
}
