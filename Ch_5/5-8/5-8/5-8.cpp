#include <iostream>
using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return;
	}
	cout << "hello" << endl;
}

int main()
{
//	breakOrReturn();

	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << i << endl;
	//	if (i == 5)break;
	//}

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			continue;
		cout << i << endl;
	}

	return 0;
}
