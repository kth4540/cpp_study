#include <iostream>
using namespace std;

//template
auto add(int x, int y)	// parameter���� auto�� ����� �� ����
{
	return x + y;
}

int main()
{
	auto a = 123;
	auto b = 123.0;
	auto c = 123.0f;
	auto result = add(1, 2);
	return 0;
}
