#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
void addone(int& y)
{
	y += 1;
	cout << y << " " << &y << endl;
}

void getsincos(double deg, double& sin_out, double& cos_out)
{
	const double pi = 3.141592;
	double rad = deg * pi / 180.0;
	sin_out = sin(rad);
	cos_out = cos(rad);
}
void foo(int*& x)
{
	cout << x << endl;
}

void printel(vector<int>& arr)
{

}
int main()
{
	//int x = 5;
	//cout << x << " " << &x << endl;
	//addone(x);
	//cout << x << " " << &x << endl;
/**/
	//double sin(0.0);
	//double cos(0.0);

	//getsincos(30.0, sin, cos);

	//cout << sin << " " << cos << endl;
/**/
	//int x = 5;
	//int* ptr = &x;

	//cout << ptr << " " << &ptr << endl;
	//foo(ptr);
/**/
//	int arr[]{ 1,2,3,4 };
	vector<int>arr{ 1,2,3,4 };
	return 0;
}
