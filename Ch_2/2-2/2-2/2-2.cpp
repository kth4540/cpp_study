#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
int main()
{
	short s = 1;	//2bytes=2*8bits=16bits
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	cout << pow(2, sizeof(short) * 8 - 1/*부호 결정 자리*/) - 1/*0 제외*/ << endl;	// 
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = numeric_limits<short>::max();
	s += 1;	//overflow
	cout << s << endl;

	s = numeric_limits<short>::min();
	s -= 1;	//overflow
	cout << s << endl;

	return 0;
}
