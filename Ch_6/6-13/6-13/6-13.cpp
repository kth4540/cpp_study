#include <iostream>
using namespace std;
int main()
{
	//int length = 5;
	//cin >> length;

	//int* arr = new int[length] {11,22,33,44,55};

	//arr[0] = 1;
	//arr[1] = 2;

	//for (int i = 0; i < length; ++i)
	//{
	//	cout << arr[i] << endl;
	//	cout << &arr[i] << endl;
	//}
	//delete[] arr;

	int fixedarr[] = { 1,2,3,4,5 };

	int* arr = new int[5]{ 1,2,3,4,5 };

	delete[] arr;
}
