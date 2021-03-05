#include "MyArray.h"
using namespace std;
int main()
{
	//std::vector<double>my_arr; my_arr.resize(100);
	//std::array<double>my_arr(100);
	//	-> size가 runtime에 결정됨	-> size를 변수로 넣어도 문제 없음

	const int tmp = 100;
	MyArray<double, 100>my_arr;
	//->size가 compile time에 결정됨. 상수만 가능

	for (int i = 0; i < my_arr.getLength(); ++i)
		my_arr[i] = i + 65;
	my_arr.print();
	return 0;
}
