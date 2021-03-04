#include <iostream>
using namespace std;
int a = 2;

namespace works1
{
	void dosomething()
	{
		a += 3;
	}
}
namespace works2
{
	void dosomething(int b)
	{
		a += 5;
	}
}
int main()
{
	int apple = 5;
	cout << apple << endl;

	if (true)
	{
		int apple = 1;
		cout << apple << endl;
	}

	cout << apple << endl;

	works1::dosomething();
	works2::dosomething();

	return 0;
}
