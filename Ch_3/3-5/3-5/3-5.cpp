#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//int x, y;
	//cin >> x >> y;
	//cout << "your input values are : " << x <<" "<< y << endl;
	//if (x == y)
	//	cout << "equal" << endl;
	//if (x != y)
	//	cout << "not equal" << endl;
	//if (x > y)
	//	cout << "x is greater than y" << endl;
	//if (x < y)
	//	cout << "x is less than y" << endl;

	double d1(100 - 99.99);	//0.001
	double d2(10 - 9.99);	//0.001

	if (d1 == d2)
		cout << "not equal" << endl;
	else
	{
		cout << "not equal" << endl;
		if (d1 > d2)
			cout << "d1>d2" << endl;
		else
			cout << "d1<d2" << endl;
	}

	cout << abs(d1 - d2) << endl;
	return 0;
}
