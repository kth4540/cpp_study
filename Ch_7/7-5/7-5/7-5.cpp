#include <iostream>
#include <array>
#include <tuple>
using namespace std;
int& getval(int x)
{
	int val = x * 2;
	return val;
}	//val은 함수가 종료되면 사라지기 때문에 위험함

int* allocmem(int size)
{
	return new int[size];
}

int& get(array<int, 100>& my_arr, int ix)
{
	return my_arr[ix];
}

tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return make_tuple(a, d);
}


int main()
{
	//int value = *getval(3);
	//cout << value << endl;

	//int* arr = allocmem(1024);

	//int val = getval(5);
	//cout << val << endl;

	//array<int, 100>my_arr;
	//my_arr[30] = 10;
	//get(my_arr, 30) = 1024;
	//cout << my_arr[30] << endl;

	tuple<int, double>my_tp = getTuple();
	cout << get<0>(my_tp) << endl;	//a
	cout << get<1>(my_tp) << endl;	//d
	return 0;
}
