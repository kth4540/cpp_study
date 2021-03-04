#include <iostream>
using namespace std;
void dosome(const int &x)
{
	cout << x << endl;
}
int main()
{
	/*int x = 5;
	int& ref_x = x;

	dosome(x);
	dosome(1);
	dosome(3 * 4);*/

	int  a = 1;

	dosome(a);
	dosome(1);
	dosome(a + 3);
	return 0;
}
