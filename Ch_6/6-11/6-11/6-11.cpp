#include <iostream>
using namespace std;

const char* getname()
{
	return "jackjack";
}

int main()
{
	char name[] = "jack jack";
	const char* name2 = getname();
	const char* name3 = getname();
	cout << name << endl;

	cout << (uintptr_t)name2 << endl;
	cout << (uintptr_t)name3 << endl;
	return 0;
}
