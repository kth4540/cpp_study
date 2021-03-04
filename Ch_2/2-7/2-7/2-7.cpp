#include <iostream>
using namespace std;
int main()
{
	char c1(65);
	char c2('A');

	cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	/*c style casting*/
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	/*cpp style casting*/
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	return 0;
}
