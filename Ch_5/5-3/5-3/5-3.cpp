#include <iostream>
using namespace std;

enum class colors
{
	black,
	white,
	red,
	green,
	blue
};

void printcolorname(colors cl)
{
	switch (static_cast<int>(cl))
	{
	case 0:
		cout << "black" << endl;
		break;
	case 1:
		cout << "white" << endl;
		break;
	}
}
int main()
{
	int x;
	cin >> x;
	switch (x)
	{
	case 0:
	{
		int y = 5;
		y = y + x;
		cout << y << endl;
		break;
	}
	case 1:
		int y = 5;
		y = y - x;
		cout << y << endl;
		break;
	default:
		cout << "undefined input" << endl;
	}

	return 0;
}
