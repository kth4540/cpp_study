#include <iostream>
using namespace std;

void dosomething(int x)
{
	x = 123;
	cout << x << endl;
}
int main()
{
	int x = 0;

	//cout << x << " " << &x << endl;
	////int x = 1; 
	//{
	//	int x = 1;
	//	cout << x << " " << &x << endl;

	//}

	//{
	//	int x = 2;
	//	cout << x << " " << &x << endl;

	//}

	cout << x << endl;
	dosomething(x);
	cout << x << endl;
	return 0;
}
