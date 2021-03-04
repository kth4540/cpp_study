#include <iostream>
using namespace std;
int main()
{
	double x;

tryagain :

	cout << "enter a non-negative number" << endl;
	cin >> x;
	if (x < 0.0)
		goto tryagain;
	cout << sqrt(x) << endl;

	return 0;
}
