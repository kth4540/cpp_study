#include <iostream>
using namespace std;

struct mystruct
{
	int arr[5] = { 9,7,5,3,1 };
};

void dosomething(mystruct ms)
{
	cout << sizeof(ms.arr) << endl;
}

void printarray(int array[])
{
	cout << sizeof(array) << endl;	//-> parameter로 받으면 pointer가 됨
}
int main()
{

	//cout << arr[0] << " " << arr[1] << endl;
	//cout << arr << endl;
	//cout << &(arr[0]) << endl;

	//cout << *arr << endl;

	//char name[] = "jackjack";
	//cout << *name << endl;

	//cout << sizeof(arr) << endl;
	//int* ptr = arr;
	//cout << sizeof(ptr) << endl;

	mystruct ms;
	cout << ms.arr[0] << endl;
	cout << sizeof(ms.arr) << endl;

	dosomething(ms);
	return 0;
}
