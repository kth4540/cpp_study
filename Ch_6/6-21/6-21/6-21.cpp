#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printlength(array<int, 5>&my_arr)
{
	cout << my_arr.size() << endl;
}
int main()
{
	//int arr[5] = { 1,2,3,4,5 };
	array<int, 5>my_arr = { 1,2,3,4,5 };
	my_arr = { 4,1,5,3,8 };

//	cout << my_arr[10] << endl;	// üũ ���� ����
//	cout << my_arr.at(10) << endl;	// üũ�ؼ� ������ ����� ����ó��

	printlength(my_arr);

	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;

	sort(my_arr.begin(), my_arr.end());

	for (auto element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}
