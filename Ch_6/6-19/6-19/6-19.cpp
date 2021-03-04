#include <iostream>
using namespace std;

enum type
{
	INT,
	FLOAT,
	CHAR
};
int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	//ptr = &c;

	cout <<&f << endl;
	cout << *static_cast<float*>(ptr) << endl;

	type t = FLOAT;

	if (t == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if (t == INT)
		cout << *static_cast<int*>(ptr) << endl;
	else if (t == CHAR)
		cout << *static_cast<char*>(ptr) << endl;

	return 0;
}
