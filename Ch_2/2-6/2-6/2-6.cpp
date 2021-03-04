#include <iostream>
using namespace std;

bool isequal(int a, int b)
{
	bool result = (a == b);
	return result;
}

int main()
{
	bool b1 = true;
	bool b2(false);
	bool b3{ true };

	cout << boolalpha;

	cout << b1 << endl;
	cout << b2 << endl;
	/*and*/
	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && false) << endl;
	/*or*/
	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || false) << endl;

	cout << isequal(1, 1) << endl;
	cout << isequal(0, 3) << endl;
	
	bool b;
	cin >> b;
	cout << "your input: " << b << endl;
	return 0;
}

