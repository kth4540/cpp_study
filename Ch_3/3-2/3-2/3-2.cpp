#include <iostream>
using namespace std;
int main()
{
	int x = 7;
	int y = 4;
	int z = x % y;

	cout << x / y << " " << z << endl;
	cout << float(x) << endl;
	cout << x / float(y) << endl;
	cout << float(x) / y << endl;

	return 0;
}
