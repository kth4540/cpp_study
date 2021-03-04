#include <iostream>
using namespace std;

int min(int x, int y)
{
	if (x > y)
		return y;
	else
		return x;
}

int main()
{
	int x,y;
	cin >> x >> y;

	//if (x > 10)
	//{
	//	cout << x << "is greater than 10" << endl;
	//	cout << "test 1" << endl;
	//}
	//else
	//{
	//	cout << x << "not is greater than 10" << endl;
	//	cout << "test 1" << endl;
	//}

	//if (1)
	//	int x = 5;
	//else
	//	int x = 6;

	//cout << x << endl;

	if (x == y)
		cout << "same" << endl;
	else
	{
		//
	}
		cout << "not same" << endl;

	return 0;
}
