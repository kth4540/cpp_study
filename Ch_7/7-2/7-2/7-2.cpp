#include <iostream>
using namespace std;

void dosome(int y)
{
	cout << "in func" << y << " " << &y << endl;
}
int main()
{
	dosome(5);
	int x = 6;
	cout << "in main" << x << " " << &x << endl;

	dosome(x);
	dosome(x + 1);
	return 0;
}
