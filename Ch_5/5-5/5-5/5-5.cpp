#include <iostream>
using namespace std;
int main()
{
	cout << "while-loop test" << endl;
	//while (1)
	//{
	//	static int count = 0;
	//	cout << count << endl;
	//	++count;
	//	if (count == 10)
	//		break;
	//}

	//////////////

	//int count = 1;
	//while (count < 100)
	//{
	//	if (count % 5 == 0)
	//		cout << "hello" << count << endl;
	//	count++;
	//}

	int outer_count = 1;
	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
			cout << inner_count++ << " ";
		cout << endl;
		++outer_count;
	}
	return 0;
}
