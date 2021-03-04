#include <iostream>
using namespace std;

void printnumber(int my_number)
{
	cout << my_number << endl;
}
int main()
{
	const double gravity{ 9.8 };

	int number;
	cin >> number;
	const int special_number(number);

	constexpr int my_const(123);
	//const 와 constexpr 의 차이 : 초기화 시기
	//const-> 초기화를 런타임까지 지연 가능(런타임 상수)
	//constexpr-> 컴파일 시점에 초기화가 되어있어야함

	return 0;
}
