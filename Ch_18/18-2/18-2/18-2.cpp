#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//cout.setf(ios::showpos);
	//cout << 108 << endl;

	//cout.unsetf(ios::showpos);
	//cout << 109 << endl;

	////cout.unsetf(ios::dec);
	//cout.setf(ios::hex, ios::basefield);
	//cout << 108 << endl;

	//cout << fixed;
	//cout << scientific << uppercase;
	//cout << showpoint;
	//cout << setprecision(3) << 123.456 << endl;
	//cout << setprecision(4) << 123.456 << endl;
	//cout << setprecision(5) << 123.456 << endl;
	//cout << setprecision(6) << 123.456 << endl;

	cout << -12345 << endl;
	cout.fill();
	cout << setw(10) << -12345 << endl;
	cout << setw(10) << right << -12345 << endl;
	cout << setw(10) << left << -12345 << endl;
	cout << setw(10) << internal << -12345 << endl;

}
