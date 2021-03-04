#include <iostream>
using namespace std;
int main()
{
	//int val = 7;
	//int* ptr = &val;

	//cout << uintptr_t(ptr) << endl;
	//cout << uintptr_t(ptr+1) << endl;

	int arr[] = { 9,7,5,3,1 };
	int* ptr = arr;
	for (int i = 0; i < 5; ++i)
	{
		//cout << arr[i] << " " << (uintptr_t)&arr[i] << endl;
		cout << *(ptr+i) << " " << (uintptr_t)(ptr+i) << endl;
	}
	return 0;
}
