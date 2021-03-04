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
	printarr(my_arr, 100);	//assert 조건에 의해 종료
	//release 에서는 실행 x
	//debug에서는 fail 이면 강제종료

	const int x = 5;
	static_assert(x == 5, "x should be 5");	
	//compile time에서 결정될 때만 사용가능
	return 0;
}
