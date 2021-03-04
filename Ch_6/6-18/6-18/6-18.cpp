#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int fib[] = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	//for (int& number : fib)
	//{
	//	number = 10;
	//}
	//cout << endl;

	int max_num = numeric_limits<int>::lowest();

	for (const auto& n : fib)
		max_num = max(max_num, n);

	cout << max_num << endl;

	return 0;
}
