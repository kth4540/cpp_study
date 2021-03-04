#include <iostream>
using namespace std;

int main()
{
	const int num_stu = 5;

	int scores[num_stu] = { 84,92,67,81,56 };
	//배열 이름을 parameter로 사용할 경우 주소가 전달됨

	int total = 0;

	for (int i = 0; i < num_stu; ++i)
		total+=scores[i];
	
	return 0;
}
