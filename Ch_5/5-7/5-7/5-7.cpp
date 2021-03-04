#include <iostream>

int pow(int base, int exponent)
{
	int result = 1;
	for (int count = 0; count < exponent; ++count)
		result *= base;
	return result;
}

using namespace std;
int main()
{
	for (int count = 0; count < 10; ++count)
		cout << count << endl;	//iteration

	cout << pow(2, 4) << endl;

	return 0;
}
