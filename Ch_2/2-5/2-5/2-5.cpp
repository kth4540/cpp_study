#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main()
{
	float f(3.14f);
	double d(3.14);
	long double ld(3.14);

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<double>::lowest() << endl;
	cout << numeric_limits<long double>::lowest() << endl;

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e+1 << endl;

	cout << setprecision(16);
	cout << 1.0 / 3.0 << endl;
	return 0;
}
