#include <iostream>
using namespace std;

void dosome(int &n)
{
	n = 10;
	cout << "dosome" << n << endl;
}

void printelem(int(&arr)[5])
{
	for (int i = 0; i < 5; ++i)
		cout << arr[i] << " ";
	cout << endl;
}
int main()
{
	//int val = 5;
	//int* ptr = &val;
	//int &ref = val;

	//cout << ref << endl;
	//ref = 10;

	//cout << &val << endl;
	//cout << &ref << endl;
	//cout << ptr << endl;
	//cout << &ptr << endl;	//-> '포인터' 의 주소

	//int x = 5;
	//int& ref = x;

	//const int y = 8;
	//const int& ref = y;

	//int val1 = 5;
	//int val2 = 10;

	//int& ref1 = val1;
	//cout << ref1 << endl;
	//ref1 = val2;
	//cout << ref1 << endl;

	//int n = 5;
	//cout << n << endl;
	//dosome(n);
	//cout << n << endl;

	const int length = 5;
	int arr[length] = { 1,2,3,4,5 };
	printelem(arr);
	return 0;
}
