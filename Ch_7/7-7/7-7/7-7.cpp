#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
}
int add(double x, double y)
{
	return x + y;
}

void getrandom(int& x) {}
void getrandom(double& d) {}

void print(char* val) {}
void print(int val) {}
//매개변수가 달라야 overloading 가능
//함수 오버로딩은 compile 때 결정이 되야함
int main()
{
	add(1, 2);
	add(3.0, 4.3);

	print(0);
	print('a');

	return 0;
}
