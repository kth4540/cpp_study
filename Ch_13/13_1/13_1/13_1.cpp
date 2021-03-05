#include <iostream>
#include "Cents.h"
using namespace std;
//int getMax(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//double getMax(double x, double y)
//{
//	return (x > y) ? x : y;
//}

template<typename T>
T getMax(T x, T y)
{
	return(x > y) ? x : y;
}
int main()
{
	cout << getMax(1, 2) << endl;
	cout << getMax(3.14, 1.592) << endl;
	cout << getMax('a', 'c') << endl;
	cout << getMax(Cents(5), Cents(9)) << endl;	//-> class operator ÇÊ¿ä

	return 0;
}
