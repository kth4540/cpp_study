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
	//const �� constexpr �� ���� : �ʱ�ȭ �ñ�
	//const-> �ʱ�ȭ�� ��Ÿ�ӱ��� ���� ����(��Ÿ�� ���)
	//constexpr-> ������ ������ �ʱ�ȭ�� �Ǿ��־����

	return 0;
}
