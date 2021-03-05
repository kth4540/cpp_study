#include <iostream>
#include "MyArray.h"
using namespace std;
int main()
{
	MyArray<char> my_arr(10);

	for (int i = 0; i < my_arr.getLength(); ++i)
		my_arr[i] = i + 65;
	my_arr.print();
	return 0;
}
