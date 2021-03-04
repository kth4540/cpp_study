#include <iostream>
#include <cassert>
#include <array>
using namespace std;
void printarr(const array<int, 5>& my_arr, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_arr.size() - 1);

	cout << my_arr[ix] << endl;
}
int main()
{
	const int num = 5;
	assert(num == 5);

	array<int, 5>my_arr{ 1,2,3,4,5 };
	printarr(my_arr, 100);	//assert ���ǿ� ���� ����
	//release ������ ���� x
	//debug������ fail �̸� ��������

	const int x = 5;
	static_assert(x == 5, "x should be 5");	
	//compile time���� ������ ���� ��밡��
	return 0;
}
