#include <iostream>
using namespace std;

int main()
{
	const int num_stu = 5;

	int scores[num_stu] = { 84,92,67,81,56 };
	//�迭 �̸��� parameter�� ����� ��� �ּҰ� ���޵�

	int total = 0;

	for (int i = 0; i < num_stu; ++i)
		total+=scores[i];
	
	return 0;
}
