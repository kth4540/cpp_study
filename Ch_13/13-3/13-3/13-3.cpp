#include "MyArray.h"
using namespace std;
int main()
{
	//std::vector<double>my_arr; my_arr.resize(100);
	//std::array<double>my_arr(100);
	//	-> size�� runtime�� ������	-> size�� ������ �־ ���� ����

	const int tmp = 100;
	MyArray<double, 100>my_arr;
	//->size�� compile time�� ������. ����� ����

	for (int i = 0; i < my_arr.getLength(); ++i)
		my_arr[i] = i + 65;
	my_arr.print();
	return 0;
}
